/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, PNPDeviceState, PNPPencilView, PNPSyntheticPencilInteractionEventSource, PNPWelcomeBuddyDescriptionView, PNPWizardAdvanceStepButton, PNPWizardScratchpadView, UILabel, UINavigationBar, UIPencilInteraction, UIScrollView, UIVisualEffectView;

@protocol PNPWizardViewDelegate;

@interface PNPWizardView : UIView

{
    PNPDeviceState *_deviceState;
    unsigned long long _step;
    PNPSyntheticPencilInteractionEventSource *_eventSourceForStep;
    UIPencilInteraction *_pencilInteraction;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PNPWizardAdvanceStepButton *_advanceStepButton;
    PNPWizardScratchpadView *_scratchpadView;
    PNPPencilView *_pencilView;
    NSLayoutConstraint *_pencilViewHeightConstraint;
    NSLayoutConstraint *_scratchpadTopConstraint;
    _Bool _transitioningToNextStep;
    PNPWelcomeBuddyDescriptionView *_firstDescriptionView;
    PNPWelcomeBuddyDescriptionView *_secondDescriptionView;
    PNPWelcomeBuddyDescriptionView *_thirdDescriptionView;
    NSArray *_quickSwapViews;
    NSArray *_bulletPointViews;
    UINavigationBar *_navBar;
    UIVisualEffectView *_topTuckView;
    UIVisualEffectView *_tuckView;
    NSLayoutConstraint *_tuckViewConstraintWelcome;
    NSLayoutConstraint *_tuckViewConstraintQuickSwap;
    UIScrollView *_scrollView;
    UIView *_scrollViewContainer;
    NSLayoutConstraint *_scrollViewBottomConstraintWelcome;
    NSLayoutConstraint *_scrollViewBottomConstraintQuickSwap;
    _Bool _showsWizardContents;
    id <PNPWizardViewDelegate> _delegate;
}

@property (nonatomic, readonly) struct CGRect pencilViewRect;
@property (nonatomic) _Bool showsWizardContents;
@property (weak, nonatomic) id <PNPWizardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)play;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)pencilInteractionDidTap:(id)arg1;
- (void)_updateFonts;
- (void)_goBack;
- (double)_titlePadding;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(CDUnknownBlockType)arg2;
- (void)scratchPadViewHadInteractionEvent:(id)arg1;
- (_Bool)scratchPadViewIsPlayingAnimation:(id)arg1;
- (void)_moveToStep:(unsigned long long)arg1;
- (void)_updateEventSource;
- (void)_advanceStep;
- (void)_setupBackButton;
- (void)_setupWelcomePaneElements;
- (void)prepareForDrawing;

@end
