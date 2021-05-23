/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUMomentsSettings : PXSettings

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)_rebuildMoments;

- (id)parentSettings;

@end
