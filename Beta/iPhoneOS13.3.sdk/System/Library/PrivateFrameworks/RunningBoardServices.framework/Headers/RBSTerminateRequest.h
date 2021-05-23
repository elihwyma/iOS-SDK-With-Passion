/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSRequest.h>

@class NSString, RBSProcessIdentity, RBSTerminateContext;

@interface RBSTerminateRequest : RBSRequest

{
    _Bool _targetsAllManagedProcesses;
    int _pid;
    RBSProcessIdentity *_processIdentity;
    RBSTerminateContext *_context;
}

@property (nonatomic, readonly) _Bool targetsAllManagedProcesses;
@property (nonatomic, readonly) int pid;
@property (copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly) RBSTerminateContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (_Bool)execute:(out id *)arg1 error:(out id *)arg2;
- (id)initWithProcessIdentity:(id)arg1 context:(id)arg2;
- (id)initWithProcessIdentifier:(id)arg1 context:(id)arg2;
- (id)initForAllManagedWithReason:(id)arg1;
- (_Bool)execute:(out id *)arg1;

@end
