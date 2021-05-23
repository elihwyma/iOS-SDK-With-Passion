/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUPhotosDiagnosticsAgent : NSObject

+ (id)localDiagnosticsAgent;

- (void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(CDUnknownBlockType)arg1;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(CDUnknownBlockType)arg1;
- (void)captureAndDumpLayerHierarchyWithResultHandler:(CDUnknownBlockType)arg1;
- (void)captureCurrentAssetResourcesWithResultHandler:(CDUnknownBlockType)arg1;
- (id)_currentAsset;
- (id)_descriptionForAllUIState;
- (id)_descriptionOfUIState:(long long)arg1;
- (id)_currentAssetIdentifierDescription;
- (id)_currentAssetViewModelDescription;
- (id)_currentAssetMetadata;
- (id)_currentAssetDetailedDescription;
- (id)_viewModelDescription;
- (id)_viewControllerHierarchyDescription;
- (id)_windowRecursiveDescription;
- (id)__currentTimestamp;

@end
