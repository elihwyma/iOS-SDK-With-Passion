/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, NSTimer, UIDimmingView, UIInputSwitcherSelectionExtraView, UIInputSwitcherShadowView, UIInputSwitcherTableView, UIKBKeyView, UIKBTree, UIKeyboardLayoutStar, UISelectionFeedbackGenerator;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView <Swift>

{
    UIInputSwitcherTableView *m_table;
    UIInputSwitcherShadowView *m_shadowView;
    UIInputSwitcherSelectionExtraView *m_selExtraView;
    struct CGRect m_referenceRect;
    double m_pointerOffset;
    _Bool m_scrollable;
    _Bool m_startAutoscroll;
    _Bool m_scrolling;
    _Bool m_shouldFade;
    struct CGPoint m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer *m_scrollTimer;
    unsigned long long m_visibleRows;
    unsigned long long m_firstVisibleRow;
    long long m_mode;
    UIDimmingView *m_dimmingView;
    UIView *m_inputView;
    struct CGPoint m_referenceLocation;
    UIKBKeyView *m_backgroundKeyView;
    double m_timeDismissed;
    UISelectionFeedbackGenerator *m_slideBehavior;
    _Bool _usesStraightLeftEdge;
    _Bool _usesDarkTheme;
    UIKBTree *_referenceKey;
    UIKeyboardLayoutStar *_layout;
}

@property (nonatomic) long long mode;
@property (readonly) _Bool usesTable;
@property (nonatomic) _Bool usesStraightLeftEdge;
@property (nonatomic) _Bool usesDarkTheme;
@property (nonatomic) UIKBTree *referenceKey;
@property (nonatomic) UIKeyboardLayoutStar *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)clear;
- (_Bool)isVisible;
- (id)table;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)containerView;
- (struct CGSize)preferredSize;
- (id)font;
- (void)show;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)inputView;
- (void)setNeedsDisplay;
- (void)setRenderConfig:(id)arg1;
- (unsigned long long)numberOfItems;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)dimmingView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)hide;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (void)showAsHUD;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (id)subtitleFont;
- (unsigned long long)defaultSelectedIndex;
- (_Bool)shouldShowSelectionExtraViewForIndexPath:(id)arg1;
- (void)highlightRow:(unsigned long long)arg1;
- (void)returnToKeyboardIfNeeded;
- (id)indexPathForInputSwitcherCellIncludingInteractiveInsetsAtPoint:(struct CGPoint)arg1;
- (_Bool)launchedFromKeyboard;
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;
- (void)fadeWithDelay:(double)arg1 forSelectionAtIndex:(unsigned long long)arg2;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)showAsHUDFromLocation:(struct CGPoint)arg1 withInputView:(id)arg2 touchBegan:(double)arg3;
- (struct CGRect)interactiveBounds;
- (void)selectItemAtPoint:(struct CGPoint)arg1;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (_Bool)shouldShow;
- (void)didShow;
- (void)willFade;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (_Bool)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1;
- (void)setKeyboardDimmed:(_Bool)arg1;
- (_Bool)centerPopUpOverKey;
- (void)performShowAnimation;
- (void)willShow;
- (_Bool)usesDimmingView;
- (id)maskForShadowViewBlurredBackground;
- (void)applicationWillSuspend:(id)arg1;
- (_Bool)usesShadowView;
- (void)setupBackgroundKeyViewWithSize:(struct CGSize)arg1;
- (void)insertSelExtraView;
- (id)_renderConfig;
- (unsigned long long)_internationalKeyRoundedCornerInLayout:(id)arg1;
- (void)_delayedFade;
- (void)stopAnyAutoscrolling;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)endScrolling:(id)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(_Bool)arg2;
- (void)setupShadowViewWithSize:(struct CGSize)arg1;
- (double)minYOfLastTableCellForSelectionExtraView;
- (struct CGRect)popupRect;

@end
