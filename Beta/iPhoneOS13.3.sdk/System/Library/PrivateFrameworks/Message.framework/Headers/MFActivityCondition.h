/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EFCancelationToken, EFObservable, NSString;

@protocol EFScheduler;

@interface MFActivityCondition : NSObject

{
    _Bool _requireExternalPower;
    _Bool _requireWiFi;
    _Bool _requireScreenLocked;
    _Bool _requireLowPowerModeDisabled;
    _Bool _satisfied;
    float _minBatteryLevel;
    long long _maxThermalPressureLevel;
    EFCancelationToken *_cancellationToken;
    id <EFScheduler> _scheduler;
}

@property (nonatomic) _Bool requireExternalPower;
@property (nonatomic) _Bool requireWiFi;
@property (nonatomic) _Bool requireScreenLocked;
@property (nonatomic) _Bool requireLowPowerModeDisabled;
@property (nonatomic) float minBatteryLevel;
@property (nonatomic) long long maxThermalPressureLevel;
@property (nonatomic, getter=isSatisfied) _Bool satisfied;
@property (retain, nonatomic) EFCancelationToken *cancellationToken;
@property (retain, nonatomic) id <EFScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) EFObservable *conditionsObservable;

+ (id)alwaysSatisfiedCondition;

- (id)init;
- (void)dealloc;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;
- (_Bool)_isValidConfiguration;

@end
