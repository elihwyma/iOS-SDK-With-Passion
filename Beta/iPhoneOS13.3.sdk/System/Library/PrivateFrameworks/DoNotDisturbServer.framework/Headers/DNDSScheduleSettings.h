/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

{
    NSDate *_creationDate;
}

@property (copy, nonatomic, readonly) NSDate *creationDate;

+ (_Bool)supportsSecureCoding;
+ (id)settingsForRecord:(id)arg1;
+ (id)defaultScheduleSettings;
+ (id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)replacementObjectForCoder:(id)arg1;
- (id)makeRecord;
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4;

@end
