/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKBubbleFlowContainerView, NSMutableDictionary, NSString, OBBoldTrayButton, OBPrivacyLinkController, UILabel, UIView;

@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingViewController : UIViewController <Swift>

{
    _Bool _presenting;
    id <GKOnboardingFlowDelegate> _delegate;
    NSString *_lastPersonalizationVersionDisplayed;
    unsigned long long _lastPrivacyNoticeVersionDisplayed;
    NSMutableDictionary *_analyticsPayload;
    UIView *_privacyContainer;
    UIView *_bubblePlaceholder;
    UIView *_buttonContainer;
    OBBoldTrayButton *_nextButton;
    GKBubbleFlowContainerView *_bubblesContainerView;
    UIView *_bubblesAnchorView;
    UILabel *_mainTitle;
    UILabel *_subTitle;
    OBPrivacyLinkController *_privacyLink;
    double _transitionDuration;
}

@property (retain, nonatomic) UIView *privacyContainer;
@property (retain, nonatomic) UIView *bubblePlaceholder;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) OBBoldTrayButton *nextButton;
@property (retain, nonatomic) GKBubbleFlowContainerView *bubblesContainerView;
@property (retain, nonatomic) UIView *bubblesAnchorView;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (nonatomic) double transitionDuration;
@property (weak, nonatomic) id <GKOnboardingFlowDelegate> delegate;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (retain, nonatomic) NSMutableDictionary *analyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)nextPressed:(id)arg1;
- (void)addPrivacyLink;
- (void)constrainTextInView:(id)arg1 toFontSize:(double)arg2;
- (void)showSignOutAlert;
- (_Bool)shouldPresentPersonalizationScreen;
- (void)presentPersonalizationScreen;
- (_Bool)didDisplayPrivacyNotice;
- (void)updateBubbleRectsWithScale:(double)arg1;
- (void)removeConstraintsForView:(id)arg1;
- (void)signOutPressed:(id)arg1;
- (id)basicAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;

@end
