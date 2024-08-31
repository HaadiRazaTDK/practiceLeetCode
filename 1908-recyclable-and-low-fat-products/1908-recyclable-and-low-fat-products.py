import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    filtered_product = products[(products['low_fats']=='Y') & (products['recyclable']=='Y')]
    return filtered_product[['product_id']]
