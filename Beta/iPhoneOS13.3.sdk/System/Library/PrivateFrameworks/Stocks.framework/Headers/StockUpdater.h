/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/YQLRequest.h>

@class NSArray, NSError;

@protocol StockUpdaterDelegate;

@interface StockUpdater : YQLRequest

{
    NSError *_lastError;
    _Bool _isComprehensive;
    _Bool _forceUpdate;
    id <StockUpdaterDelegate> _delegate;
    NSArray *_requestStocks;
    NSArray *_pendingStocks;
    CDUnknownBlockType _updateCompletionHandler;
}

@property (weak, nonatomic) id <StockUpdaterDelegate> delegate;
@property (nonatomic, readonly) _Bool isComprehensive;
@property (nonatomic, readonly) _Bool forceUpdate;
@property (retain, nonatomic) NSArray *requestStocks;
@property (retain, nonatomic) NSArray *pendingStocks;
@property (copy, nonatomic) CDUnknownBlockType updateCompletionHandler;

- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)didParseData;
- (_Bool)hadError;
- (_Bool)_updateStocks:(id)arg1 comprehensive:(_Bool)arg2 forceUpdate:(_Bool)arg3;
- (void)_parseExchangeDictionaries:(id)arg1;
- (void)_parseQuoteDictionaries:(id)arg1 withDataSourceDictionaries:(id)arg2;
- (id)aggregateDictionaryDomain;

@end
