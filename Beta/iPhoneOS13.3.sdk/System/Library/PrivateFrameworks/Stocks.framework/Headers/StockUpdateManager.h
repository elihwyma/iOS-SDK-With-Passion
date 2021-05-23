/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSString;

@interface StockUpdateManager : NSObject

{
    _Bool _postingRemoteUpdateNotification;
    NSMutableArray *_activeUpdaters;
    NSMutableArray *_inactiveUpdaters;
    NSHashTable *_updateObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)reset;
- (_Bool)isLoading;
- (void)removeUpdateObserver:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (void)_stocksDidReload;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)hadError;
- (id)availableStockUpdater;
- (void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(_Bool)arg3 forceUpdate:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateStockComprehensive:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateStockComprehensive:(id)arg1 forced:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateAllStocksBasicWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateStocksBasic:(id)arg1 forced:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_updaterDidCancelOrFinish:(id)arg1;
- (void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(_Bool)arg3;
- (void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(_Bool)arg3;
- (void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(_Bool)arg4;
- (void)stocksDidUpdateRemotely;
- (void)resetUpdaters;
- (void)updateStocksComprehensive:(id)arg1;
- (void)updateStockComprehensive:(id)arg1;
- (void)updateAllStocksBasic;
- (void)updateAllStocksBasic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateStaleStocksBasicWithCompletion:(CDUnknownBlockType)arg1;

@end
