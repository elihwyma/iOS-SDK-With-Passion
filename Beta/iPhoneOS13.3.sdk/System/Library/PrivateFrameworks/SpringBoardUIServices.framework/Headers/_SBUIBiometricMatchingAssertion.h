/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/_SBUIBiometricOperationAssertion.h>

@class NSString;

@interface _SBUIBiometricMatchingAssertion : _SBUIBiometricOperationAssertion

{
    unsigned long long _matchMode;
    long long _restartCount;
}

@property (nonatomic, readonly) unsigned long long matchMode;
@property (nonatomic) long long restartCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;
- (id)initWithMatchMode:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(CDUnknownBlockType)arg3;

@end
