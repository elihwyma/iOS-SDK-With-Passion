/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <FrontBoardServices/BSSimpleAssertion.h>

@class NSSet, NSString;

@interface _SBUIBiometricOperationAssertion : BSSimpleAssertion

{
    NSSet *_operations;
}

@property (copy, nonatomic) NSSet *operations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

@end
