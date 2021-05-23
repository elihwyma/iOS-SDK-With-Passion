/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXSnapBackSettings : PXSettings

{
    _Bool _allowSnapBackHistoryMenu;
}

@property (nonatomic) _Bool allowSnapBackHistoryMenu;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
