/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableSet, NSString, SBModalAlertPresenter, UIApplicationSceneDeactivationAssertion, UIApplicationSceneDeactivationManager;

@protocol BSInvalidatable, SBModalAlertPresentationCoordinatorDelegate;

@interface SBModalAlertPresentationCoordinator : NSObject <Swift>

{
    id <SBModalAlertPresentationCoordinatorDelegate> _delegate;
    UIApplicationSceneDeactivationManager *_sceneDeactivationManager;
    NSMutableSet *_activeModalAlertPresenters;
    SBModalAlertPresenter *_springBoardModalAlertPresenter;
    UIApplicationSceneDeactivationAssertion *_systemModalAlertsActiveSceneDeactivationAssertion;
    NSMutableSet *_hideApplicationModalAlertAssertions;
    id <BSInvalidatable> _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;
}

@property (retain, nonatomic, getter=_getSpringBoardPresenter, setter=_setSpringBoardPresenter:) SBModalAlertPresenter *springBoardPresenter;
@property (weak, nonatomic) id <SBModalAlertPresentationCoordinatorDelegate> delegate;
@property (nonatomic, readonly, getter=isShowingModalAlert) _Bool showingModalAlert;
@property (nonatomic, readonly, getter=isShowingSystemModalAlert) _Bool showingSystemModalAlert;
@property (nonatomic, readonly, getter=canShowApplicationModalAlerts) _Bool canShowApplicationModalAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithSceneDeactivationManager:(id)arg1;
- (void)_adjustApplicationSceneSettingsForModalAlertsAndFence:(_Bool)arg1;
- (void)_noteSpringBoardModalAlertStateChanged:(_Bool)arg1;
- (id)hideApplicationModalAlertsForReason:(id)arg1;
- (id)_fencingTransitionContext:(_Bool)arg1;
- (void)_addModalAlertPresenterIfNecessary:(id)arg1;
- (void)_removeModalAlertPresenter:(id)arg1;

@end
