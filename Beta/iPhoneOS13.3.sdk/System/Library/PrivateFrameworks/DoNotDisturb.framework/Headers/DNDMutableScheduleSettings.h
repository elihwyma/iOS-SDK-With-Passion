/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDScheduleSettings.h>

@class DNDScheduleTimePeriod;

@interface DNDMutableScheduleSettings : DNDScheduleSettings

@property (nonatomic) unsigned long long scheduleEnabledSetting;
@property (copy, nonatomic) DNDScheduleTimePeriod *timePeriod;
@property (nonatomic) unsigned long long bedtimeBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
