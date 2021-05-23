/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPSpotlightQueryDescriptor, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet;

@protocol FPSpotlightCollectorDelegate, OS_dispatch_queue;

@interface FPSpotlightCollector : NSObject

{
    NSMutableDictionary *_itemsByBundleAndCSID;
    _Bool _suspended;
    unsigned long long _numberOfRecoveryAttempts;
    NSDate *_lastStartOfRecovery;
    NSMapTable *_queryToMountPoint;
    _Bool _gathering;
    id <FPSpotlightCollectorDelegate> _delegate;
    FPSpotlightQueryDescriptor *_queryDescriptor;
    unsigned long long _itemsOrigin;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableSet *_observers;
    NSMutableArray *_queries;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) NSMutableArray *queries;
@property (nonatomic, getter=isGathering) _Bool gathering;
@property (nonatomic) unsigned long long itemsOrigin;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;
@property (weak, nonatomic) id <FPSpotlightCollectorDelegate> delegate;
@property (nonatomic, readonly) FPSpotlightQueryDescriptor *queryDescriptor;

+ (id)processingQueue;

- (id)init;
- (id)description;
- (void)resume;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)suspend;
- (void)_start;
- (void)_addObserver:(id)arg1;
- (void)_stop;
- (id)initWithDescriptor:(id)arg1;
- (void)_clear;
- (id)allItems;
- (id)allObservers;
- (id)allItemsForObserver:(id)arg1;
- (id)_mountPointForExistingSearchQuery:(id)arg1;
- (void)_removeItemsForQuery:(id)arg1 mountPoint:(id)arg2;
- (id)_createQueryForMountPoint:(id)arg1;
- (_Bool)_shouldRemoveItemsFromObserver:(id)arg1;
- (unsigned long long)_itemsOriginForItems:(id)arg1;
- (id)filterItems:(id)arg1 forObserver:(id)arg2 excludedItemIDs:(id *)arg3;
- (_Bool)isQueryCancelled:(id)arg1;
- (_Bool)_areItemsTransientFromBundleIdentifier:(id)arg1;
- (void)_regather;
- (_Bool)_shouldFilterUpdatesForObserver:(id)arg1;
- (void)setNeedsItemsOriginUpdate;
- (void)queryDidFinishGathering:(id)arg1;
- (void)query:(id)arg1 didUpdateItems:(id)arg2;
- (void)query:(id)arg1 didRemoveItemsWithCSIdentifiers:(id)arg2 inBundle:(id)arg3;
- (void)query:(id)arg1 didFinishWithError:(id)arg2;
- (id)_mountPointsForDescriptor;
- (id)_createQueriesForMountPoints:(id)arg1;
- (id)_allItemsForMountPoint:(id)arg1;
- (void)mountPointsDidChange:(id)arg1;

@end
