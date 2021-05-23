/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, br_pacer;

@protocol BRContainerHelper, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRContainerCache : NSObject

{
    id <BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    _Bool _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id <NSObject> _containerStatusObserver;
}

+ (id)containerCache;
+ (id)containerHelper;
+ (_Bool)hasDaemonicParts;

- (void)dealloc;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (id)documentContainers;
- (id)allContainersByID;
- (id)allContainersBlockIfNeeded:(_Bool)arg1;
- (void)subscribeToContainerStatusUpdate;
- (void)invalidateAndClearCache:(_Bool)arg1;
- (void)_containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (id)initWithHelper:(id)arg1;
- (id)_allContainersByIDNoCopyBlocking:(_Bool)arg1;
- (void)_accountWillChange;
- (_Bool)_updateContainersCache;

@end
