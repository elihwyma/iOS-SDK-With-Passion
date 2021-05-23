/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFiCloudDriveAccessResource : WFAccessResource

+ (_Bool)mustBeAvailableForDisplay;
+ (_Bool)isSystemResource;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;

@end
