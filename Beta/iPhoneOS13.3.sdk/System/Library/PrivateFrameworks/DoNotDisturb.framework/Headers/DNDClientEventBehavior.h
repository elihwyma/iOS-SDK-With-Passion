/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject

{
    DNDClientEventDetails *_eventDetails;
    unsigned long long _interruptionSuppression;
}

@property (copy, nonatomic, readonly) DNDClientEventDetails *eventDetails;
@property (nonatomic, readonly) unsigned long long interruptionSuppression;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDetails:(id)arg1 interruptionSuppression:(unsigned long long)arg2;

@end
