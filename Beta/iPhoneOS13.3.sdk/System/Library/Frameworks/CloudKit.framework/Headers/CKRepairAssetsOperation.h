/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class CKUploadRequestConfiguration, NSArray, NSMutableDictionary;

@interface CKRepairAssetsOperation : CKDatabaseOperation

{
    CDUnknownBlockType _repairAssetsCompletionBlock;
    NSArray *_assets;
    NSArray *_packages;
    NSArray *_assetMetadata;
    NSArray *_packageMetadata;
    NSArray *_unavailableAssets;
    NSArray *_unavailablePackages;
    NSMutableDictionary *_perItemErrorsByRecordID;
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
}

@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSArray *packages;
@property (retain, nonatomic) NSArray *assetMetadata;
@property (retain, nonatomic) NSArray *packageMetadata;
@property (retain, nonatomic) NSArray *unavailableAssets;
@property (retain, nonatomic) NSArray *unavailablePackages;
@property (retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID;
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (copy, nonatomic, readonly) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (copy, nonatomic) CDUnknownBlockType repairAssetsCompletionBlock;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)initWithAssets:(id)arg1 packages:(id)arg2 assetMetadata:(id)arg3 packageMetadata:(id)arg4 unavailableAssets:(id)arg5 unavailablePackages:(id)arg6;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)includedMetadata;

@end
