/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSSet, NSString, UIButton, WFContactPickerCoordinator, WFContactTextView, WFTextScrollView;

@protocol WFContactFieldDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFContactField : UIView <Swift>

{
    _Bool _allowsTextEntry;
    _Bool _editable;
    _Bool _shouldEndEditing;
    id <WFContactFieldDelegate> _delegate;
    NSArray *_entries;
    long long _autocorrectionType;
    long long _autocapitalizationType;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    WFContactTextView *_textView;
    WFTextScrollView *_scrollView;
    UIButton *_plusButton;
    WFContactPickerCoordinator *_contactPicker;
    struct _NSRange _selectedRange;
}

@property (weak, nonatomic) WFContactTextView *textView;
@property (weak, nonatomic) WFTextScrollView *scrollView;
@property (weak, nonatomic) UIButton *plusButton;
@property (nonatomic) struct _NSRange selectedRange;
@property (nonatomic) _Bool shouldEndEditing;
@property (retain, nonatomic) WFContactPickerCoordinator *contactPicker;
@property (weak, nonatomic) id <WFContactFieldDelegate> delegate;
@property (copy, nonatomic) NSArray *entries;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) _Bool allowsTextEntry;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
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

- (id)typingAttributes;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)selectContact;
- (id)containingViewController;
- (void)updateEditableState;
- (void)updateContactsFromTextField:(_Bool)arg1;
- (void)showContactPicker;
- (void)insertContact:(id)arg1;
- (long long)tokenizeFreeTextFromRange:(struct _NSRange)arg1 freeTextModificationBlock:(CDUnknownBlockType *)arg2;
- (void)deleteFreeText:(id)arg1 replacementRange:(struct _NSRange)arg2 newValue:(id)arg3;
- (void)tokenizeFreeText:(id)arg1 replacementRange:(struct _NSRange)arg2 newValue:(id)arg3;
- (void)presentContactSelectionActionSheetForText:(id)arg1 attributedText:(id)arg2 replacementRange:(struct _NSRange)arg3;
- (void)chooseMultivalueIndexIfNecessaryForContact:(id)arg1 sender:(id)arg2;
- (_Bool)text:(id)arg1 containsMatchesForProperty:(int)arg2;
- (_Bool)text:(id)arg1 containsMatchesForProperties:(id)arg2;
- (unsigned long long)numberOfValuesForProperties:(id)arg1 inContact:(id)arg2;

@end
