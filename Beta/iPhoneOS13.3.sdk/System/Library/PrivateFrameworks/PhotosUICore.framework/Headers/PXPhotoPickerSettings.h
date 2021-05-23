/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXPhotoPickerSettings : PXSettings

{
    _Bool _useLibraryPresentation;
}

@property (nonatomic) _Bool useLibraryPresentation;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
