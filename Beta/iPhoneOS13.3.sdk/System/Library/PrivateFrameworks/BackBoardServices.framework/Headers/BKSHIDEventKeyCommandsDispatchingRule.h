/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSHIDEventKeyCommandsDispatchingPredicate, NSArray, NSString;

@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject <Swift>

{
    BKSHIDEventKeyCommandsDispatchingPredicate *_predicate;
    NSArray *_targets;
}

@property (copy, nonatomic, readonly) BKSHIDEventKeyCommandsDispatchingPredicate *predicate;
@property (copy, nonatomic, readonly) NSArray *targets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)ruleForDispatchingKeyCommandsMatchingPredicate:(id)arg1 toTargets:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithPredicate:(id)arg1 targets:(id)arg2;

@end
