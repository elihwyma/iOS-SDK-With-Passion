/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton

{
    _Bool _allowAutoHDR;
    _Bool _allowHDROn;
    long long _hdrMode;
}

@property (nonatomic, setter=setHDRMode:) long long hdrMode;
@property (nonatomic) _Bool allowAutoHDR;
@property (nonatomic) _Bool allowHDROn;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (_Bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;

@end
