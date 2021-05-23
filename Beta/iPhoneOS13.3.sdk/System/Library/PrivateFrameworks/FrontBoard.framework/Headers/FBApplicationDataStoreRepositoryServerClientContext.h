/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@protocol FBApplicationDataStoreRepository, FBApplicationDataStoreRepositoryServerClientContextDelegate, FBSServiceFacilityClientHandle, OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryServerClientContext : NSObject

{
    id <FBApplicationDataStoreRepository> _dataStore;
    NSSet *_prefetchedKeys;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _interestedInAllChanges;
    _Bool _observingChanges;
    id <FBSServiceFacilityClientHandle> _client;
    id <FBApplicationDataStoreRepositoryServerClientContextDelegate> _delegate;
}

@property (weak, nonatomic) id <FBApplicationDataStoreRepositoryServerClientContextDelegate> delegate;
@property (nonatomic) _Bool interestedInAllChanges;
@property (copy, nonatomic) NSSet *prefetchedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FBSServiceFacilityClientHandle> clientHandle;

- (void)dealloc;
- (id)initWithDataStore:(id)arg1;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_queue_updateObservers;
- (void)_valueChanged:(id)arg1;

@end
