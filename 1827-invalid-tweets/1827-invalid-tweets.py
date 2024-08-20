import pandas as pd

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    tweets['content_length'] = tweets['content'].apply(len)
    return tweets.query("content_length > 15")[['tweet_id']]