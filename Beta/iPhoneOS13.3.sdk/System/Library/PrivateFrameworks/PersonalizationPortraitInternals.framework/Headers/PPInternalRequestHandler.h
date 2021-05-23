/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPInternalRequestHandler : NSObject

- (void)sysdiagnoseInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)abGroupInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetVersionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadAssetMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_allowableAssetIdentifiers;

@end
