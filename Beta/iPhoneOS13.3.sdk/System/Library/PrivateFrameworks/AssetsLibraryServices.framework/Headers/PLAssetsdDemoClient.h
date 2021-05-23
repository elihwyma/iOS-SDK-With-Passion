/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDemoClient : PLAssetsdBaseClient

- (void)cleanupForStoreDemoMode;
- (_Bool)hasCompletedRestorePostProcessing:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)hasCompletedMomentAnalysis:(_Bool *)arg1 error:(id *)arg2;

@end
