/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFPlaceholderTextView.h>

@class NSArray, NSAttributedString, NSDictionary, NSSet, NSString, UIColor, UIFont, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, WFTextAttachmentInteraction, WFVariableConfigurationResponder, WFVariableInputCoordinator, WFVariableString;

@protocol UITextInputDelegate, UITextInputTokenizer, WFVariableProvider, WFVariableUIDelegate;

@interface WFTextTokenTextView : WFPlaceholderTextView

{
    _Bool _variablesDisabled;
    _Bool _rejectBecomingFirstResponder;
    WFVariableString *_variableString;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    unsigned long long syntaxHighlightingType;
    unsigned long long _variableResultType;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _revealBlock;
    WFVariableInputCoordinator *_variableCoordinator;
    WFVariableConfigurationResponder *_variableResponder;
    WFTextAttachmentInteraction *_attachmentInteraction;
}

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder;
@property (retain, nonatomic) WFTextAttachmentInteraction *attachmentInteraction;
@property (nonatomic) _Bool rejectBecomingFirstResponder;
@property (nonatomic) unsigned long long variableResultType;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType revealBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *currentVariables;
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
@property (copy, nonatomic) WFVariableString *variableString;
@property (nonatomic) struct _NSRange selectedRange;

+ (_Bool)doneButtonNeededForInputTraits:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (void)tintColorDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;
- (void)variableDidChange:(id)arg1;
- (void)textAttachmentInteraction:(id)arg1 didTapTextAttachment:(id)arg2 inCharacterRange:(struct _NSRange)arg3;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;
- (void)variableResponderDidBeginEditing:(id)arg1;
- (void)variableResponderWillEndEditing:(id)arg1;
- (void)variableResponderDidEndEditing:(id)arg1;
- (void)variableResponderDidReturnToKeyboard:(id)arg1;
- (_Bool)variableResponderHasText:(id)arg1;
- (void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;
- (void)variableResponderDidRevealAction:(id)arg1;
- (void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;
- (void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(CDUnknownBlockType)arg4 commitHandler:(CDUnknownBlockType)arg5;
- (void)insertVariable:(id)arg1;
- (void)beginEditingWithContext:(id)arg1;
- (void)updateVariableBlock;
- (void)textUpdated;
- (void)defaultCut:(id)arg1;
- (void)defaultCopy:(id)arg1;
- (void)defaultPaste:(id)arg1;
- (void)_updateVariableString:(id)arg1;
- (void)configureAppearanceOfVariableAttachment:(id)arg1;
- (void)updateAppearanceOfAllVariableAttachments;
- (void)beginConfiguringVariable:(id)arg1;
- (void)enumerateVariablesUsingBlock:(CDUnknownBlockType)arg1;

@end
