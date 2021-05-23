/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDBypassSettings.h>

@class NSString;

@interface DNDMutableBypassSettings : DNDBypassSettings

@property (nonatomic) unsigned long long immediateBypassEventSourceType;
@property (copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
