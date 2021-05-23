/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TUICandidateView, UIKBScreenTraits, UIKeyboardCandidateInlineFloatingView, UIKeyboardCandidateViewConfiguration, UIKeyboardCandidateViewState, UIPanGestureRecognizer, UIView, UIViewPropertyAnimator;

@protocol UIKeyboardCandidateControllerDelegate, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateController : NSObject <Swift>

{
    _Bool _inlineRectIsVertical;
    _Bool _adjustForLeftHandBias;
    _Bool _reuseArrowButtonToExpandAssistantBarItems;
    _Bool _darkKeyboard;
    _Bool _darkKeyboardChanged;
    id <UIKeyboardCandidateControllerDelegate> _delegate;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    NSString *_inlineText;
    double _splitGap;
    long long _activeCandidateViewType;
    UIKBScreenTraits *_screenTraits;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    TUICandidateView *_bar;
    TUICandidateView *_key;
    TUICandidateView *_inlineView;
    UIKeyboardCandidateInlineFloatingView *_inlineViewContainer;
    NSMutableArray *_activeViews;
    UIKeyboardCandidateViewConfiguration *_barConfiguration;
    UIKeyboardCandidateViewConfiguration *_inlineConfiguration;
    UIKeyboardCandidateViewConfiguration *_keyConfiguration;
    UIKeyboardCandidateViewState *_barState;
    UIKeyboardCandidateViewState *_extendedBarState;
    UIKeyboardCandidateViewState *_extendedScrolledBarState;
    UIKeyboardCandidateViewState *_inlineViewState;
    UIKeyboardCandidateViewState *_extendedInlineViewState;
    double _additionalExtendedBarBackdropOffset;
    TIKeyboardCandidate *_currentCandidate;
    NSDictionary *_opacities;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIViewPropertyAnimator *_animator;
    struct CGRect _inlineRect;
}

@property (weak, nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate;
@property (retain, nonatomic) TUICandidateView *bar;
@property (retain, nonatomic) TUICandidateView *key;
@property (retain, nonatomic) TUICandidateView *inlineView;
@property (retain, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineViewContainer;
@property (retain, nonatomic) NSMutableArray *activeViews;
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *barConfiguration;
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *inlineConfiguration;
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *keyConfiguration;
@property (retain, nonatomic) UIKeyboardCandidateViewState *barState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedBarState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedScrolledBarState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *inlineViewState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedInlineViewState;
@property (nonatomic) double additionalExtendedBarBackdropOffset;
@property (retain, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (nonatomic) _Bool darkKeyboard;
@property (nonatomic) _Bool darkKeyboardChanged;
@property (retain, nonatomic) NSDictionary *opacities;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (weak, nonatomic) id <UIKeyboardCandidateControllerDelegate> delegate;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;
@property (copy, nonatomic) NSString *inlineText;
@property (nonatomic) struct CGRect inlineRect;
@property (nonatomic) _Bool inlineRectIsVertical;
@property (nonatomic) _Bool adjustForLeftHandBias;
@property (nonatomic) _Bool reuseArrowButtonToExpandAssistantBarItems;
@property (nonatomic) double splitGap;
@property (nonatomic, readonly) UIView *candidateBar;
@property (nonatomic, readonly) UIView *inlineCandidateView;
@property (nonatomic, readonly) UIView *candidateKey;
@property (nonatomic, readonly) _Bool barIsExtended;
@property (nonatomic, readonly) _Bool inlineViewIsExtended;
@property (nonatomic, readonly) _Bool isExtended;
@property (nonatomic) long long activeCandidateViewType;
@property (nonatomic, readonly) NSArray *activeCandidateViews;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (double)candidateViewAnimationDuration;

- (id)init;
- (void)dealloc;
- (id)snapshot;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_setRenderConfig:(id)arg1;
- (double)candidateBarHeight;
- (void)updateStates;
- (struct UIEdgeInsets)candidateBarEdgeInsetsForOrientation:(long long)arg1;
- (_Bool)hasCandidates;
- (id)candidates;
- (void)loadDefaultStates;
- (id)loadCandidateBar;
- (id)loadInlineCandidateView;
- (void)updateStyles;
- (void)updateConfigurations;
- (void)updateStatesForBar;
- (void)updateStatesForInlineView;
- (void)updateStatesForKey;
- (_Bool)shouldShowDisambiguationCandidates;
- (double)rowHeightForBarForOrientation:(long long)arg1;
- (double)candidateBarHeightForOrientation:(long long)arg1;
- (_Bool)shouldShowSortControlForConfiguration:(id)arg1;
- (_Bool)shouldShowDisambiguationCandidatesInExtendedView;
- (void)updateOpacitiesToState:(id)arg1;
- (void)setupPanGestureRecognizerIfNeeded;
- (void)setupAnimatorWithCurve:(long long)arg1;
- (void)toggleBarExtendedWithAnimator:(id)arg1;
- (void)extendKeyboardBackdropHeight:(double)arg1;
- (void)toggleBarExtended;
- (void)toggleInlineViewExtendedAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)panGestureRecognizerAction:(id)arg1;
- (void)resetSortControlIndexAfterCandidatesChanged;
- (long long)candidateViewTypeForView:(id)arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;
- (void)removeInlineView;
- (void)collapse;
- (void)showCandidateAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)firstNonEmptyActiveCandidateView;
- (_Bool)showCandidate:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (_Bool)hasCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (_Bool)handleNumberKey:(unsigned long long)arg1;
- (_Bool)showCandidate:(id)arg1;
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 generateFeedback:(_Bool)arg5;
- (id)candidateAtIndex:(unsigned long long)arg1;
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4;
- (void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2;
- (void)candidateViewDidTapArrowButton:(id)arg1;
- (void)candidateViewDidTapInlineText:(id)arg1;
- (void)candidateViewWillBeginDragging:(id)arg1;
- (void)candidateViewNeedsToExpand:(id)arg1;
- (_Bool)isExtendedList;
- (_Bool)isFloatingList;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)keyboardBehaviors;
- (id)statisticsIdentifier;
- (unsigned long long)selectedSortIndex;
- (_Bool)handleTabKeyWithShift:(_Bool)arg1;
- (void)candidatesDidChange;
- (void)revealHiddenCandidates;
- (long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
- (long long)rowForCandidateAtIndex:(unsigned long long)arg1;
- (id)secureCandidateRenderTraits;
- (id)newCandidateKeyWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (double)candidateBarWidth;
- (struct CGSize)maximumSizeForInlineView;
- (void)clearCurrentCandidate;
- (void)acceptSelectedCandidate;
- (void)dimKeys:(id)arg1;

@end
