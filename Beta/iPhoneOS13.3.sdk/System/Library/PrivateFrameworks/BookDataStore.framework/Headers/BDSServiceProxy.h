/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol BDSServiceProtocol><NSXPCProxyCreating;

@interface BDSServiceProxy : NSObject

{
    _Bool _connectionHealthy;
    id <BDSServiceProtocol><NSXPCProxyCreating> _remoteObjectProxy;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) id <BDSServiceProtocol><NSXPCProxyCreating> remoteObjectProxy;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) _Bool connectionHealthy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (void)formXPCConnection;
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)currentAssetDetailCloudSyncVersions:(CDUnknownBlockType)arg1;
- (void)setAssetDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAssetDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAssetDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assetDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assetDetailsForAssetIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolvedAssetDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAssetDetailsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAssetDetailsForUnsyncedTastes:(CDUnknownBlockType)arg1;
- (void)fetchFinishedDatesByAssetIDForYear:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFinishedAssetCountByYearWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAssetDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentReadingNowDetailCloudSyncVersions:(CDUnknownBlockType)arg1;
- (void)setReadingNowDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteReadingNowDetailForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readingNowDetailsForAssetIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getReadingNowDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAssetReview:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAssetReviews:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAssetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAssetReviewForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assetReviewForAssetReviewID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assetReviewsForAssetReviewIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAssetReviewsForUserID:(id)arg1 includingDeleted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAssetReviewChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addStoreItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addStoreItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteStoreItemWithStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteStoreItemsWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeItemForStoreID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStoreItemsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getStoreItemChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentCollectionDetailCloudSyncVersions:(CDUnknownBlockType)arg1;
- (void)setCollectionDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCollectionDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCollectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCollectionDetailForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)collectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)collectionDetailsForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCollectionDetailsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCollectionDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentCollectionMemberCloudSyncVersions:(CDUnknownBlockType)arg1;
- (void)setCollectionMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setCollectionMembers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCollectionMemberForCollectionMemberID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCollectionMemberForCollectionMemberIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)collectionMemberForCollectionMemberID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCollectionMembersIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCollectionMembersInCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMaxSortOrderInCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCollectionMemberChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEnableCollectionSync:(_Bool)arg1;
- (void)setEnableCloudSync:(_Bool)arg1 enableReadingNowSync:(_Bool)arg2;
- (void)setEnableSecureUserDataCloudSync:(_Bool)arg1;
- (void)setCloudSyncPaused:(_Bool)arg1;
- (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)signalFetchChangesTransaction:(id)arg1;
- (void)fetchMostRecentAudiobookWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateWantToReadAndReadingNowWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateWantToReadWithCompletion:(CDUnknownBlockType)arg1;
- (id)updateReadingNowWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBitrateForItemWithAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;
- (void)setUserDatum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteUserDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDatumIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchUserDataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getUserDataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolvedUserDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserDataValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)audiobookStoreEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)scheduleRestart;

@end
