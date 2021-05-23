/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSSet, NSString, WFTextTokenTextField;

@protocol WFVariableProvider, WFVariableUIDelegate;

@interface WFNumberField : UIView

{
    _Bool _allowsDecimalNumbers;
    _Bool _allowsNegatingNumbers;
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    WFTextTokenTextField *_textField;
}

@property (weak, nonatomic) WFTextTokenTextField *textField;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long textAlignment;
@property (nonatomic) _Bool allowsDecimalNumbers;
@property (nonatomic) _Bool allowsNegatingNumbers;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (copy, nonatomic) CDUnknownBlockType doneBlock;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType variableBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (void)textDidChange;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)negateText;

@end
