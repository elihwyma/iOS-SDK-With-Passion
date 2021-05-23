/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBScene, FBSceneManager, NSHashTable, NSString, SBModalAlertPresentationCoordinator;

@interface SBModalAlertPresenter : NSObject <Swift>

{
    SBModalAlertPresentationCoordinator *_modalAlertPresentationCoordinator;
    FBSceneManager *_sceneManager;
    FBScene *_scene;
    unsigned long long _visibleModalAlertCount;
    _Bool _invalidated;
    _Bool _isSystemPresenter;
    NSHashTable *_visibleAlertAssertions;
}

@property (retain, nonatomic, setter=_setScene:) FBScene *scene;
@property (nonatomic, readonly, getter=isShowingModalAlert) _Bool showingModalAlert;
@property (nonatomic, readonly, getter=isForeground) _Bool foreground;
@property (nonatomic) unsigned long long visibleModalAlertCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithScene:(id)arg1;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (id)initForSystemApplication;
- (void)incrementVisibleModalAlertCount;
- (void)decrementVisibleModalAlertCount;
- (id)acquireVisibleModalAlertAssertionWithDescription:(id)arg1;
- (id)_initWithModalAlertPresentationCoordinator:(id)arg1 sceneManager:(id)arg2 scene:(id)arg3;
- (void)_addOrRemoveModalAlertPresenterIfNecessary;
- (void)_addOrRemoveModalAlertPresenterIfNecessaryWithForegroundState:(_Bool)arg1 fromOrToTerminalState:(_Bool)arg2;

@end
