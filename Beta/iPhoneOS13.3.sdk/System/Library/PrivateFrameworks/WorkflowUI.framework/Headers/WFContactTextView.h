/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFPlaceholderTextView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSAttributedString, NSDictionary, NSSet, NSString, UIColor, UIFont, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, WFVariableInputCoordinator;

@protocol UITextInputDelegate, UITextInputTokenizer, WFVariableProvider, WFVariableUIDelegate;

@interface WFContactTextView : WFPlaceholderTextView <Swift>

{
    _Bool _variablesDisabled;
    _Bool _allowsTextEntry;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    CDUnknownBlockType _variableBlock;
    unsigned long long _syntaxHighlightingType;
    NSSet *_supportedPersonProperties;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (copy, nonatomic) CDUnknownBlockType variableBlock;
@property (nonatomic) _Bool allowsTextEntry;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
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
@property (nonatomic) _Bool variablesDisabled;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned long long syntaxHighlightingType;

- (void)dealloc;
- (_Bool)becomeFirstResponder;
- (void)tintColorDidChange;
- (_Bool)resignFirstResponder;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)updateTextContainerInsets;
- (id)attributesByAddingTintColorToAttributes:(id)arg1;
- (void)updateTextAttachments;
- (id)attributesForPasting;
- (void)pasteAttributedString:(id)arg1;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;

@end
