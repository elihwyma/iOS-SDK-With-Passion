/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSBypassSettingsRecord.h>

@class NSNumber, NSString;

@interface DNDSMutableBypassSettingsRecord : DNDSBypassSettingsRecord

@property (copy, nonatomic) NSNumber *immediateBypassEventSourceType;
@property (copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
