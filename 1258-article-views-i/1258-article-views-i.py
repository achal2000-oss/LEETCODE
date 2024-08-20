import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    return (((views.query("author_id == viewer_id")[['author_id']]
                ).sort_values(['author_id'],ascending = [True])
                ).drop_duplicates(subset = ['author_id'], keep = 'first')
                ).rename(columns = {'author_id': "id"})

    