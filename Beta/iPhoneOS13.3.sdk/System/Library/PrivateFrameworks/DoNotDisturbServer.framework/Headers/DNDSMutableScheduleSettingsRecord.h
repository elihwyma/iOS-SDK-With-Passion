/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSScheduleSettingsRecord.h>

@class NSNumber;

@interface DNDSMutableScheduleSettingsRecord : DNDSScheduleSettingsRecord

@property (copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property (copy, nonatomic) NSNumber *scheduleEnabledSetting;
@property (copy, nonatomic) NSNumber *timePeriodStartTimeHour;
@property (copy, nonatomic) NSNumber *timePeriodStartTimeMinute;
@property (copy, nonatomic) NSNumber *timePeriodEndTimeHour;
@property (copy, nonatomic) NSNumber *timePeriodEndTimeMinute;
@property (copy, nonatomic) NSNumber *bedtimeBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
