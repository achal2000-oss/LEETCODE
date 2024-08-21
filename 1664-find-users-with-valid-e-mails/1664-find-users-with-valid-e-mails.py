import pandas as pd
import re
def valid_emails(users: pd.DataFrame) -> pd.DataFrame:
    mask = r'^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode\.com$'
    return users[users['mail'].str.match(mask)]
    