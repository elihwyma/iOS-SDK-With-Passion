/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSString;

@interface DNDBypassSettings : NSObject

{
    unsigned long long _immediateBypassEventSourceType;
    NSString *_immediateBypassCNGroupIdentifier;
    unsigned long long _repeatEventSourceBehaviorEnabledSetting;
}

@property (nonatomic, readonly) unsigned long long immediateBypassEventSourceType;
@property (copy, nonatomic, readonly) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic, readonly) unsigned long long repeatEventSourceBehaviorEnabledSetting;

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
- (id)_initWithImmediateBypassEventSourceType:(unsigned long long)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg3;

@end
