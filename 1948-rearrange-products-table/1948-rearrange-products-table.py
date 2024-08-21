import pandas as pd

def rearrange_products_table(products: pd.DataFrame) -> pd.DataFrame:
    new_df = products.melt(id_vars='product_id',var_name='store',value_vars=['store1','store2','store3'],value_name='price')
    return new_df[~new_df['price'].isnull()].sort_values(['product_id'], ascending = [True])