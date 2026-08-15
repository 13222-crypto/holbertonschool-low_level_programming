import json
import csv
from flask import Flask, render_template, request

app = Flask(__name__)

def read_json_products():
    with open('products.json', 'r') as f:
        return json.load(f)

def read_csv_products():
    products = []
    with open('products.csv', 'r') as f:
        reader = csv.DictReader(f)
        for row in reader:
            products.append({
                "id": int(row["id"]),
                "name": row["name"],
                "category": row["category"],
                "price": float(row["price"])
            })
    return products

@app.route('/products')
def products():
    source = request.args.get('source')
    product_id = request.args.get('id')
    
    error = None
    products_list = []

    if source not in ['json', 'csv']:
        error = "Wrong source"
        return render_template('product_display.html', error=error)

    try:
        if source == 'json':
            products_list = read_json_products()
        elif source == 'csv':
            products_list = read_csv_products()
    except Exception:
        error = "Error reading source file"
        return render_template('product_display.html', error=error)

    if product_id:
        try:
            target_id = int(product_id)
            products_list = [p for p in products_list if p.get('id') == target_id]
            if not products_list:
                error = "Product not found"
        except ValueError:
            error = "Product not found"

    return render_template('product_display.html', products=products_list, error=error)

if __name__ == '__main__':
    app.run(debug=True, port=5000)
