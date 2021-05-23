/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PDCloudStoreContainer.h>

@protocol PDCloudStorePassManager;

@interface PDPassCloudStoreContainer : PDCloudStoreContainer

{
    id <PDCloudStorePassManager> _passManager;
    _Bool _canInitializeContainer;
}

- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)saveCachedContainerValues;
- (void)readCachedContainerValues;
- (void)invalidateServerChangeTokens;
- (void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(CDUnknownBlockType)arg1;
- (id)recordTypeForRecordID:(id)arg1;
- (_Bool)canInitializeContainer;
- (void)cloudStoreAccountChanged:(id)arg1;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_canInitializeContainer;
- (id)_ubiquitousCatalogOfRecord;
- (_Bool)_isPassItemFromRecordType:(id)arg1;
- (_Bool)_isRemoteAssetItemFromRecordType:(id)arg1;
- (_Bool)_isPassCatalogItemFromRecordType:(id)arg1;
- (id)_catalogOfRecord;
- (id)initWithDataSource:(id)arg1 passManager:(id)arg2;

@end
