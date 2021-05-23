/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSDate, NSString, RBSProcessExitStatus, RBSTerminateContext;

@interface RBSProcessExitContext : NSObject

{
    NSDate *_timestamp;
    long long _type;
    RBSProcessExitStatus *_status;
    RBSTerminateContext *_terminationContext;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) RBSProcessExitStatus *status;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) RBSTerminateContext *terminationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
