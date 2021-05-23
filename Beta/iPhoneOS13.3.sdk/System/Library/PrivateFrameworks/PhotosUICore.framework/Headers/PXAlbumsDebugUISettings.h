/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXAlbumsDebugUISettings : PXSettings

{
    _Bool _showBestKeyFrameDebugAlbum;
    _Bool _showUtilitiesDebugAlbum;
}

@property (nonatomic) _Bool showBestKeyFrameDebugAlbum;
@property (nonatomic) _Bool showUtilitiesDebugAlbum;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
