/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class NSString, PocketAPI;

@interface WFPocketAccessResource : WFAccessResource

{
    PocketAPI *_pocket;
    CDUnknownBlockType _loginHandler;
}

@property (retain, nonatomic) PocketAPI *pocket;
@property (copy, nonatomic) CDUnknownBlockType loginHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canLogOut;
- (void)logOut;
- (void)pocketAPILoggedIn:(id)arg1;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)pocketCallbackScheme;

@end
