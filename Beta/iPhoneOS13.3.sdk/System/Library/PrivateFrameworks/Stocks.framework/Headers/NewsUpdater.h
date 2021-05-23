/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/YQLRequest.h>

@class Stock, StockNewsItemCollection;

@protocol NewsUpdaterDelegate;

@interface NewsUpdater : YQLRequest

{
    id <NewsUpdaterDelegate> _delegate;
    _Bool _firstLoad;
    double _lastResponseTimestamp;
    StockNewsItemCollection *_lastNewsItemCollection;
    Stock *_stock;
    CDUnknownBlockType _updateCompletionHandler;
}

@property (weak, nonatomic) id <NewsUpdaterDelegate> delegate;

+ (id)_newsItemCollectionCache;
+ (id)sharedNewsUpdater;

- (id)init;
- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)resetLocale;
- (void)didParseData;
- (id)aggregateDictionaryDomain;
- (void)clearNewsCacheOnDisk;
- (void)fetchNewsForStock:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)shouldReloadOnResume;
- (void)loadNewsCacheFromDiskForSymbol:(id)arg1;
- (void)fetchNewsForStock:(id)arg1;
- (void)saveLastResponse;

@end
