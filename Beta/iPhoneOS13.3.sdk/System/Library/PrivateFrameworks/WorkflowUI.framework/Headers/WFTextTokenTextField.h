/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITextField.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSAttributedString, NSDictionary, NSSet, NSString, UIColor, UIFont, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, WFVariableInputCoordinator;

@protocol UITextInputDelegate, UITextInputTokenizer, WFVariableInsertionFieldDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFTextTokenTextField : UITextField <Swift>

{
    _Bool _variablesDisabled;
    NSSet *_allowedVariableTypes;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    unsigned long long _syntaxHighlightingType;
    id <WFVariableInsertionFieldDelegate> _variableInsertionDelegate;
    NSString *_customButtonTitle;
    CDUnknownBlockType _variableBlock;
    CDUnknownBlockType _customButtonBlock;
    WFVariableInputCoordinator *_variableCoordinator;
    struct UIEdgeInsets _edgeInsets;
}

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (weak, nonatomic) id <WFVariableInsertionFieldDelegate> variableInsertionDelegate;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType variableBlock;
@property (copy, nonatomic) CDUnknownBlockType customButtonBlock;
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
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (void)tintColorDidChange;
- (_Bool)resignFirstResponder;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)updateAllowedVariableTypes;
- (void)updateDoneButtonPresence;
- (void)updateVariableBlock;
- (_Bool)usesNonbreakingSpaces;
- (_Bool)shouldChangeCharactersWithNonbreakingSpacesIfNecessaryInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (id)textWithRegularSpaces;
- (void)convertNonbreakingSpacesInClipboardIfNecessary;

@end
