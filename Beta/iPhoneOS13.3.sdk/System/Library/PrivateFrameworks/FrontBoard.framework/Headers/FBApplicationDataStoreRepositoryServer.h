/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoardServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator, NSString;

@protocol FBApplicationDataStoreRepository;

@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility

{
    id <FBApplicationDataStoreRepository> _dataStore;
    FBServiceClientAuthenticator *_connectionAuthenticator;
}

@property (retain, nonatomic) id <FBApplicationDataStoreRepository> dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (_Bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)_prerequisiteMilestones;
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4;
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2;
- (void)_handleSetPrefetchedKeys:(id)arg1 context:(id)arg2;
- (void)_handleSetChangesInterest:(id)arg1 context:(id)arg2;
- (void)_handleSynchronize:(id)arg1;
- (void)_handleGetAvailableDataStores:(id)arg1;
- (void)_handleGetObjectForKey:(id)arg1;
- (void)_handleSetObjectForKey:(id)arg1 context:(id)arg2;
- (void)_handleRemoveObjectForKey:(id)arg1 context:(id)arg2;
- (void)_handleRemoveAllObjects:(id)arg1;

@end
