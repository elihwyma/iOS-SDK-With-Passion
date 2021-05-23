/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Stocks/YQLRequest.h>

@class Stock, StockChartData;

@protocol ChartUpdaterDelegate;

@interface ChartUpdater : YQLRequest

{
    Stock *_stock;
    StockChartData *_currentChartData;
    CDUnknownBlockType _updateCompletionHandler;
    id <ChartUpdaterDelegate> _delegate;
    long long _interval;
}

@property (weak, nonatomic) id <ChartUpdaterDelegate> delegate;
@property (readonly) long long interval;

+ (id)_rangeStringForInterval:(long long)arg1;

- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)parseData:(id)arg1;
- (void)didParseData;
- (id)aggregateDictionaryDomain;
- (_Bool)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)parseDataSeriesDictionary:(id)arg1;
- (_Bool)updateChartForStock:(id)arg1 interval:(long long)arg2;
- (void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2;
- (id)dataSeries;

@end
