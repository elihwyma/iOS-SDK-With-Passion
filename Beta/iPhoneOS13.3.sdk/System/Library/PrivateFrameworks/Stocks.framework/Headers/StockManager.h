/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSUbiquitousKeyValueStore;

@interface StockManager : NSObject

{
    NSMutableArray *_defaultListStockSymbols;
    _Bool _shouldPostSyncNotifications;
    NSMutableArray *_stocksList;
    NSMutableArray *_chartDataLRUCache;
    double _lastModifiedTime;
    _Bool _needRemoteAddNotification;
    _Bool _needRemoteDeleteNotification;
    _Bool _needRemoteMoveNotification;
    NSUbiquitousKeyValueStore *_syncedKVStore;
}

+ (id)sharedManager;
+ (void)clearSharedManager;

- (id)init;
- (void)dealloc;
- (void)UpdateChartDataInLRU:(id)arg1;
- (void)RemoveChartDataFromLRU:(id)arg1;
- (void)reloadStocksFromDefaults;
- (id)stocksList;
- (void)saveDataChanges;
- (id)stockWithSymbol:(id)arg1;
- (void)handleSyncedDataChanged:(id)arg1;
- (id)_defaultStockDictionaries;
- (_Bool)setLocalStockListFromSyncableStockList:(id)arg1;
- (void)saveListChanges;
- (void)clearCachedChartData;
- (id)makeSyncableStockListFromList:(id)arg1;
- (void)_addStock:(id)arg1 withRemoteNotification:(_Bool)arg2;
- (void)_removeStock:(id)arg1 withRemoteNotification:(_Bool)arg2;
- (void)DeleteChartData:(id)arg1;
- (void)_saveDataChangesWithStockDictionaries:(id)arg1;
- (id)stockForURL:(id)arg1;
- (void)addStock:(id)arg1;
- (void)removeStock:(id)arg1;
- (void)moveStockFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)clearCachedChartDataImageSets;
- (_Bool)anyMarketOpen;
- (void)purgeTransientData;
- (void)_checkForAddedStocks;
- (void)_checkForDeletedStocks;
- (void)_checkForMovedStocks;

@end
