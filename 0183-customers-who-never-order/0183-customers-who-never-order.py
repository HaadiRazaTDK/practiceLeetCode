import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    filtered_customers = customers[~customers['id'].isin(orders['customerId'])]
    filtered_customers = filtered_customers.rename(columns={'name': 'Customers'})
    return filtered_customers[['Customers']]
    