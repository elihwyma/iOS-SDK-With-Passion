/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFCustomTableItem.h>

@class NSString, UITextField;

@interface WFTextFieldTableItem : WFCustomTableItem

{
    _Bool _becomeFirstResponderOnNextConfigure;
    NSString *_primaryText;
    CDUnknownBlockType _textFieldSetup;
    UITextField *_lastConfiguredTextField;
}

@property (nonatomic, readonly) CDUnknownBlockType textFieldSetup;
@property (weak, nonatomic) UITextField *lastConfiguredTextField;
@property (nonatomic) _Bool becomeFirstResponderOnNextConfigure;
@property (nonatomic, readonly) NSString *primaryText;

+ (id)itemWithPrimaryText:(id)arg1 initialValue:(id)arg2 textFieldSetup:(CDUnknownBlockType)arg3;

- (void)activate;
- (void)textFieldTextDidChange:(id)arg1;
- (void)configureCell:(id)arg1;
- (void)activateNextItemIfPossible;

@end
