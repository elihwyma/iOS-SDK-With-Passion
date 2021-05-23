/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

#import <ChatKit/Swift-Protocol.h>

@class CABackdropLayer, CALayer, CKBalloonView, CKChatControllerDummyAnimator, CKFullScreenEffectManager, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UIFont, UILabel, UIPageControl, UIPanGestureRecognizer, UISegmentedControl;

@protocol CKEffectPickerViewDelegate;

@interface CKEffectPickerView : UIView <Swift>

{
    BOOL _controlColor;
    _Bool _needsSwitcherAnimation;
    _Bool _isAnimating;
    _Bool _usesDarkVibrancyForLayers;
    id <CKEffectPickerViewDelegate> _delegate;
    UIView *_hintContainer;
    UIView *_peekContainer;
    CABackdropLayer *_backdrop;
    CALayer *_blueContrastLayer;
    CKFullScreenEffectManager *_fsem;
    NSArray *_momentIdentifiers;
    NSMutableDictionary *_animationTimers;
    NSMutableDictionary *_animatedCells;
    NSMutableDictionary *_pausedAnimatedCells;
    UIFont *_effectLabelFont;
    UICollectionView *_momentsCollectionView;
    UIView *_backgroundView;
    NSLayoutConstraint *_typeSegmentedControlBottomConstraint;
    NSLayoutConstraint *_mainLabelBottomConstraint;
    NSLayoutConstraint *_lastEffectDotTopConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CKChatControllerDummyAnimator *_dummyAnimator;
    UIView *_hintBlackText;
    UIView *_hintSendButton;
    UIButton *_closeButton;
    UIView *_roundedContainerView;
    CKBalloonView *_balloonView;
    NSMutableArray *_effectLabels;
    NSMutableDictionary *_effectDotConstraintsThatChange;
    unsigned long long _selectedIndex;
    NSMutableArray *_effectDotButtons;
    NSMutableArray *_effectDescriptiveLabels;
    NSMutableArray *_effectSendButtons;
    UIButton *_sendMomentButton;
    UISegmentedControl *_typeSegmentedControl;
    NSLayoutConstraint *_roundedContainerViewTopConstraint;
    NSLayoutConstraint *_closeButtonBottomConstraint;
    NSMutableArray *_effectIdentifiers;
    CABackdropLayer *_segmentedBackdrop;
    UIPageControl *_pageControl;
    UILabel *_mainLabel;
    UILabel *_momentTitleLabel;
    UIView *_accessibilityBackdropView;
    UIView *_accessibilityCloseBackgroundView;
    UIView *_accessibilitySendBackgroundView;
    struct CGPoint _balloonViewOrigin;
}

@property (retain, nonatomic) UIView *hintContainer;
@property (retain, nonatomic) UIView *peekContainer;
@property (retain, nonatomic) CABackdropLayer *backdrop;
@property (retain, nonatomic) CALayer *blueContrastLayer;
@property (retain, nonatomic) CKFullScreenEffectManager *fsem;
@property (copy, nonatomic) NSArray *momentIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *animationTimers;
@property (retain, nonatomic) NSMutableDictionary *animatedCells;
@property (retain, nonatomic) NSMutableDictionary *pausedAnimatedCells;
@property (nonatomic) BOOL controlColor;
@property (retain, nonatomic) UIFont *effectLabelFont;
@property (retain, nonatomic) UICollectionView *momentsCollectionView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSLayoutConstraint *typeSegmentedControlBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *mainLabelBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *lastEffectDotTopConstraint;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator;
@property (nonatomic) _Bool needsSwitcherAnimation;
@property (nonatomic) UIView *hintBlackText;
@property (nonatomic) UIView *hintSendButton;
@property (nonatomic) struct CGPoint balloonViewOrigin;
@property (nonatomic) _Bool isAnimating;
@property (nonatomic) _Bool usesDarkVibrancyForLayers;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *roundedContainerView;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) NSMutableArray *effectLabels;
@property (retain, nonatomic) NSMutableDictionary *effectDotConstraintsThatChange;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *effectDotButtons;
@property (retain, nonatomic) NSMutableArray *effectDescriptiveLabels;
@property (retain, nonatomic) NSMutableArray *effectSendButtons;
@property (retain, nonatomic) UIButton *sendMomentButton;
@property (retain, nonatomic) UISegmentedControl *typeSegmentedControl;
@property (retain, nonatomic) NSLayoutConstraint *roundedContainerViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonBottomConstraint;
@property (retain, nonatomic) NSMutableArray *effectIdentifiers;
@property (retain, nonatomic) CABackdropLayer *segmentedBackdrop;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *momentTitleLabel;
@property (retain, nonatomic) UIView *accessibilityBackdropView;
@property (retain, nonatomic) UIView *accessibilityCloseBackgroundView;
@property (retain, nonatomic) UIView *accessibilitySendBackgroundView;
@property (nonatomic) id <CKEffectPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldUseLargeScreenDimension;

- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)_applicationDidEnterBackground;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_applicationWillEnterForeground;
- (void)updateColor:(BOOL)arg1;
- (id)sendImage;
- (void)updateViewColors;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)contentSizeCategoryDidChange;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect)arg1;
- (double)marginBetweenPickerDotButtons;
- (struct CGRect)_updateBalloonViewOrigin:(struct CGRect)arg1 forButtonFrame:(struct CGRect)arg2;
- (void)_updateRoundedContainerView;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4 color:(BOOL)arg5;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)_adjustMainLabelAndTypeSegmentedControlIfNecessary;
- (void)invalidateAllAnimationTimers;
- (void)_animateIn;
- (void)updateHintTransition:(double)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)_startSwitcherAnimationIfNecessary;
- (void)cancelImpactSelection;
- (void)resetDotConstraintsToDefault;
- (void)_touchUpInsideDotButton:(id)arg1;
- (void)effectTypeDidChange:(id)arg1;
- (_Bool)shouldAnimatePreviousLabelForCancel:(id)arg1;
- (void)pageControlChanged:(id)arg1;
- (void)_touchUpInsideSendMomentButton:(id)arg1;
- (void)_touchUpInsideCloseButton:(id)arg1;
- (void)_resizeBalloon;
- (_Bool)_keyboardIsOnTopOfEffectPickerWindow;
- (void)_panGesture:(id)arg1;
- (void)_updateBalloonViewPositionAnimated:(_Bool)arg1;
- (void)updateMomentTitle:(_Bool)arg1;
- (void)_accessibilityContrastStatusDidChange;
- (void)updateViewColors:(_Bool)arg1;
- (void)_animateOut;
- (long long)selectedMomentIndex;
- (id)_blackTextReplica;
- (void)_setBalloonText:(id)arg1 withColor:(id)arg2;
- (void)_touchUpInsideSendButton:(id)arg1;
- (void)_setNeedsSwitcherAnimationIfNecessary;
- (void)checkAndUpdateForSpotlightEffect:(id)arg1;
- (void)addAnimationTimerForCell:(id)arg1;
- (void)removeAnimationTimerForCell:(id)arg1;
- (void)_updateMomentsBackgroundColor;
- (void)_stopBalloonAnimation;
- (void)_animateSelectedEffectLabelAtIndex:(unsigned long long)arg1 fromPreviousIndex:(unsigned long long)arg2;
- (void)_animateInSendButton:(id)arg1;
- (void)_animateOutSendButton:(id)arg1;
- (void)startAnimationPreviewForIdentifier:(id)arg1;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (void)setBalloonText:(id)arg1;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;

@end
