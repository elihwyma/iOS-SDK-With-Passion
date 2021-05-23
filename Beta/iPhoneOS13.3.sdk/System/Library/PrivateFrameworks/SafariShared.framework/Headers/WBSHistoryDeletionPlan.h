/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet, NSSet;

@protocol WBSHistoryStore;

@interface WBSHistoryDeletionPlan : NSObject

{
    id <WBSHistoryStore> _store;
    NSSet *_excludedItems;
    NSSet *_excludedVisits;
    NSMutableSet *_discoveredItemsToDelete;
    _Bool _wasPrepared;
    NSSet *_triggeringItems;
    NSSet *_triggeringVisits;
    NSSet *_discoveredVisitsToDelete;
    NSMapTable *_updatedLastVisitsByItem;
}

@property (nonatomic, readonly) NSSet *triggeringItems;
@property (nonatomic, readonly) NSSet *triggeringVisits;
@property (nonatomic, readonly) NSSet *discoveredItemsToDelete;
@property (nonatomic, readonly) NSSet *discoveredVisitsToDelete;
@property (nonatomic, readonly) NSSet *allItemsToDelete;
@property (nonatomic, readonly) NSSet *allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
@property (nonatomic, readonly) NSMapTable *allVisitsToDeleteByItemExcludingItemsBeingDeleted;
@property (nonatomic, readonly) NSMapTable *updatedLastVisitsByItem;
@property (nonatomic, readonly) _Bool wasPrepared;

- (void)execute;
- (void)prepare;
- (id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 reason:(long long)arg5;
- (void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2;
- (id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(CDUnknownBlockType)arg4;
- (id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4;

@end
