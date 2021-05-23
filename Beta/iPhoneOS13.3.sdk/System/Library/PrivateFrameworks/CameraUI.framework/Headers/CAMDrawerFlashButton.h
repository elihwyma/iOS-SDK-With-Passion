/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton

{
    _Bool _flashUnavailable;
    long long _flashMode;
}

@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isFlashUnavailable) _Bool flashUnavailable;

- (long long)controlType;
- (_Bool)isExpandable;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (_Bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;

@end
