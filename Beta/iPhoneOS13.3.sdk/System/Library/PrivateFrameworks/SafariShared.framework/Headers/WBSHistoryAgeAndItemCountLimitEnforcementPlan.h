/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSSet, WBSHistoryDeletionPlan;

@protocol WBSHistoryStore;

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject

{
    id <WBSHistoryStore> _store;
    NSSet *_items;
    double _ageLimit;
    unsigned long long _itemCountLimit;
    long long _reason;
    NSSet *_itemsToKeep;
    NSSet *_itemsToDiscard;
    WBSHistoryDeletionPlan *_deletionPlan;
}

@property (nonatomic, readonly) NSSet *itemsToKeep;
@property (nonatomic, readonly) NSSet *itemsToDiscard;
@property (nonatomic, readonly) WBSHistoryDeletionPlan *deletionPlan;

- (void)execute;
- (void)prepare;
- (id)_itemsToDiscard;
- (id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned long long)arg4 reason:(long long)arg5;

@end
