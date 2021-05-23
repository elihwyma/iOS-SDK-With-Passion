/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFSpeechRecognitionAccessResource : WFAccessResource

+ (_Bool)isSystemResource;

- (id)name;
- (id)icon;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;

@end
