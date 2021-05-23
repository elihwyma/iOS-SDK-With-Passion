/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton

{
    _Bool _on;
    _Bool _disabled;
}

@property (nonatomic, getter=isOn) _Bool on;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (_Bool)adjustsImageWhenDisabled;
- (long long)controlType;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;

@end
