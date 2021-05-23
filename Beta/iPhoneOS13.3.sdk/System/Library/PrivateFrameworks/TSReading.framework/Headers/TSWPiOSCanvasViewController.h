/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDiOSCanvasViewController.h>

@class NSMutableArray, NSString, TSUColor, TSWPHardPressGestureRecognizer, TSWPHyperlinkField, TSWPInteractiveCanvasController, TSWPLongPressGestureRecognizer, TSWPRep, TSWPSwipeGestureRecognizer, TSWPTwoPartAction, UIGestureRecognizer, UITapGestureRecognizer, UITextInteraction;

@interface TSWPiOSCanvasViewController : TSDiOSCanvasViewController

{
    UIGestureRecognizer *_hyperlinkGestureRecognizer;
    TSWPSwipeGestureRecognizer *_rightSwipeGestureRecognizer;
    TSWPSwipeGestureRecognizer *_leftSwipeGestureRecognizer;
    TSWPLongPressGestureRecognizer *_longPressGestureRecognizer;
    TSWPTwoPartAction *_delayedTapAction;
    NSMutableArray *_gestureRecognizers;
    _Bool _isInteractingWithHyperLink;
    _Bool _linkInteractionIsLongPress;
    TSWPHyperlinkField *_interactionHyperlinkField;
    TSWPRep *_interactionHyperLinkRep;
    UITapGestureRecognizer *_secondarySingleTapGestureRecognizer;
    TSWPHardPressGestureRecognizer *_hardPressGesture;
    UITextInteraction *_textInteraction;
}

@property (retain, nonatomic) TSWPHardPressGestureRecognizer *hardPressGesture;
@property (readonly) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (retain, nonatomic) UITextInteraction *textInteraction;
@property (nonatomic, readonly) TSWPSwipeGestureRecognizer *textLeftSwipeGestureRecognizer;
@property (nonatomic, readonly) TSWPSwipeGestureRecognizer *textRightSwipeGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *secondarySingleTapGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *hyperlinkGestureRecognizer;
@property (nonatomic, readonly) TSWPLongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) TSUColor *backgroundColorForMagnifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)teardown;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)willBeginGesture;
- (void)cancelInteractionWithLink;
- (_Bool)mightHaveLinks;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)isInteractingWithLink;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (void)interactionWillBegin:(id)arg1;
- (void)interactionDidEnd:(id)arg1;
- (_Bool)interactionShouldSuppressSystemUI:(id)arg1;
- (_Bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)interactionShouldBegin:(id)arg1;
- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;
- (void)cancelDelayedTapAction;
- (void)gestureSequenceWillBegin;
- (void)gestureSequenceDidEnd;
- (void)setUpGestureRecognizers;
- (id)hyperlinkUICustomStringForURLString:(id)arg1;
- (_Bool)shouldHideCanvasLayerInMagnifier;
- (void)startDelayedTapAction:(id)arg1;
- (_Bool)onlyAllowTextSwipesWhenEditing;
- (void)addSwipeGestureRecognizers;
- (void)removeSwipeGestureRecognizers;
- (_Bool)hasDelayedTapAction;
- (void)finishDelayedTapAction;
- (void)p_handleHardPressGestureRecognizer:(id)arg1;
- (void)p_endHardPressGestureRecognizer;
- (void)_resetAndClearInteractions;
- (void)_clearSelectedRange;
- (void)_resetLinkInteraction;
- (id)p_newSwipeGestureRecognizerWithDirection:(int)arg1 numberOfTouchesRequired:(unsigned int)arg2;
- (void)setUpGestureDependenciesForNewCopyOfTextGesture:(id)arg1;
- (void)p_addSwipeGestureRecognizer:(id)arg1 failRequiredFor:(id)arg2;
- (id)_dragItemsForInteraction:(id)arg1 session:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)_hitRepAtPoint:(struct CGPoint)arg1;
- (_Bool)_shouldAllowInteractionAtPoint:(struct CGPoint)arg1;
- (id)_hyperLinkFieldAtPoint:(struct CGPoint)arg1;
- (_Bool)canDisplayHyperlinkUI;
- (void)hyperlinkUIWillShow;
- (void)hyperlinkUIDidHide;
- (_Bool)hyperlinkUIShouldShowCustomUI;
- (_Bool)hyperlinkUIShouldShow;
- (void)hyperlinkUIShowCustomUIforRep:(id)arg1 field:(id)arg2;

@end
