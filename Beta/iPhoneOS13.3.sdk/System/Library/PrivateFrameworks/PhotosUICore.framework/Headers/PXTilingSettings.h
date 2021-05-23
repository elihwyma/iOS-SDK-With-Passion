/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXTilingSettings : PXSettings

{
    _Bool _flipLayoutsHorizontally;
}

@property (nonatomic) _Bool flipLayoutsHorizontally;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
