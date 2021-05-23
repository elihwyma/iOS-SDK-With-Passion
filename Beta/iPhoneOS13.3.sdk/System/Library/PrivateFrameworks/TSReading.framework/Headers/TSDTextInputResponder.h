/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIResponder.h>

#import <TSReading/Swift-Protocol.h>

@class NSDictionary, NSObject, NSString, TSDTextInputTokenizer, TSDTextPosition, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;

@protocol TSDTextInput, UITextInputDelegate, UITextInputTokenizer;

@interface TSDTextInputResponder : UIResponder <Swift>

{
    NSObject<TSDTextInput> *_editor;
    TSDTextInputTokenizer *_tokenizer;
    _Bool _isResigning;
    int _respondingToUITextInput;
    _Bool _isSettingSelectedTextRange;
    float _preferredStartPosition;
    float _preferredEndPosition;
    TSDTextPosition *_referencePosition;
    long long _referenceOffset;
    TSDTextPosition *_cachedPosition;
    _Bool _pendingEditorChange;
    NSObject<TSDTextInput> *_pendingEditor;
    _Bool _pendingFirstResponderChange;
    id <TSDTextInput> _pendingFirstResponderObject;
    _Bool _inDynamicOperation;
    UIResponder *_nextResponder;
    id <UITextInputDelegate> _inputDelegate;
    _Bool _editorRespondsToRawArrowKeySelectors;
    int _ignoreKeyboardInputCount;
}

@property (retain, nonatomic) id <TSDTextInput> editor;
@property (nonatomic, readonly, getter=isResigning) _Bool resigning;
@property (nonatomic) float preferredStartPosition;
@property (nonatomic) float preferredEndPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) _Bool hasText;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (weak, nonatomic) id <UITextInputDelegate> inputDelegate;
@property (nonatomic, readonly) id <UITextInputTokenizer> tokenizer;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)teardown;
- (id)superview;
- (id)nextResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (id)inputAccessoryView;
- (id)inputView;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (_Bool)canResignFirstResponder;
- (_Bool)_disableAutomaticKeyboardUI;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (void)unmarkText;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)insertText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)keyCommands;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (struct CGRect)firstRectForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)insertDictationResult:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)acceptAutocorrection;
- (void)deleteForward;
- (void)editorDidChangeSelection:(id)arg1;
- (void)p_willShowPopoverNotification:(id)arg1;
- (void)forceDelayedResponderChange;
- (id)initWithNextResponder:(id)arg1;
- (void)clearEditorAndResignFirstResponder;
- (void)customAction6:(id)arg1;
- (void)customAction7:(id)arg1;
- (void)customAction8:(id)arg1;
- (void)cancelDelayedResponderChange;
- (void)canvasWillScroll;
- (void)canvasWillZoom;
- (void)editorDidChangeSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)resumeEditing;
- (void)p_editorSelectionWasForciblyChangedNotification:(id)arg1;
- (void)p_editorWillClearSelectionNotification:(id)arg1;
- (void)p_editorWillStyleTextNotification:(id)arg1;
- (void)p_editorWillHandleTapNotification:(id)arg1;
- (void)p_editorDidInsertTextNotification:(id)arg1;
- (void)p_willUndoChangeNotification:(id)arg1;
- (void)p_didUndoRedoChangeNotification:(id)arg1;
- (void)p_startDynamicOperation:(id)arg1;
- (void)p_finishDynamicOperation:(id)arg1;
- (_Bool)p_isExecutingUITextInput;
- (void)p_textChanged;
- (void)p_setFirstResponder:(id)arg1;
- (_Bool)p_requiresFirstResponderChangeForEditor:(id)arg1;
- (id)p_ICC;
- (_Bool)p_resignFirstResponder;
- (void)p_setEditor:(id)arg1;
- (void)p_setFirstResponderAndEditor:(id)arg1;
- (void)p_setFirstResponderAndEditorAfterDelay;
- (void)p_setFirstResponderAfterDelay;
- (id)editingTextReps;
- (_Bool)p_wantRawArrowKeys;
- (_Bool)p_didEnterUITextInput;
- (void)p_setSelectedTextRange:(id)arg1;
- (void)p_willExitUITextInput;
- (void)p_unmarkText;
- (_Bool)p_currentEditorIsNotOnMyCanvas;
- (void)beginIgnoringKeyboardInput;
- (void)endIgnoringKeyboardInput;
- (id)editingTextRep;
- (void)canvasWillRotate;
- (id)rectsForRange:(id)arg1;

@end
