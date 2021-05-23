/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSEnumerator.h>

@class BRCClientZone, BRCLocalItem, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCSyncUpEnumerator : NSEnumerator

{
    unsigned int _batchSize;
    unsigned int _maxDepth;
    unsigned int _should2PhasePCSChain;
    BRCClientZone *_clientZone;
    NSMutableSet *_whitelist;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    struct PQLResultSet *_enumerator;
    NSMutableArray *_stack;
    int _stage;
    unsigned long long _retryAfter;
    BRCLocalItem *_itemNeedingPCSChaining;
    NSMutableSet *_chainedParentIDWhitelist;
    NSMutableArray *_itemsNeedingUnshare;
}

@property (nonatomic, readonly) unsigned int batchSize;
@property (nonatomic, readonly) unsigned long long retryAfter;
@property (nonatomic, readonly) BRCLocalItem *itemNeedingPCSChaining;
@property (nonatomic, readonly) NSMutableSet *chainedParentIDWhitelist;
@property (nonatomic, readonly) NSMutableArray *itemsNeedingUnshare;

- (void)invalidate;
- (id)nextObject;
- (_Bool)isBlackListed:(id)arg1;
- (id)initWithClientZone:(id)arg1;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 descendantBlock:(CDUnknownBlockType)arg4;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3;
- (_Bool)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg1 now:(unsigned long long)arg2;
- (_Bool)_handleSharedItemWhichMovedToNewShare:(id)arg1 rootItem:(id)arg2;
- (_Bool)handleItemForOSUpgrade:(id)arg1 parentItemID:(id)arg2;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (struct PQLResultSet *)_documentsOrAliasesNeedingSyncUpEnumerator;
- (struct PQLResultSet *)_liveOrNewDirectoriesNeedingSyncUpEnumerator;
- (struct PQLResultSet *)_tombstoneLeavesNeedingSyncUpEnumerator;

@end
