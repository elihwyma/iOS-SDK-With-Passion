/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, UICalloutBarBackground, UICalloutBarButton, UIResponder, UIScrollView, UIStackView;

@interface UICalloutBar : UIView

{
    id m_delegate;
    struct CGPoint m_pointBelowControls;
    struct CGPoint m_pointAboveControls;
    struct CGPoint m_pointLeftOfControls;
    struct CGPoint m_pointRightOfControls;
    struct CGPoint m_targetPoint;
    int m_targetDirection;
    _Bool m_targetHorizontal;
    _Bool m_fadeAfterCommand;
    _Bool m_recalcVisibleItems;
    int m_pageCount;
    int m_currentPage;
    _Bool m_supressesHorizontalMovement;
    struct CGRect m_controlFrame;
    struct CGRect m_targetRect;
    UIView *m_targetView;
    struct CGRect m_supressesHorizontalMovementFrame;
    double m_supressedHorizontalMovementX;
    int m_arrowDirection;
    double m_availableSpaceOnLeft;
    double m_availableSpaceOnRight;
    NSArray *m_systemButtonDescriptions;
    NSMutableArray *m_currentSystemButtons;
    NSMutableArray *m_extraButtons;
    UICalloutBarButton *m_nextButton;
    UICalloutBarButton *m_previousButton;
    NSMutableArray *m_rectsToEvade;
    UICalloutBarBackground *m_overlay;
    double m_fadedTime;
    NSDictionary *m_currentAppearOrFadeContext;
    id m_responderTarget;
    CDUnknownBlockType m_responderTargetCompletionHandler;
    NSArray *m_replacements;
    NSArray *m_extraItems;
    NSString *m_untruncatedString;
    _Bool m_didPromptForReplace;
    _Bool m_showAllReplacements;
    _Bool m_ignoreFade;
    _Bool m_suppressesAppearance;
    _Bool m_isDisplayingVertically;
    UIScrollView *m_verticalScrollView;
    UIStackView *m_verticalStackView;
    NSMutableArray *m_axSeparatorViews;
}

@property (nonatomic) struct CGPoint pointAboveControls;
@property (nonatomic) struct CGPoint pointBelowControls;
@property (nonatomic) struct CGPoint pointLeftOfControls;
@property (nonatomic) struct CGPoint pointRightOfControls;
@property (nonatomic) struct CGPoint targetPoint;
@property (nonatomic) int targetDirection;
@property (nonatomic) _Bool targetHorizontal;
@property (nonatomic) struct CGRect targetRect;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) int arrowDirection;
@property (nonatomic) struct CGRect controlFrame;
@property (retain, nonatomic) NSDictionary *currentAppearOrFadeContext;
@property (nonatomic) _Bool suppressesAppearance;
@property (nonatomic, readonly) _Bool isDisplayingVertically;
@property (nonatomic, readonly) UIScrollView *verticalScrollView;
@property (nonatomic, readonly) UIStackView *verticalStackView;
@property (nonatomic, readonly) NSArray *rectsToEvade;
@property (weak, nonatomic) id delegate;
@property (nonatomic, readonly) _Bool visible;
@property (weak, nonatomic) UIResponder *responderTarget;
@property (copy, nonatomic) NSArray *replacements;
@property (nonatomic) _Bool showAllReplacements;
@property (copy, nonatomic) NSArray *extraItems;
@property (copy, nonatomic) NSString *untruncatedString;
@property (nonatomic) _Bool supressesHorizontalMovement;

+ (id)sharedCalloutBar;
+ (void)fadeSharedCalloutBar;
+ (id)activeCalloutBar;
+ (void)performWithoutAffectingSharedCalloutBar:(CDUnknownBlockType)arg1;
+ (void)_releaseSharedInstance;
+ (_Bool)sharedCalloutBarIsVisible;
+ (void)fadeSharedCalloutBarFromTargetView:(id)arg1;
+ (void)hideSharedCalloutBar;
+ (void)hideSharedCalloutBarFromTargetView:(id)arg1;

- (void)dealloc;
- (void)update;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)show;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setResponderTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hide;
- (void)buttonHighlighted:(id)arg1 highlighted:(_Bool)arg2;
- (void)buttonPressed:(id)arg1;
- (void)fade;
- (void)fadeFromTargetView:(id)arg1;
- (void)hideFromTargetView:(id)arg1;
- (void)_showPreviousItems:(id)arg1;
- (void)_showNextItems:(id)arg1;
- (void)applicationDidAddDeactivationReason:(id)arg1;
- (id)_targetForAction:(SEL)arg1;
- (void)_fadeAfterCommand:(SEL)arg1;
- (_Bool)_updateVisibleItemsAnimated:(_Bool)arg1;
- (void)keyboardAnalyticsDispatchWithSelector:(SEL)arg1;
- (void)clearEvadeRects;
- (struct CGRect)textEffectsWindowSafeArea;
- (double)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint)arg1 proposedX:(double)arg2;
- (_Bool)rectClear:(struct CGRect)arg1;
- (_Bool)hasReplacements;
- (_Bool)calculateControlFrameForCalloutSize:(struct CGSize)arg1 below:(_Bool)arg2;
- (_Bool)calculateControlFrameForCalloutSize:(struct CGSize)arg1 right:(_Bool)arg2;
- (_Bool)calculateControlFrameInsideTargetRect:(struct CGSize)arg1;
- (_Bool)setFrameForSize:(struct CGSize)arg1;
- (void)shrinkButtonTextSize:(id)arg1;
- (void)updateForCurrentVerticalPage;
- (void)updateForCurrentHorizontalPage;
- (void)addVerticalSeparatorAfterButton:(id)arg1;
- (void)updateAvailableButtons;
- (double)maxVerticalCalloutHeightForMinButtonHeight:(double)arg1;
- (void)configureButtonsForVerticalView:(double)arg1;
- (void)configureButtons:(double)arg1;
- (void)adjustFrameToAvoidDividerOnArrow;
- (void)updateForCurrentPage;
- (void)_clearResponderTarget;
- (void)_endOngoingAppearOrFadeAnimations;
- (void)appearAnimationDidStopWithContext:(id)arg1;
- (void)fadeAnimationDidStopWithContext:(id)arg1 finished:(_Bool)arg2;
- (void)clearSupressesHorizontalMovementFrame;
- (_Bool)_isOwnedByView:(id)arg1;
- (_Bool)_touchesInsideShouldHideCalloutBar;
- (int)textEffectsVisibilityLevel;
- (void)resetPage;
- (void)setTargetRect:(struct CGRect)arg1 view:(id)arg2 pointBelowControls:(struct CGPoint)arg3 pointAboveControls:(struct CGPoint)arg4;
- (void)setTargetRect:(struct CGRect)arg1 view:(id)arg2 pointLeftOfControls:(struct CGPoint)arg3 pointRightOfControls:(struct CGPoint)arg4;
- (void)setTargetRect:(struct CGRect)arg1 view:(id)arg2 arrowDirection:(int)arg3;
- (void)appear;
- (void)updateAnimated:(_Bool)arg1;
- (_Bool)recentlyFaded;
- (void)addRectToEvade:(struct CGRect)arg1;
- (void)clearReplacements;

@end
