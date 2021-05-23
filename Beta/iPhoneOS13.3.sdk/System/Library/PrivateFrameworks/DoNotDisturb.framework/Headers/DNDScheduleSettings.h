/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject

{
    unsigned long long _scheduleEnabledSetting;
    DNDScheduleTimePeriod *_timePeriod;
    unsigned long long _bedtimeBehaviorEnabledSetting;
}

@property (nonatomic, readonly) unsigned long long scheduleEnabledSetting;
@property (copy, nonatomic, readonly) DNDScheduleTimePeriod *timePeriod;
@property (nonatomic, readonly) unsigned long long bedtimeBehaviorEnabledSetting;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithSettings:(id)arg1;
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3;

@end
