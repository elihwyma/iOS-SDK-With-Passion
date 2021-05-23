/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMFilterStatusIndicator : CAMControlStatusIndicator

{
    _Bool _on;
}

@property (nonatomic, getter=isOn) _Bool on;

- (_Bool)shouldUseOutline;
- (id)imageForCurrentState;

@end
