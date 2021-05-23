/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NCNotificationRequest, NCNotificationViewControllerView, NSPointerArray, NSString, UIPanGestureRecognizer, UIScrollView, UIView;

@protocol NCAuxiliaryOptionsProviding, NCNotificationCustomContent, NCNotificationCustomContentProviding, NCNotificationStaticContentProviding, NCNotificationViewControllerDelegate, PLContentSizeManaging, UIViewControllerTransitionCoordinator;

@interface NCNotificationViewController : UIViewController <Swift>

{
    _Bool _didQueryCanPan;
    _Bool _canPan;
    long long _ncTransitionAnimationState;
    NSPointerArray *_observers;
    UIView<PLContentSizeManaging> *_contentSizeManagingView;
    struct UIView *_lookView;
    _Bool _revealAdditionalContentOnPresentation;
    _Bool _customContentHomeAffordanceVisible;
    _Bool _notificationContentViewHidden;
    _Bool _hasShadow;
    _Bool _contentReplacedWithSnapshot;
    _Bool _interactionEnabled;
    _Bool _shouldRestorePresentingShortLookOnDismiss;
    id <NCNotificationViewControllerDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
    NSString *_materialGroupNameBase;
    UIPanGestureRecognizer *_customContentHomeAffordanceGestureRecognizer;
    id <NCNotificationStaticContentProviding> _staticContentProvider;
    id <NCNotificationCustomContentProviding> _customContentProvider;
    id <NCAuxiliaryOptionsProviding> _auxiliaryOptionsContentProvider;
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    UIView *_associatedView;
    CDUnknownBlockType _pendingPresentationTransitionDidEndBlock;
    UIViewController<NCNotificationCustomContent> *_customContentProvidingViewController;
    CDUnknownBlockType _dismissalCompletion;
}

@property (nonatomic, readonly, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
@property (nonatomic, readonly, getter=isLookStyleLongLook) _Bool lookStyleLongLook;
@property (retain, nonatomic) id <NCNotificationStaticContentProviding> staticContentProvider;
@property (retain, nonatomic) id <NCNotificationCustomContentProviding> customContentProvider;
@property (retain, nonatomic) id <NCAuxiliaryOptionsProviding> auxiliaryOptionsContentProvider;
@property (retain, nonatomic, getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:) id <UIViewControllerTransitionCoordinator> activeTransitionCoordinator;
@property (nonatomic, getter=isInteractionEnabled) _Bool interactionEnabled;
@property (weak, nonatomic) UIView *associatedView;
@property (copy, nonatomic, getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:) CDUnknownBlockType pendingPresentationTransitionDidEndBlock;
@property (nonatomic, readonly, getter=_notificationViewControllerView) NCNotificationViewControllerView *notificationViewControllerView;
@property (nonatomic, readonly, getter=_scrollView) UIScrollView *scrollView;
@property (retain, nonatomic, getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController;
@property (nonatomic, readonly, getter=_isPresentingCustomContentProvidingViewController) _Bool presentingCustomContentProvidingViewController;
@property (nonatomic, getter=_shouldRestorePresentingShortLookOnDismiss, setter=_setShouldRestorePresentingShortLookOnDismiss:) _Bool shouldRestorePresentingShortLookOnDismiss;
@property (copy, nonatomic, getter=_dismissalCompletion, setter=_setDismissalCompletion:) CDUnknownBlockType dismissalCompletion;
@property (weak, nonatomic) id <NCNotificationViewControllerDelegate> delegate;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (nonatomic, readonly, getter=isShortLook) _Bool shortLook;
@property (nonatomic, readonly, getter=isDragging) _Bool dragging;
@property (nonatomic, readonly, getter=hasCommittedToPresentingCustomContentProvidingViewController) _Bool committedToPresentingCustomContentProvidingViewController;
@property (nonatomic, readonly, getter=isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController) _Bool notPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
@property (nonatomic) _Bool revealAdditionalContentOnPresentation;
@property (retain, nonatomic) NSString *materialGroupNameBase;
@property (nonatomic, getter=isCustomContentHomeAffordanceVisible) _Bool customContentHomeAffordanceVisible;
@property (weak, nonatomic) UIPanGestureRecognizer *customContentHomeAffordanceGestureRecognizer;
@property (nonatomic, getter=isNotificationContentViewHidden) _Bool notificationContentViewHidden;
@property (nonatomic) _Bool hasShadow;
@property (nonatomic, getter=isContentReplacedWithSnapshot) _Bool contentReplacedWithSnapshot;
@property (nonatomic, readonly, getter=isCoalescedNotificationBundle) _Bool coalescedNotificationBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)_setDelegate:(id)arg1;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)updateContent;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateScrollViewContentSize;
- (_Bool)_canPan;
- (long long)_dateFormatStyle;
- (_Bool)adjustForContentSizeCategoryChange;
- (long long)materialRecipe;
- (id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (void)_setupStaticContentProvider;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;
- (id)initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(_Bool)arg2;
- (_Bool)_setNotificationRequest:(id)arg1;
- (struct UIView *)_lookViewIfLoaded;
- (void)_updateWithProvidedStaticContent;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (void)_updateWithProvidedCustomContent;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preserveInputViews;
- (_Bool)restoreInputViews;
- (struct UIView *)_lookViewLoadingIfNecessary:(_Bool)arg1;
- (void)_updateLookView:(struct UIView *)arg1 withTitleFromProvidedStaticContent:(id)arg2;
- (unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
- (void)_setupAuxiliaryOptionsContentProvider;
- (void)_loadLookView;
- (id)_contentSizeManagingView;
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1 parentContentContainerBounds:(struct CGRect)arg2;
- (void)_setPreferredCustomContentSize:(struct CGSize)arg1;
- (void)_notificationViewControllerViewDidLoad;
- (void)setHasUpdatedContent;
- (void)setNCTransitionAnimationState:(long long)arg1;
- (struct UIView *)_lookView;
- (_Bool)_shouldPadScrollViewContentSizeHeight;
- (id)notificationUsageTrackingState;
- (void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(_Bool)arg3;
- (void)_executeDefaultAction:(_Bool)arg1;
- (void)_executeCancelAction:(_Bool)arg1;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContentRequestsDefaultAction:(id)arg1;
- (void)customContentRequestsDismiss:(id)arg1;
- (void)invalidateContentProviders;
- (void)_setupCustomContentProvider;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (_Bool)dismissPresentedViewControllerAndClearNotification:(_Bool)arg1 animated:(_Bool)arg2;
- (void)expandAndPlayMedia;
- (_Bool)shouldRestorePresentingShortLookOnDismiss;
- (long long)ncTransitionAnimationState;
- (void)_executeClearAction:(_Bool)arg1;
- (void)_executeCloseAction:(_Bool)arg1;
- (void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(_Bool)arg3;
- (void)presentLongLookAnimated:(_Bool)arg1 trigger:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadContentProviders;

@end
