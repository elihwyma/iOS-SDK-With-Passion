/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class NSArray;

@interface WFAccountAccessResource : WFAccessResource

{
    id _observer;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) Class accountClass;
@property (copy, nonatomic, readonly) NSArray *accounts;

- (void)dealloc;
- (id)username;
- (id)initWithDefinition:(id)arg1;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)settingsUIDefinition;
- (_Bool)canLogOut;
- (void)logOut;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (void)makeAvailableAtGlobalLevelWithWebAuthenticationSession:(CDUnknownBlockType)arg1;

@end
