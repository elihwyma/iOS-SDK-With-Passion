/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton

{
    _Bool _on;
}

@property (nonatomic, getter=isOn) _Bool on;

- (void)updateImage;
- (long long)controlType;
- (id)imageNameForCurrentState;
- (_Bool)isSelfExpanding;

@end
