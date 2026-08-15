import os

def generate_invitations(template, attendees):
    # Check input types
    if not isinstance(template, str):
        print(f"Error: Invalid template type. Expected str, got {type(template).__name__}.")
        return
    if not isinstance(attendees, list) or not all(isinstance(item, dict) for item in attendees):
        print(f"Error: Invalid attendees type. Expected list of dicts, got {type(attendees).__name__}.")
        return

    # Handle empty inputs
    if not template.strip():
        print("Template is empty, no output files generated.")
        return
    if not attendees:
        print("No data provided, no output files generated.")
        return

    # Process each attendee
    for index, attendee in enumerate(attendees, start=1):
        name = attendee.get("name") or "N/A"
        event_title = attendee.get("event_title") or "N/A"
        event_date = attendee.get("event_date") or "N/A"
        event_location = attendee.get("event_location") or "N/A"

        processed = template.replace("{name}", str(name))
        processed = processed.replace("{event_title}", str(event_title))
        processed = processed.replace("{event_date}", str(event_date))
        processed = processed.replace("{event_location}", str(event_location))

        output_filename = f"output_{index}.txt"
        with open(output_filename, 'w') as f:
            f.write(processed)

