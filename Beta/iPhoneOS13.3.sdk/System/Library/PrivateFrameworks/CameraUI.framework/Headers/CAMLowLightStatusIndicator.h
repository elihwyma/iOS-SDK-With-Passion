/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator

{
    _Bool _lowLightDisabled;
    double _duration;
    long long _lowLightMode;
}

@property (nonatomic) double duration;
@property (nonatomic) long long lowLightMode;
@property (nonatomic, getter=isLowLightDisabled) _Bool lowLightDisabled;

- (id)valueText;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (_Bool)shouldShowOutlineForCurrentState;
- (_Bool)shouldFillOutlineForCurrentState;
- (_Bool)canShowValue;

@end
