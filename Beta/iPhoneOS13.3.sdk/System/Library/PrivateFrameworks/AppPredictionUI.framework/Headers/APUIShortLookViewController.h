/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <UIKit/UIViewController.h>

@class APUIIntentHandlingViewController, APUILongLookViewController, APUITVIntentHandler, ATXAction, CRKCardPresentation, INIntent, INInteraction, NSString, NSUserActivity, NSUserDefaults, PLClickPresentationInteractionManager, SFSearchResult, UIView;

@protocol APUIShortLookViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, PLClickPresentationInteractionPresentable;

@interface APUIShortLookViewController : UIViewController

{
    APUILongLookViewController<PLClickPresentationInteractionPresentable> *_presentableViewController;
    APUITVIntentHandler *_tvIntentHandler;
    double _preferredPlatterContentHeight;
    _Bool _acceptPlatterTaps;
    long long _dismissalReason;
    _Bool _actionCompletedSuccessfully;
    _Bool _hasShownLongLook;
    _Bool _wasPresentedImmediately;
    _Bool _representsVoiceShortcut;
    NSUserDefaults *_userDefaults;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    NSString *_bundleId;
    SFSearchResult *_searchResult;
    id <APUIShortLookViewControllerDelegate> _delegate;
    APUIIntentHandlingViewController *_intentHandlingViewController;
    ATXAction *_atxAction;
    INInteraction *_interaction;
    CRKCardPresentation *_cardPresentation;
    UIViewController<CRKCardViewControlling> *_currentCardViewController;
}

@property (retain, nonatomic) APUIIntentHandlingViewController *intentHandlingViewController;
@property (retain, nonatomic) ATXAction *atxAction;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) INInteraction *interaction;
@property (retain, nonatomic) CRKCardPresentation *cardPresentation;
@property (retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController;
@property (copy, nonatomic) NSString *bundleId;
@property (retain, nonatomic) SFSearchResult *searchResult;
@property (weak, nonatomic) id <APUIShortLookViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property (nonatomic, readonly) PLClickPresentationInteractionManager *clickPresentationInteractionManager;
@property (nonatomic, readonly) UIView *viewForPreview;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) struct CGRect initialPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalDismissedFrameOfViewForPreview;

- (id)_defaults;
- (void)setView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)presentImmediately:(CDUnknownBlockType)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (_Bool)longLookPlatterShouldShowUtilityButton:(id)arg1;
- (void)longLookPlatterDidTapUtilityButton:(id)arg1;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (_Bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(struct CGSize)arg2;
- (void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
- (void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
- (void)intentHandlingViewController:(id)arg1 didComplete:(_Bool)arg2;
- (void)_resetRepresentedObjectState;
- (id)_cardContentWithIntentResponse:(id)arg1;
- (void)_handleActionButtonForIntent;
- (id)_intentConfirmationActions;
- (_Bool)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (void)_dismissLongLookWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_actionTypeForMetrics;
- (_Bool)_shouldAcceptPlatterTaps;
- (_Bool)_isDoNotDisturbIntent;
- (id)_debugStringForNSUA;
- (id)containerViewForclickPresentationInteractionManager:(id)arg1;
- (_Bool)clickPresentationInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)_titleForLongLookViewController:(id)arg1;
- (void)handOverIntentHandlingToApp;

@end
