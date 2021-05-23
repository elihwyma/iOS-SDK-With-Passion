/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFCameraAccessResource : WFAccessResource

+ (_Bool)isSystemResource;

- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;

@end
