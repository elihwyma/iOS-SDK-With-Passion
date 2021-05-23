/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class SiriContext;

@interface SASActivationRequest : NSObject

{
    int _waketimeMIB[12];
    unsigned long long _waketimeMIBSize;
    long long _activationType;
    long long _activationEvent;
    SiriContext *_context;
    double _activationTime;
    double _buttonDownTime;
    long long _requestSource;
}

@property (nonatomic) long long requestSource;
@property (nonatomic) long long activationType;
@property (nonatomic) long long activationEvent;
@property (retain, nonatomic) SiriContext *context;
@property (nonatomic) double activationTime;
@property (nonatomic) double buttonDownTime;

+ (long long)requestSourceForButtonIdentifier:(long long)arg1;

- (id)init;
- (id)description;
- (id)eventSource;
- (double)buttonDownTimestamp;
- (_Bool)isButtonRequest;
- (double)computedActivationTime;
- (_Bool)isDirectActionRequest;
- (_Bool)isBluetoothRequest;
- (_Bool)isContinuityRequest;
- (_Bool)isSpotlightRequest;
- (_Bool)isTestingRequest;
- (_Bool)isVoiceRequest;
- (id)initWithDirectActionEvent:(long long)arg1 context:(id)arg2;
- (id)initWithButtonIdentifier:(long long)arg1 context:(id)arg2;
- (id)initWithContinuityContext:(id)arg1;
- (id)initWithVoiceTriggerContext:(id)arg1;
- (id)initWithBreadcrumbRequest;
- (id)initWithSimpleActivation:(long long)arg1;
- (id)initWithSpotlightContext:(id)arg1;
- (id)initWithVoiceTriggerRequest;
- (id)initWithTestingContext:(id)arg1;
- (_Bool)isEyesFreeRequestSource;
- (_Bool)isUIFreeRequestSource;
- (_Bool)isDeviceButtonRequest;
- (_Bool)isHoldToTalkSource;

@end
