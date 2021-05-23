/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class AFPreferences, NSDictionary, SASActivationRequest, SASSiriPocketStateManager, SASSystemState;

@interface SASActivationCondition : NSObject

{
    _Bool _buttonTriggerStateActive;
    SASActivationRequest *_request;
    SASSystemState *_systemState;
    SASSiriPocketStateManager *_pocketStateManager;
    AFPreferences *_preferences;
    NSDictionary *_analyticsContext;
    long long _requestState;
}

@property (retain, nonatomic) SASActivationRequest *request;
@property (nonatomic) _Bool buttonTriggerStateActive;
@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SASSiriPocketStateManager *pocketStateManager;
@property (retain, nonatomic) AFPreferences *preferences;
@property (retain, nonatomic) NSDictionary *analyticsContext;
@property (nonatomic) long long requestState;

@end
