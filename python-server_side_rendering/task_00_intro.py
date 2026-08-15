import os

def generate_invitations(template, attendees):
    # Check template parameter type
    if not isinstance(template, str):
        print("Invalid input type: template must be a string.")
        return

    # Check attendees parameter type
    if not isinstance(attendees, list) or not all(isinstance(item, dict) for item in attendees):
        print("Invalid input type: attendees must be a list of dictionaries.")
        return

    # Check empty template
    if not template:
        print("Template is empty, no output files generated.")
        return

    # Check empty attendees list
    if not attendees:
        print("No data provided, no output files generated.")
        return

    # Process each attendee
    for index, attendee in enumerate(attendees, start=1):
        output_filename = f"output_{index}.txt"

        name = attendee.get("name") if attendee.get("name") is not None else "N/A"
        event_title = attendee.get("event_title") if attendee.get("event_title") is not None else "N/A"
        event_date = attendee.get("event_date") if attendee.get("event_date") is not None else "N/A"
        event_location = attendee.get("event_location") if attendee.get("event_location") is not None else "N/A"

        processed = template.replace("{name}", str(name))
        processed = processed.replace("{event_title}", str(event_title))
        processed = processed.replace("{event_date}", str(event_date))
        processed = processed.replace("{event_location}", str(event_location))

        with open(output_filename, 'w') as f:
            f.write(processed)
