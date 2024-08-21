import pandas as pd

def find_patients(patients: pd.DataFrame) -> pd.DataFrame:
    #pattern = r'\S+\s(DIAB1).*$'
    pattern = r'\bDIAB1'
    mask = patients['conditions'].str.contains(pattern)
    return patients[mask]