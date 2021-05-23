/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, CAMTorchPattern, CUCaptureController;

@interface CAMTorchPatternController : NSObject

{
    _Bool __performing;
    double _stepInterval;
    CUCaptureController *__captureController;
    CAMTorchPattern *__currentPattern;
    double __startTime;
    CADisplayLink *__displayLink;
}

@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (nonatomic, getter=_isPerforming, setter=_setPerforming:) _Bool _performing;
@property (nonatomic, readonly) CAMTorchPattern *_currentPattern;
@property (nonatomic, readonly) double _startTime;
@property (nonatomic, readonly) CADisplayLink *_displayLink;
@property (nonatomic) double stepInterval;

- (void)displayLinkFired:(id)arg1;
- (void)blink;
- (id)initWithCaptureController:(id)arg1;
- (void)doubleBlink;
- (void)stopPerformingPattern;
- (void)_resetTorchLevel;
- (void)_applyTorchLevel:(float)arg1;
- (void)startPerformingPattern:(id)arg1;

@end
