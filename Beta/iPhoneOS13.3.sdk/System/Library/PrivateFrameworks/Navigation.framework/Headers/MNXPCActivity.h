/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MNXPCActivity : NSObject

{
    CDUnknownBlockType _codeBlock;
    _Bool _repeat;
    _Bool _shouldWakeDevice;
    _Bool _useCoreDuetPowerBudgeting;
    _Bool _runOnBattery;
    NSString *_identifier;
    double _tolerance;
    unsigned long long _qualityOfService;
    unsigned long long _networkRequirements;
    NSDate *_scheduledDate;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool repeat;
@property (nonatomic, readonly) _Bool shouldWakeDevice;
@property (nonatomic, readonly) _Bool useCoreDuetPowerBudgeting;
@property (nonatomic, readonly) _Bool runOnBattery;
@property (nonatomic, readonly) double tolerance;
@property (nonatomic, readonly) unsigned long long qualityOfService;
@property (nonatomic, readonly) unsigned long long networkRequirements;
@property (nonatomic, readonly) NSDate *scheduledDate;

+ (void)checkInActivity:(id)arg1 codeBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (double)remainingTime;
- (void)scheduleForDate:(id)arg1 codeBlock:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 repeat:(_Bool)arg2 shouldWakeDevice:(_Bool)arg3 useCoreDuetPowerBudgeting:(_Bool)arg4 runOnBattery:(_Bool)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8;
- (_Bool)_needsNetworkRequirement:(unsigned long long)arg1;

@end
