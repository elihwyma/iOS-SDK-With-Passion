/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUCurationSettings : PXSettings

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (void)performPostSaveActions;

@end
