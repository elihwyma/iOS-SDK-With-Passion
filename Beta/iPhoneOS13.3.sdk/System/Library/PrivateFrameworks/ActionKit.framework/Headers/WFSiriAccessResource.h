/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFSiriAccessResource : WFAccessResource

+ (_Bool)isSystemResource;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (unsigned long long)workflowLevelStatus;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;

@end
