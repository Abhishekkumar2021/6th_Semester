from phonenumbers import geocoder, carrier, timezone, is_valid_number, parse, format_number

number_1 = parse("+917380662927", "CH") # CH for Country History

ch_number = geocoder.description_for_number(number_1, "en")
print(ch_number)

service_number = carrier.name_for_number(number_1, "en")
print(service_number)

time_zone = timezone.time_zones_for_number(number_1)
print(time_zone)

valid_number = is_valid_number(number_1)
print(valid_number)


