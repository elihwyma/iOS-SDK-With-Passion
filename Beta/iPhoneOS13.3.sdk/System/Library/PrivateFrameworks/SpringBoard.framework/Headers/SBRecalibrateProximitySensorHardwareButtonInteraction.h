/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <Swift>

{
    _Bool _didResetProxCalibration;
    SBProximitySensorManager *_sensorManager;
}

@property (retain, nonatomic) SBProximitySensorManager *sensorManager;
@property (nonatomic) _Bool didResetProxCalibration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithProximitySensorManager:(id)arg1;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeSinglePressUp;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (_Bool)_disallowsAnyPressForReason:(id *)arg1;

@end
