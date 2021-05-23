/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKUploadRequestConfiguration, NSArray;

@interface CKRepairAssetsOperationInfo : CKDatabaseOperationInfo

{
    CKUploadRequestConfiguration *_uploadRequestConfiguration;
    NSArray *_assets;
    NSArray *_packages;
    NSArray *_assetMetadata;
    NSArray *_packageMetadata;
    NSArray *_unavailableAssets;
    NSArray *_unavailablePackages;
}

@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSArray *packages;
@property (retain, nonatomic) NSArray *assetMetadata;
@property (retain, nonatomic) NSArray *packageMetadata;
@property (retain, nonatomic) NSArray *unavailableAssets;
@property (retain, nonatomic) NSArray *unavailablePackages;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
