/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSHIDEventDiscreteDispatchingPredicate, BKSHIDEventDispatchingTarget, NSString;

@interface BKSHIDEventDiscreteDispatchingRule : NSObject <Swift>

{
    BKSHIDEventDiscreteDispatchingPredicate *_predicate;
    BKSHIDEventDispatchingTarget *_target;
}

@property (copy, nonatomic, readonly) BKSHIDEventDiscreteDispatchingPredicate *predicate;
@property (copy, nonatomic, readonly) BKSHIDEventDispatchingTarget *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)ruleForDispatchingDiscreteEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithPredicate:(id)arg1 target:(id)arg2;

@end
