/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDState;

@interface DNDStateUpdate : NSObject

{
    DNDState *_previousState;
    DNDState *_state;
    unsigned long long _reason;
}

@property (copy, nonatomic, readonly) DNDState *previousState;
@property (copy, nonatomic, readonly) DNDState *state;
@property (nonatomic, readonly) unsigned long long reason;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviousState:(id)arg1 state:(id)arg2 reason:(unsigned long long)arg3;

@end
