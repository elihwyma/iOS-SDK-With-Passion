/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerIntensityButton : CAMControlDrawerCustomButton

{
    _Bool _on;
}

@property (nonatomic, getter=isOn) _Bool on;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;

@end
