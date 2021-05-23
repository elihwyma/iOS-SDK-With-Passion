/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSTimer, UITextInteractionAssistant, UITextRangeView, UITextSelection;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView

{
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UIView *m_floatingCaretView;
    UITextRangeView *m_rangeView;
    _Bool m_caretBlinks;
    _Bool m_caretShowingNow;
    _Bool m_caretAnimating;
    _Bool m_visible;
    _Bool m_activated;
    _Bool m_wasShowingCommands;
    _Bool m_delayShowingCommands;
    _Bool m_dictationReplacementsMode;
    _Bool m_shouldEmphasizeNextSelectionRects;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    _Bool m_deferSelectionCommands;
    struct __CFRunLoopObserver *m_observer;
    _Bool m_activeCaret;
    _Bool m_isSuspended;
    int m_showingCommandsCounterForRotate;
    _Bool m_forceRangeView;
    _Bool m_isInstalledInSelectionContainerView;
    _Bool _isIndirectFloatingCaret;
    struct CGRect _stashedCaretRect;
    struct CGRect _previousGhostCaretRect;
}

@property (nonatomic, readonly) UIView *caretView;
@property (nonatomic, readonly) UIView *floatingCaretView;
@property (nonatomic, readonly) UITextRangeView *rangeView;
@property (nonatomic) struct CGRect stashedCaretRect;
@property (nonatomic) _Bool isIndirectFloatingCaret;
@property (nonatomic) struct CGRect previousGhostCaretRect;
@property (weak, nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, readonly) UITextSelection *selection;
@property (nonatomic) _Bool caretBlinks;
@property (nonatomic) _Bool visible;
@property (nonatomic) _Bool forceRangeView;
@property (nonatomic, readonly) _Bool selectionCommandsShowing;
@property (retain, nonatomic) NSArray *replacements;
@property (nonatomic, readonly) _Bool isInstalledInSelectionContainerView;

- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (void)removeFromSuperview;
- (void)selectionChanged;
- (void)tintColorDidChange;
- (void)activate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showSelectionCommands;
- (void)deactivate;
- (id)scrollView;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)configureForSelectionMode;
- (void)configureForHighlightMode;
- (void)updateSelectionRects;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)detach;
- (id)dynamicCaretList;
- (void)cancelDelayedCommandRequests;
- (void)updateDocumentHasContent:(_Bool)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)deferredUpdateSelectionRects;
- (void)setEmphasisOnNextSelectionRects;
- (void)willBeginFloatingCursor:(_Bool)arg1;
- (struct CGPoint)floatingCursorPositionForPoint:(struct CGPoint)arg1;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)hideSelectionCommands;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (void)updateSelectionDots;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)installIfNecessary;
- (void)validateWithInteractionAssistant:(id)arg1;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;
- (void)layoutChangedByScrolling:(_Bool)arg1;
- (struct CGRect)selectionBoundingBox;
- (void)prepareForMagnification;
- (void)doneMagnifying;
- (void)inputViewWillChange;
- (void)inputViewDidChange;
- (void)clearRangeAnimated:(_Bool)arg1;
- (void)wilLResume:(id)arg1;
- (void)textSelectionViewActivated:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (void)scaleDidChange:(id)arg1;
- (void)inputViewWillAnimate;
- (void)inputViewDidAnimate;
- (void)selectionWillTranslateForReachability:(id)arg1;
- (void)selectionDidTranslateForReachability:(id)arg1;
- (void)windowDidResignOrBecomeKey;
- (void)inputViewWillMove:(id)arg1;
- (void)inputViewDidMove;
- (void)viewAnimate:(id)arg1;
- (void)appearOrFadeIfNecessary;
- (void)deactivateAndCollapseSelection:(_Bool)arg1;
- (void)deferredUpdateSelectionCommands;
- (_Bool)affectedByScrollerNotification:(id)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (_Bool)shouldBeVisible;
- (void)clearCaret;
- (void)clearCaretBlinkTimer;
- (id)dynamicCaret;
- (void)showCaret:(int)arg1;
- (void)showInitialCaret;
- (void)touchCaretBlinkTimer;
- (id)caretViewColor;
- (void)updateSelectionRectsIfNeeded;
- (void)showCommandsWithReplacements:(id)arg1;
- (struct CGRect)clippedTargetRect:(struct CGRect)arg1;
- (void)_showCommandsWithReplacements:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(_Bool)arg2 forDictation:(_Bool)arg3 rectsToEvade:(id)arg4;
- (_Bool)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 rectsToEvade:(id)arg3;
- (void)_showSelectionCommandsForContextMenu:(_Bool)arg1;
- (void)calculateReplacementsWithGenerator:(id)arg1 andShowAfterDelay:(double)arg2;
- (void)hideCaret:(int)arg1;
- (void)_hideCaret:(int)arg1;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)animateBoxShrinkOn:(id)arg1;
- (void)animateExpanderOn:(id)arg1;
- (void)_showCaret:(int)arg1;
- (id)floatingCaretViewColor;
- (void)beginFloatingCaretView;
- (_Bool)_shouldUseIndirectFloatingCaret;
- (void)animatePulsingIndirectCaret:(id)arg1;
- (void)animatePulsingDirectCaret:(id)arg1;
- (_Bool)point:(struct CGPoint)arg1 isNearCursorRect:(struct CGRect)arg2;
- (void)animateCaret:(id)arg1 toPosition:(struct CGPoint)arg2 withSize:(struct CGSize)arg3;
- (void)endFloatingCaretView;
- (void)updateSelectionCommands;
- (void)configureForReplacementMode;

@end
