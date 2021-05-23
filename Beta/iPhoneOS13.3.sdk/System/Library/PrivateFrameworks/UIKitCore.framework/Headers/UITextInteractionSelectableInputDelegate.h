/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIResponder.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSString, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;

@protocol UITextInput, UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface UITextInteractionSelectableInputDelegate : UIResponder <Swift>

{
    UIResponder<UITextInput> *_textInput;
}

@property (nonatomic, readonly) UIResponder<UITextInput> *textInput;
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

+ (id)selectableInputDelegateWithTextInput:(id)arg1;

- (id)nextResponder;
- (void)deleteBackward;
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
- (void)_unmarkText;
- (void)updateSelectionRects;
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)_moveCurrentSelection:(int)arg1;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)_deleteForwardAndNotify:(_Bool)arg1;

@end
