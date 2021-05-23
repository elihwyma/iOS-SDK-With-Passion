/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface APLatencyVisualizationLayer : CALayer

{
    double _dotOffset;
    double _dotDiameter;
    double _dotSpeed;
    double _dotSpeedX;
    double _dotSpeedY;
    void *_timeContext;
    CDUnknownFunctionPointerType _getAbsoluteTime;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (id)init:(CDUnknownFunctionPointerType)arg1 timeContext:(void *)arg2 zPosition:(int)arg3;

@end
