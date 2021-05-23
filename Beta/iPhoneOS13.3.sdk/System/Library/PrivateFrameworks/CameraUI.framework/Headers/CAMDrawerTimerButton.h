/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton

{
    long long _timerDuration;
}

@property (nonatomic) long long timerDuration;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (_Bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;

@end
