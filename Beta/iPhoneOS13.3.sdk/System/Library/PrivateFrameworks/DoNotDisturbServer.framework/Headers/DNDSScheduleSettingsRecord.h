/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface DNDSScheduleSettingsRecord : NSObject

{
    NSNumber *_lastUpdatedTimestamp;
    NSNumber *_scheduleEnabledSetting;
    NSNumber *_timePeriodStartTimeHour;
    NSNumber *_timePeriodStartTimeMinute;
    NSNumber *_timePeriodEndTimeHour;
    NSNumber *_timePeriodEndTimeMinute;
    NSNumber *_bedtimeBehaviorEnabledSetting;
}

@property (copy, nonatomic, readonly) NSNumber *lastUpdatedTimestamp;
@property (copy, nonatomic, readonly) NSNumber *scheduleEnabledSetting;
@property (copy, nonatomic, readonly) NSNumber *timePeriodStartTimeHour;
@property (copy, nonatomic, readonly) NSNumber *timePeriodStartTimeMinute;
@property (copy, nonatomic, readonly) NSNumber *timePeriodEndTimeHour;
@property (copy, nonatomic, readonly) NSNumber *timePeriodEndTimeMinute;
@property (copy, nonatomic, readonly) NSNumber *bedtimeBehaviorEnabledSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)recordForLegacyBehaviorOverride:(id)arg1 lastUpdated:(id)arg2;
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)_initWithRecord:(id)arg1;
- (id)_initWithLastUpdatedTimestamp:(id)arg1 scheduleEnabledSetting:(id)arg2 timePeriodStartTimeHour:(id)arg3 timePeriodStartTimeMinute:(id)arg4 timePeriodEndTimeHour:(id)arg5 timePeriodEndTimeMinute:(id)arg6 bedtimeBehaviorEnabledSetting:(id)arg7;
- (id)legacyBehaviorOverride;

@end
