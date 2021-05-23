/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface SCWatchlistDiff : NSObject

{
    NSArray *_addedStocks;
    NSDictionary *_indexesOfAddedStocks;
    NSArray *_removedStocks;
    NSArray *_reorderedStocks;
    NSDictionary *_indexesOfReorderedStocks;
    NSArray *_stocksPreDiff;
    NSArray *_stocksPostDiff;
}

@property (copy, nonatomic, readonly) NSArray *addedStocks;
@property (copy, nonatomic, readonly) NSDictionary *indexesOfAddedStocks;
@property (copy, nonatomic, readonly) NSArray *removedStocks;
@property (copy, nonatomic, readonly) NSArray *reorderedStocks;
@property (copy, nonatomic, readonly) NSDictionary *indexesOfReorderedStocks;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (copy, nonatomic, readonly) NSArray *stocksPreDiff;
@property (copy, nonatomic, readonly) NSArray *stocksPostDiff;

+ (id)reorderedStocksFrom:(id)arg1 to:(id)arg2;

- (id)initWithOldStocks:(id)arg1 newStocks:(id)arg2;

@end
