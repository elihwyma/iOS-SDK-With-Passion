/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITextView.h>

@class NSDictionary, NSString, UIFont, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;

@protocol UITextInputDelegate, UITextInputTokenizer, WFSlotTemplateTypingTextViewDelegate;

@interface WFSlotTemplateTypingTextView : UITextView

{
    _Bool _clearsZeroWhenTyping;
    UIView *_inputHintView;
    UIFont *_emojiOverrideFont;
}

@property (weak, nonatomic) id <WFSlotTemplateTypingTextViewDelegate> delegate;
@property (retain, nonatomic) UIFont *emojiOverrideFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
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
@property (nonatomic) _Bool clearsZeroWhenTyping;
@property (nonatomic, readonly) UIFont *font;
@property (retain, nonatomic) UIView *inputHintView;

- (struct CGRect)accessibilityFrame;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)wf_applyEmojiOverrideFont;

@end
