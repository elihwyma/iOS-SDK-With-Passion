/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFHomeKitAccessResource : WFAccessResource

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSystemResource;

- (void)homeManagerDidUpdateHomes:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
