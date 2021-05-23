/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SASActivationRequest.h>

@interface SASButtonActvationRequest : SASActivationRequest

{
    long long _buttonIdentifier;
}

@property (nonatomic) long long buttonIdentifier;

- (_Bool)isButtonRequest;
- (_Bool)isTestingRequest;
- (_Bool)isVoiceRequest;
- (_Bool)isDeviceButtonRequest;
- (_Bool)isHoldToTalkSource;

@end
