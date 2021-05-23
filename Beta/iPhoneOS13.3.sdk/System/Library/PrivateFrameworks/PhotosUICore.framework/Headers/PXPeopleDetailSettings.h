/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXPeopleDetailSettings : PXSettings

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
