/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBBacklightController, SBFUserAuthenticationController, SBLockScreenManager, SOSManager;

@protocol BSInvalidatable;

@interface SBSOSEventHandler : NSObject

{
    id _coversheetObserverToken;
    id <BSInvalidatable> _disableSTARAssertion;
    _Bool _running;
    SBFUserAuthenticationController *_override_authenticationController;
    SBBacklightController *_override_backlightController;
    SBLockScreenManager *_override_lockscreenManager;
    SOSManager *_override_sosManager;
}

@property (nonatomic, getter=_isRunning, setter=_setRunning:) _Bool running;
@property (nonatomic, readonly, getter=_authenticationController) SBFUserAuthenticationController *authenticationController;
@property (nonatomic, readonly, getter=_backlightController) SBBacklightController *backlightController;
@property (nonatomic, readonly, getter=_sosManager) SOSManager *sosManager;
@property (nonatomic, readonly, getter=_lockScreenManager) SBLockScreenManager *lockScreenManager;
@property (nonatomic, readonly, getter=isSOSActive) _Bool SOSActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)run;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
- (void)_forceBioAuthenticationLockoutIfAvailableWithSource:(int)arg1 showingPasscode:(_Bool)arg2;

@end
