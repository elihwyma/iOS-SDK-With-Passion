/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXGenericDiagnosticsService : PXDiagnosticsService

- (id)title;
- (_Bool)canProvideConsoleDescription;
- (id)consoleDescription;
- (_Bool)canProvideContextualViewController;
- (_Bool)canProvideSettingsViewController;
- (id)settingsViewController;

@end
