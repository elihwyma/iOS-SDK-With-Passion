/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIFieldEditor, UIGestureRecognizer, UILongPressGestureRecognizer, UIResponder, UIScrollView, UITapGestureRecognizer, UITextChecker, UITextInteraction, UITextLinkInteraction, UITextRange, UITextSelectionView, UITouch;

@protocol UITextInput;

@interface UITextInteractionAssistant : NSObject

{
    UIResponder<UITextInput> *_view;
    UITextSelectionView *_selectionView;
    int _autoscrollRamp;
    double _autoscrollFactor;
    struct CGPoint _autoscrollBasePoint;
    struct CGPoint _autoscrollUntransformedExtentPoint;
    struct CGPoint _loupeGestureEndPoint;
    UITextChecker *_textChecker;
    _Bool _inGesture;
    _Bool _autoscrolled;
    _Bool _willHandoffLoupeMagnifier;
    _Bool _needsGestureUpdate;
    long long _previousRepeatedGranularity;
    UITextRange *_stashedTextRange;
    _Bool _didUseStashedRange;
    _Bool _expectingCommit;
    _Bool _externalTextInput;
    _Bool _suppressSystemUI;
    UITextLinkInteraction *_linkInteraction;
    UITextInteraction *_interactions;
    long long _textInteractionMode;
    UITextInteraction *_externalInteractions;
    UITouch *_synthesizedTouchForLollipopForwarding;
    _Bool _detaching;
}

@property (nonatomic, readonly) UIResponder<UITextInput> *view;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic, readonly) UIResponder<UITextInput> *textDocument;
@property (retain, nonatomic, readonly) UILongPressGestureRecognizer *loupeGesture;
@property (retain, nonatomic, readonly) UITapGestureRecognizer *singleTapGesture;
@property (retain, nonatomic, readonly) UIGestureRecognizer *doubleTapGesture;
@property (retain, nonatomic, readonly) UIGestureRecognizer *forcePressGesture;
@property (nonatomic) _Bool inGesture;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) _Bool autoscrolled;
@property (nonatomic) struct CGPoint autoscrollUntransformedExtentPoint;
@property (nonatomic, readonly) _Bool externalTextInput;
@property (nonatomic) struct CGPoint loupeGestureEndPoint;
@property (nonatomic, readonly) _Bool willHandoffLoupeMagnifier;
@property (retain, nonatomic, readonly) UITextInteraction *interactions;
@property (retain, nonatomic) UITextInteraction *externalInteractions;
@property (retain, nonatomic) UITextLinkInteraction *linkInteraction;
@property (nonatomic) _Bool expectingCommit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool needsGestureUpdate;
@property (nonatomic, readonly) UIFieldEditor *fieldEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_nextGranularityInCycle:(long long)arg1;

- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (void)selectionChanged;
- (id)initWithView:(id)arg1;
- (void)activate;
- (id)attributedTextInRange:(id)arg1;
- (id)_selectionView;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)clearSelection;
- (void)selectAll:(id)arg1;
- (_Bool)hasReplacements;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)addGestureRecognizersToView:(id)arg1;
- (void)detach;
- (_Bool)shouldEnqueueObserverUpdates;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)scrollSelectionToVisible;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (void)setWillHandoffLoupeMagnifier;
- (void)setGestureRecognizers;
- (void)willBeginFloatingCursor:(_Bool)arg1;
- (void)loupeMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (void)loupeGestureWithState:(long long)arg1 location:(CDUnknownBlockType)arg2 translation:(CDUnknownBlockType)arg3 velocity:(CDUnknownBlockType)arg4 modifierFlags:(long long)arg5 shouldCancel:(_Bool *)arg6;
- (void)cancelAutoscroll;
- (_Bool)containerIsPlainStyleAtom;
- (void)setFirstResponderIfNecessary;
- (void)notifyKeyboardSelectionChanged;
- (id)rangeForTextReplacement:(id)arg1;
- (void)selectWordWithoutShowingCommands;
- (_Bool)containerIsTextField;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)willBeginSelectionInteraction;
- (void)updateWithMagnifierTerminalPoint:(_Bool)arg1;
- (void)didEndSelectionInteraction;
- (_Bool)useGesturesForEditableContent;
- (_Bool)viewCouldBecomeEditable:(id)arg1;
- (void)resetWillHandoffLoupeMagnifier;
- (void)canBeginDragCursor:(id)arg1;
- (_Bool)containerAllowsSelectionTintOnly;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)deactivateSelection;
- (id)initWithView:(id)arg1 textInteractionMode:(long long)arg2;
- (void)resignedFirstResponder;
- (void)selectWord;
- (void)scheduleReplacements;
- (void)scheduleChineseTransliteration;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)setSuppressSystemUI:(_Bool)arg1;
- (_Bool)didUseStashedSelection;
- (void)stashCurrentSelection;
- (void)clearStashedSelection;
- (void)lollipopGestureWithState:(long long)arg1 location:(struct CGPoint)arg2 locationOfFirstTouch:(struct CGPoint)arg3;
- (void)setFirstResponderIfNecessaryActivatingSelection:(_Bool)arg1;
- (void)autoscrollWillNotStart;
- (void)clearGestureRecognizers:(_Bool)arg1;
- (id)initWithResponder:(id)arg1;
- (void)clearGestureRecognizers;
- (id)textSelectionView;
- (void)detach:(_Bool)arg1;
- (void)activateSelection;
- (_Bool)containerIsBrowserView;
- (_Bool)containerIsAtom;
- (_Bool)wantsLinkInteraction;
- (Class)selectionInteractionClass;
- (id)_asText;
- (Class)loupeInteractionClass;
- (void)extendSelectionToPoint:(struct CGPoint)arg1;
- (void)_updateSelectionWithPoint:(struct CGPoint)arg1 granularity:(long long)arg2 forceGranularity:(_Bool)arg3;
- (void)selectionAnimationDidStop;
- (id)_scrollable;
- (_Bool)handleMultilingualAlternativeWithString:(id)arg1 range:(id)arg2;
- (void)scheduleDictationReplacementsForMultilingualAlternatives:(id)arg1 range:(id)arg2;
- (id)generatorForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)layoutChangedByScrolling:(_Bool)arg1;
- (_Bool)requiresImmediateUpdate;
- (void)attach;
- (_Bool)containerAllowsSelection;
- (void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint)arg1;
- (_Bool)shouldSuppressSelectionCommands;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)updateAutoscroll:(id)arg1;
- (_Bool)showMultilingualDictationReplacementWithRange:(id)arg1;
- (_Bool)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint)arg2;
- (void)willStartScrollingOrZooming;
- (void)didEndScrollingOrZooming;

@end
