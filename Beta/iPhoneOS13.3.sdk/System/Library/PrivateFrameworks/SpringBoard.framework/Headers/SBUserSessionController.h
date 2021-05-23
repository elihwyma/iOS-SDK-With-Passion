/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class LKLogoutSupport, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSString, SBLogoutProgressTransientOverlayViewController, SBMainDisplayPolicyAggregator, UMUser, UMUserManager, UMUserSwitchBlockingTask;

@interface SBUserSessionController : NSObject

{
    UMUserManager *_userManager;
    UMUser *_lazy_user;
    SBMainDisplayPolicyAggregator *_lazy_policyAggregator;
    SBLogoutProgressTransientOverlayViewController *_progressTransientOverlayViewController;
    NSMutableArray *_displayApplications;
    NSMutableSet *_terminatingApplications;
    UMUserSwitchBlockingTask *_terminateApplicationsTask;
    NSDate *_terminateApplicationsStartDate;
    NSDictionary *_debugBlockingTasks;
    LKLogoutSupport *_logoutSupport;
    _Bool _loginSession;
    _Bool _loggingOut;
}

@property (nonatomic, getter=isLoggingOut) _Bool loggingOut;
@property (retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator;
@property (retain, nonatomic, readonly) UMUser *user;
@property (nonatomic, readonly, getter=isLoginSession) _Bool loginSession;
@property (nonatomic, readonly) _Bool isMultiUserSupported;
@property (nonatomic, readonly) _Bool canLogout;
@property (nonatomic, readonly) long long sessionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)willSwitchToUser:(id)arg1;
- (void)readyToSwitchToUser:(id)arg1;
- (void)readyToSwitchToLoginSession:(id)arg1;
- (void)userSwitchBlockingTasksDidUpdate:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)logout;
- (id)policyAggregator;
- (id)_initWithUserManager:(id)arg1;
- (void)logoutWithLogoutSupport:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_displayProgressTransientOverlayIfNeeded;
- (void)_noteApplicationDidExitFromNotification:(id)arg1;
- (void)_noteApplicationDidExit:(id)arg1;
- (void)_evaluateRunningApplications;
- (void)_readyToSwitchToUser:(id)arg1;
- (struct CGPoint)_portraitOrientedProgressLocationForOrientation:(long long)arg1;
- (id)_massageApplicationListForDisplay:(id)arg1;
- (id)pendingApplicationsForLogoutProgressTransientOverlayViewController:(id)arg1;
- (id)debugBlockingTasksForLogoutProgressTransientOverlayViewController:(id)arg1;
- (void)logoutProgressTransientOverlayViewControllerDidDisappear:(id)arg1;
- (void)disableCurrentUser;

@end
