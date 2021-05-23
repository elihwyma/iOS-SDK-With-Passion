/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSSettingsRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
