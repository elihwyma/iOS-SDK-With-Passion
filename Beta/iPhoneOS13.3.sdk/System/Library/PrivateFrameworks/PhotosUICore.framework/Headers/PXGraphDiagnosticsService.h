/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXGraphDiagnosticsService : PXDiagnosticsService

- (id)title;
- (_Bool)canProvideConsoleDescription;
- (_Bool)canProvideContextualViewController;
- (_Bool)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)contextualViewController;
- (id)saliencyStringForAsset:(id)arg1;
- (id)_curationDebugStringForDictionary:(id)arg1 asset:(id)arg2;

@end
