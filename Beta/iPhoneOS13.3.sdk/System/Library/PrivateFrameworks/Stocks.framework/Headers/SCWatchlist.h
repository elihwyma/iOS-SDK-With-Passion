/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSHashTable, SCKDatabase, SCKStartupQueue;

@protocol OS_dispatch_queue, SCWatchlistDefaultsProviding, SCWatchlistMetadataProviding;

@interface SCWatchlist : NSObject

{
    SCKDatabase *_database;
    id <SCWatchlistMetadataProviding> _metadataProvider;
    id <SCWatchlistDefaultsProviding> _defaultsProvider;
    NSHashTable *_observers;
    SCKStartupQueue *_startupQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) SCKDatabase *database;
@property (retain, nonatomic) id <SCWatchlistMetadataProviding> metadataProvider;
@property (retain, nonatomic) id <SCWatchlistDefaultsProviding> defaultsProvider;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SCKStartupQueue *startupQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)supportedCommands;
+ (id)zoneSchema;
+ (id)zoneMergeHandler;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_enqueueStartupSequence;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaultsProvider:(id)arg3;
- (id)_sortedStocks:(id)arg1 withSymbolOrder:(id)arg2;
- (void)removeSymbol:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)database:(id)arg1 didChangeZone:(id)arg2 from:(id)arg3 to:(id)arg4;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaults:(id)arg3;
- (void)fetchStocksWithCompletion:(CDUnknownBlockType)arg1;
- (void)addStock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeStock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reorderStock:(id)arg1 toIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
