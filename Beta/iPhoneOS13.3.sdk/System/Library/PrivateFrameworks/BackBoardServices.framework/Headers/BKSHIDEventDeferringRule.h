/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeferringPredicate, BKSHIDEventDeferringTarget, NSString;

@interface BKSHIDEventDeferringRule : NSObject

{
    BKSHIDEventDeferringPredicate *_predicate;
    BKSHIDEventDeferringTarget *_target;
    NSString *_reason;
}

@property (copy, nonatomic, readonly) BKSHIDEventDeferringPredicate *predicate;
@property (copy, nonatomic, readonly) BKSHIDEventDeferringTarget *target;
@property (copy, nonatomic, readonly) NSString *reason;

+ (_Bool)supportsSecureCoding;
+ (id)ruleForDeferringEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithPredicate:(id)arg1 target:(id)arg2 reason:(id)arg3;

@end
