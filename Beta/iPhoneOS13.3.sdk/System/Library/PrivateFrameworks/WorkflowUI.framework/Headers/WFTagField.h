/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSSet, NSString, UIButton, WFTagTextView, WFTextScrollView;

@protocol WFTagFieldDelegate, WFTagFieldSuggestionsProvider, WFVariableProvider, WFVariableUIDelegate;

@interface WFTagField : UIView <Swift>

{
    _Bool _allowsTextEntry;
    _Bool _editable;
    NSString *_tags;
    NSString *_fieldTitle;
    id <WFTagFieldDelegate> _delegate;
    id <WFTagFieldSuggestionsProvider> _suggestionsProvider;
    long long _autocorrectionType;
    long long _autocapitalizationType;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    WFTagTextView *_textView;
    WFTextScrollView *_scrollView;
    UIButton *_plusButton;
    struct _NSRange _selectedRange;
}

@property (weak, nonatomic) WFTagTextView *textView;
@property (weak, nonatomic) WFTextScrollView *scrollView;
@property (weak, nonatomic) UIButton *plusButton;
@property (nonatomic) struct _NSRange selectedRange;
@property (copy, nonatomic) NSString *tags;
@property (copy, nonatomic) NSString *fieldTitle;
@property (weak, nonatomic) id <WFTagFieldDelegate> delegate;
@property (weak, nonatomic) id <WFTagFieldSuggestionsProvider> suggestionsProvider;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) _Bool allowsTextEntry;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) _Bool variablesDisabled;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType variableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)containingViewController;
- (void)updateEditableState;
- (void)tagPicker:(id)arg1 didSelectTags:(id)arg2;
- (void)tagPickerDidCancel:(id)arg1;
- (_Bool)tokenizeFreeTextFromRange:(struct _NSRange)arg1;
- (void)selectTag;
- (void)insertTag:(id)arg1;
- (void)updateTags;

@end
