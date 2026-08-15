# Python - Server-Side Rendering (SSR)

## Description
This project focuses on **Server-Side Rendering (SSR)** using Python, Flask, and the Jinja templating engine. It demonstrates how to dynamically generate HTML pages on the server and fetch data from multiple data sources, including JSON, CSV files, and SQLite databases.

## Learning Objectives
- Understand the concepts and benefits of Server-Side Rendering (SSR) compared to Client-Side Rendering (CSR).
- Implement SSR using Python and the **Flask** framework.
- Utilize the **Jinja** templating engine for dynamic content rendering, loops, conditionals, and template inheritance.
- Read, parse, and serve data dynamically from **JSON**, **CSV**, and **SQLite** databases.
- Handle URL query parameters and implement error handling for missing data or invalid sources.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`, `vscode`
- All code files interpreted on Ubuntu 20.04 LTS using Python 3.8+
- Python code style follows PEP 8 standards
- All files must end with a new line
- All scripts must be executable

## Project Structure & Tasks

| Task File | Description |
| --- | --- |
| `task_00_intro.py` | Python function `generate_invitations` to format plain-text event invitations from placeholders and attendee data with custom error handling. |
| `task_01_jinja.py` | Basic Flask application serving static/template-based routes (`/`, `/about`, `/contact`) using reusable `header.html` and `footer.html` Jinja components. |
| `task_02_logic.py` | Route `/items` that reads items from `items.json` and renders an unordered list dynamically using Jinja loops and conditional checks. |
| `task_03_files.py` | Dynamic product catalog route `/products` supporting `source=json` and `source=csv` query parameters, as well as filtering by optional `id`. |
| `task_04_db.py` | Extends the `/products` route to query an SQLite database (`products.db`) when `source=sql` is passed, alongside JSON and CSV sources. |

## Setup & Testing Instructions

1. **Install Flask:**
```bash
pip install Flask
