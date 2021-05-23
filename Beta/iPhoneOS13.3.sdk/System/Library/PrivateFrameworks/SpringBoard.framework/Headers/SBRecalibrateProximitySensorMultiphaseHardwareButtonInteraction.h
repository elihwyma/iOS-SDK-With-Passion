/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSTimer, NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorMultiphaseHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <Swift>

{
    long long _phase;
    SBProximitySensorManager *_sensorManager;
    BSTimer *_timer;
}

@property (nonatomic) long long phase;
@property (retain, nonatomic) SBProximitySensorManager *sensorManager;
@property (retain, nonatomic) BSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_timerDidFire;
- (id)hardwareButtonGestureParameters;
- (id)initWithProximitySensorManager:(id)arg1;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeSinglePressUp;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(_Bool)arg2;
- (_Bool)_disallowsAnyPressForReason:(id *)arg1;
- (void)_transitionToPhase:(long long)arg1 timeout:(double)arg2;
- (void)_transitionToPhase:(long long)arg1;

@end
