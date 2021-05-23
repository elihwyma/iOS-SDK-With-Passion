/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton

{
    long long _livePhotoMode;
}

@property (nonatomic) long long livePhotoMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (_Bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;

@end
