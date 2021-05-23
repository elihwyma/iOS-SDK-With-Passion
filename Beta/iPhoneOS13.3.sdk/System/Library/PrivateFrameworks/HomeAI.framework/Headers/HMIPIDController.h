/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSString;

@interface HMIPIDController : HMFObject

{
    float _kp;
    float _ki;
    float _ts;
    float _target;
    float _integrator;
    float _integratorMin;
    float _integratorMax;
    float _engageDelta;
    int _controlEffortMin;
    int _controlEffortMax;
    long long _controlEffort;
    HMFTimer *_tick;
}

@property (readonly) HMFTimer *tick;
@property (readonly) long long controlEffort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithConfiguration:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)setControlEffort:(long long)arg1;
- (void)resumeMonitoring;
- (void)updateControlEffortFromValue:(float)arg1;
- (void)suspendMonitoring;

@end
