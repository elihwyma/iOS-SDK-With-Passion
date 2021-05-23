/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol FBSApplicationDataStoreRepositoryClient;

@interface FBSApplicationDataStoreMonitor : NSObject

{
    id <FBSApplicationDataStoreRepositoryClient> _client;
    _Bool _clientNeedsCheckin;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithClient:(id)arg1;
- (void)applicationDataStoreRepositoryClient:(id)arg1 application:(id)arg2 changedObject:(id)arg3 forKey:(id)arg4;
- (void)applicationDataStoreRepositoryClient:(id)arg1 storeInvalidatedForApplication:(id)arg2;
- (_Bool)_hasObserver:(id)arg1;

@end
