import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    return pd.DataFrame(views.query("author_id == viewer_id")['author_id'].unique(),columns = ['id']).sort_values(['id'])
    