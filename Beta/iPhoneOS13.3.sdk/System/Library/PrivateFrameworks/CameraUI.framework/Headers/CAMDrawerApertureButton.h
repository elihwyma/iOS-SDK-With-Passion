/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerApertureButton : CAMControlDrawerCustomButton

{
    _Bool _on;
}

@property (nonatomic, getter=isOn) _Bool on;

- (void)updateImage;
- (long long)controlType;
- (id)imageNameForCurrentState;

@end
