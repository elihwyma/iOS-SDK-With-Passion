/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@interface DNDBehaviorSettings : NSObject

{
    unsigned long long _interruptionBehaviorSetting;
}

@property (nonatomic, readonly) unsigned long long interruptionBehavior;
@property (nonatomic, readonly) unsigned long long interruptionBehaviorSetting;

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
- (id)_initWithInterruptionBehaviorSetting:(unsigned long long)arg1;

@end
