/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDOperation, CKUploadRequestConfiguration, NSArray, NSDictionary, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDRepairAssetsOperation : CKDDatabaseOperation

{
    CDUnknownBlockType _assetOrPackageRepairedBlock;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    NSDictionary *_UUIDToAssetOrPackage;
    NSDictionary *_assetOrPackageUUIDToMetadata;
    NSArray *_unavailableAssetsAndPackages;
    CKDOperation *_fetchOperation;
    CKDOperation *_uploadOperation;
    CKDOperation *_updateOperation;
    NSMutableDictionary *_assetOrPackageUUIDToOriginalRecord;
    NSDictionary *_assetOrPackageUUIDToUploadError;
    NSSet *_uploadedAssetOrPackageUUIDs;
}

@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) NSDictionary *UUIDToAssetOrPackage;
@property (retain, nonatomic) NSDictionary *assetOrPackageUUIDToMetadata;
@property (retain, nonatomic) NSArray *unavailableAssetsAndPackages;
@property (retain, nonatomic) CKDOperation *fetchOperation;
@property (retain, nonatomic) CKDOperation *uploadOperation;
@property (retain, nonatomic) CKDOperation *updateOperation;
@property (retain, nonatomic) NSMutableDictionary *assetOrPackageUUIDToOriginalRecord;
@property (retain, nonatomic) NSDictionary *assetOrPackageUUIDToUploadError;
@property (retain, nonatomic) NSSet *uploadedAssetOrPackageUUIDs;
@property (copy, nonatomic) CDUnknownBlockType assetOrPackageRepairedBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)repairContext;
- (void)_fetchAssetMetadata;
- (void)_uploadAssetsModify;
- (void)_updateMissingAssetServerStatus;
- (id)assetOrPackageForMetadata:(id)arg1 inRecord:(id)arg2;

@end
