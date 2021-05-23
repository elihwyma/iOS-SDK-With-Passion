/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIResponder, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;

@protocol UISelectionInteractionAssistant, UITextInput;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionController : NSObject

{
    _Bool _hasInteractionAssistant;
    _Bool _hasSelectionInteractionAssistant;
    _Bool _hasTextInputView;
    UITextPosition *_cursorPosition;
    long long _selectionGranularity;
    UITextRange *_initialSelection;
    UITextRange *_selectionBase;
    UIResponder<UITextInput> *_inputDelegate;
    struct CGRect _caretRectForCursorPosition;
}

@property (nonatomic) struct CGRect caretRectForCursorPosition;
@property (retain, nonatomic) UITextRange *initialSelection;
@property (retain, nonatomic) UITextRange *selectionBase;
@property (nonatomic, readonly) UIResponder<UITextInput> *inputDelegate;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, readonly) id <UISelectionInteractionAssistant> selectionInteractionAssistant;
@property (nonatomic) long long selectionGranularity;
@property (retain, nonatomic) UITextPosition *cursorPosition;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) _Bool hasCaretSelection;
@property (nonatomic, readonly) _Bool hasRangedSelection;
@property (nonatomic, readonly) struct CGRect caretRectForFirstSelectedPosition;
@property (nonatomic, readonly) struct CGRect caretRectForLastSelectedPosition;
@property (nonatomic, readonly) struct CGRect caretRectForLeftmostSelectedPosition;
@property (nonatomic, readonly) struct CGRect caretRectForRightmostSelectedPosition;

- (void)dealloc;
- (void)setSelectedTextRange:(id)arg1;
- (void)showSelectionCommands;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)endFloatingCursor;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateGestureRecognizers;
- (void)updateSelectionRects;
- (id)initWithInputDelegate:(id)arg1;
- (void)textDidChange;
- (void)selectionDidChange;
- (void)scrollSelectionToVisible;
- (void)beginSelection;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)beginSelectionChange;
- (void)endSelectionChange;
- (void)resetCursorPosition;
- (void)willBeginFloatingCursor:(_Bool)arg1;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3;
- (void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2;
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;
- (struct CGRect)selectedRectInLineWithPoint:(struct CGPoint)arg1;
- (void)switchToRangedSelection;
- (void)willHandoffLoupeMagnifier;
- (void)willBeginHighlighterGesture;
- (void)beginLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endLoupeMagnifierAtPoint:(struct CGPoint)arg1;
- (void)beginRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)updateRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (void)endRangedMagnifierAtPoint:(struct CGPoint)arg1;
- (_Bool)beginLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)updateLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)endLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (struct CGPoint)boundedDeltaForTranslation:(struct CGPoint)arg1 cursorLocationBase:(struct CGPoint)arg2;
- (void)restartSelection;
- (void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(struct CGPoint)arg3 executionContext:(id)arg4;
- (void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;
- (void)endSelection;

@end
