/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXCMMDiagnosticsService : PXDiagnosticsService

- (id)title;
- (_Bool)canProvideConsoleDescription;
- (_Bool)canProvideContextualViewController;
- (_Bool)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)contextualViewController;

@end
