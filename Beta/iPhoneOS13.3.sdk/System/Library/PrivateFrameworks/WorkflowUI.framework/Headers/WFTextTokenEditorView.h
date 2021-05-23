/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSSet, NSString, UIColor, UIFont, WFTextScrollView, WFTextTokenTextField, WFVariableString;

@protocol WFTextField, WFTextTokenEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFTextTokenEditorView : UIView <Swift>

{
    _Bool _switching;
    _Bool _secureTextEntry;
    _Bool _editable;
    _Bool _variablesDisabled;
    id <WFTextTokenEditorViewDelegate> _delegate;
    UIFont *_font;
    NSString *_placeholder;
    long long _keyboardType;
    long long _textAlignment;
    NSString *_textContentType;
    long long _autocorrectionType;
    long long _autocapitalizationType;
    long long _smartQuotesType;
    long long _smartDashesType;
    UIColor *_textColor;
    unsigned long long _syntaxHighlightingType;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    unsigned long long _variableResultType;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _revealBlock;
    WFTextTokenTextField *_textField;
    WFTextScrollView *_scrollView;
}

@property (retain, nonatomic) WFTextTokenTextField *textField;
@property (retain, nonatomic) WFTextScrollView *scrollView;
@property (weak, nonatomic) id <WFTextTokenEditorViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) WFVariableString *variableString;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) unsigned long long variableResultType;
@property (nonatomic) _Bool variablesDisabled;
@property (nonatomic, readonly) UIView<WFTextField> *currentField;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType revealBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)paste:(id)arg1;
- (void)textDidChange;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)currentView;
- (void)insertVariable:(id)arg1;
- (_Bool)usesTextView;
- (void)setUsesTextView:(_Bool)arg1;
- (void)removeTextChangeObserver;
- (void)selectRange:(struct _NSRange)arg1;
- (void)beginEditingWithContext:(id)arg1;

@end
