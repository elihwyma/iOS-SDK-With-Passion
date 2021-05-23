/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSNumber, NSString, SBAppStatusBarSettingsAssertion, SBMainStatusBarContentAssertion, SBMainStatusBarStateProvider, _UILegibilitySettings;

@interface SBDashBoardStatusBarController : NSObject

{
    NSCountedSet *_statusBarHiddenReasons;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_statusBarParametersAssertion;
    SBMainStatusBarContentAssertion *_statusBarContentAssertion;
    SBMainStatusBarStateProvider *_lazy_stateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *statusBarAlpha;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) _UILegibilitySettings *statusBarLegibilitySettings;

- (id)init;
- (void)dealloc;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)setStatusBarAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
- (void)enableStatusBarTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3;
- (void)updateStatusBarTimeEnabled;
- (void)clearStatusBarParameters;
- (void)setStatusBarHidden:(_Bool)arg1 forReason:(id)arg2;
- (void)destroyFakeStatusBar:(id)arg1;
- (id)createFakeStatusBarWithReason:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)effectiveStatusBarStyleRequestForAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
- (id)_stateProvider;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;

@end
