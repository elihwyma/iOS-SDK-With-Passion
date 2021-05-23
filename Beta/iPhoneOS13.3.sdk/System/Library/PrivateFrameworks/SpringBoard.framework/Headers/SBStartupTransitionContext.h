/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BKSDisplayRenderOverlay, NSString, NSURL;

@interface SBStartupTransitionContext : NSObject <Swift>

{
    NSString *_reason;
    NSString *_fromApplicationBundleID;
    NSURL *_applicationLaunchURL;
    _Bool _fromLocked;
    _Bool _isDark;
    _Bool _isLogin;
    _Bool _isLogout;
    _Bool _isLoginSession;
    BKSDisplayRenderOverlay *_overlay;
    _Bool _fromUserPowerDown;
    _Bool _hasUserSwitchOverlayMismatch;
}

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSURL *applicationLaunchURL;
@property (copy, nonatomic) NSString *fromApplicationBundleID;
@property (nonatomic) _Bool fromLocked;
@property (nonatomic) _Bool fromUserPowerDown;
@property (nonatomic, getter=isDark) _Bool dark;
@property (nonatomic, getter=isLogin) _Bool login;
@property (nonatomic, getter=isLogout) _Bool logout;
@property (nonatomic) _Bool hasUserSwitchOverlayMismatch;
@property (retain, nonatomic) BKSDisplayRenderOverlay *overlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)_representation;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_reallyInitFromRepresentation:(id)arg1;
- (void)_parseOverlayInfo;
- (id)_initWithRepresentation:(id)arg1 loginSession:(_Bool)arg2;
- (id)_initWithRestartRequest:(id)arg1 fromLocked:(_Bool)arg2 fromApplication:(id)arg3;
- (id)_initWithRebootContext:(id)arg1;
- (id)_initWithShutdownContext:(id)arg1;

@end
