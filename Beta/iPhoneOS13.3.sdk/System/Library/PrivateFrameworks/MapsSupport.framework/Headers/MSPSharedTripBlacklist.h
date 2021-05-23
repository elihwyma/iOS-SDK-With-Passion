/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSUbiquitousKeyValueStore;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripBlacklist : NSObject

{
    NSMutableSet *_blockIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUbiquitousKeyValueStore *_kvStore;
    NSDate *_lastUpdateDate;
}

- (id)init;
- (id)description;
- (_Bool)containsIdentifier:(id)arg1;
- (void)_storeIdentifiers;
- (void)blockIdentifier:(id)arg1;
- (void)_loadIdentifiers;
- (void)updateBlockedListFromStore:(id)arg1;
- (_Bool)containsAnyIdentifiersInArray:(id)arg1;
- (void)unblockIdentifiers:(id)arg1;
- (void)clearList;

@end
