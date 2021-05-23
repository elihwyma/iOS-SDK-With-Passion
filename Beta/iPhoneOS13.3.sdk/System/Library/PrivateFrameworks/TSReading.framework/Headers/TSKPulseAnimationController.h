/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKHighlightController.h>

@protocol TSKPulseAnimationControllerProtocol;

@interface TSKPulseAnimationController : TSKHighlightController

{
    id <TSKPulseAnimationControllerProtocol> _delegate;
    _Bool _pulsating;
    _Bool _autohide;
    double _duration;
    double _pulseOffset;
}

@property (nonatomic) _Bool pulsating;
@property (nonatomic) _Bool autohide;
@property (nonatomic) double duration;
@property (nonatomic) double pulseOffset;

- (void)dealloc;
- (void)stop;
- (void)reset;
- (void)disconnect;
- (id)initWithDelegate:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAnimating;
- (_Bool)drawRoundedRect;

@end
