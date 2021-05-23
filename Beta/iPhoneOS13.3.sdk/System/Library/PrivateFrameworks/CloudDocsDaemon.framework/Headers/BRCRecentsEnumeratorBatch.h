/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

@protocol NSFileProviderEnumerationObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumeratorBatch : NSObject

{
    NSMutableOrderedSet *_toIndexItems;
    NSMutableOrderedSet *_deletedItemIDs;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSFileProviderEnumerationObserver> _observer;
    unsigned long long _rank;
}

@property (nonatomic) unsigned long long rank;

- (id)init;
- (id)description;
- (unsigned long long)batchCount;
- (void)addIndexOfItem:(id)arg1;
- (void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2;
- (void)listItems:(CDUnknownBlockType)arg1;

@end
