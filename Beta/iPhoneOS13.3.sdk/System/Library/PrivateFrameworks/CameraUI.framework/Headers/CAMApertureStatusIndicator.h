/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMApertureStatusIndicator : CAMControlStatusIndicator

{
    _Bool _on;
    double _apertureValue;
}

@property (nonatomic) double apertureValue;
@property (nonatomic, getter=isOn) _Bool on;

- (id)valueText;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (_Bool)canShowValue;

@end
