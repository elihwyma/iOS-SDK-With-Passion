/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSPersistentStoreCoordinator, NSSQLitePrefetchRequestCache;

@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface NSXPCStoreServerPerConnectionCache : NSObject

{
    NSPersistentStoreCoordinator *_coordinator;
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    NSMutableDictionary *_generationTokenMap;
    NSObject<OS_os_transaction> *_transaction;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;

- (void)dealloc;
- (id)initWithCoordinator:(id)arg1;
- (void)registerQueryGeneration:(id)arg1 forRemoteGeneration:(id)arg2;
- (id)localGenerationForRemoteGeneration:(id)arg1;
- (void)releaseQueryGenerationForRemoteGeneration:(id)arg1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;

@end
