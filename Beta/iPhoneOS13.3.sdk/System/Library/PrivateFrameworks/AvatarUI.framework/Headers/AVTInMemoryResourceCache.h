/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSCache, NSMutableArray, NSString;

@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTInMemoryResourceCache : NSObject <Swift>

{
    NSCache *_storage;
    NSMutableArray *_orderedEntries;
    NSObject<OS_dispatch_queue> *_storageLock;
    id <AVTUILogger> _logger;
}

@property (nonatomic, readonly) NSCache *storage;
@property (nonatomic, readonly) NSMutableArray *orderedEntries;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storageLock;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)keyForItem:(id)arg1 scope:(id)arg2;
+ (unsigned long long)costForItem:(id)arg1 scope:(id)arg2;

- (void)dealloc;
- (void)clearCache;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)_resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (void)performStorageWork:(CDUnknownBlockType)arg1;
- (id)observeChangesForItem:(id)arg1 key:(id)arg2;
- (void)nts_evictObjectsToFreeUpCost:(unsigned long long)arg1;
- (void)handleChangeForItemForKey:(id)arg1;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (void)evictResourceFromCache:(id)arg1 scope:(id)arg2;
- (id)initWithLockProvider:(CDUnknownBlockType)arg1 totalCostLimit:(unsigned long long)arg2 logger:(id)arg3;

@end
