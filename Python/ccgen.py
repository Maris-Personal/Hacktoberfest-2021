import requests
import json

bin = 423556
quantity = 5
r=requests.get(f"https://ccgennoice.herokuapp.com/gen?bin={bin}&quantity={quantity}")
res = json.loads(r.text)
if res["success"]:
    msg = ""
    for cc in res["result"]:
        msg += f"{cc['card_number']}|{cc['expiration_month']}|{cc['expiration_year']}|{cc['cvv']}\n"
    print(msg)
else:
    print(f"Error: {res['error']}")
