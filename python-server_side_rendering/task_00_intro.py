def generate_invitations(template, attendees):
    # Check type of template
    if not isinstance(template, str):
        print("Invalid input type, template must be a string.")
        return

    # Check type of attendees
    if not isinstance(attendees, list) or not all(isinstance(item, dict) for item in attendees):
        print("Invalid input type, attendees must be a list of dictionaries.")
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

        name = attendee.get("name")
        if name is None:
            name = "N/A"

        event_title = attendee.get("event_title")
        if event_title is None:
            event_title = "N/A"

        event_date = attendee.get("event_date")
        if event_date is None:
            event_date = "N/A"

        event_location = attendee.get("event_location")
        if event_location is None:
            event_location = "N/A"

        content = template.replace("{name}", str(name))
        content = content.replace("{event_title}", str(event_title))
        content = content.replace("{event_date}", str(event_date))
        content = content.replace("{event_location}", str(event_location))

        with open(output_filename, 'w') as f:
            f.write(content)
