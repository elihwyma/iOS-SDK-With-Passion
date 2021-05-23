/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class PPXPCClientHelper;

@interface PPInternalClient : NSObject

{
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)setAssetMetadataRefreshIntervalSeconds:(double)arg1 error:(id *)arg2;
- (_Bool)clearAssetMetadataRefreshIntervalSecondsWithError:(id *)arg1;
- (double)assetMetadataRefreshIntervalSecondsWithError:(id *)arg1;
- (_Bool)downloadAssetMetadataWithError:(id *)arg1;
- (_Bool)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 error:(id *)arg3;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 error:(id *)arg2;
- (id)assetVersionsWithError:(id *)arg1;
- (id)abGroupInfoWithError:(id *)arg1;
- (id)sysdiagnoseInformationWithError:(id *)arg1;

@end
