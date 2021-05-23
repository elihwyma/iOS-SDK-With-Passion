/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class NSString, WFVariable, WFVariableConfigurationResponder;

@interface WFVariableConfigurationButton : UIButton

{
    _Bool _showsVariableAccessoryActions;
    WFVariable *_variable;
    CDUnknownBlockType _revealBlock;
    unsigned long long _resultType;
    WFVariableConfigurationResponder *_variableResponder;
}

@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder;
@property (retain, nonatomic) WFVariable *variable;
@property (copy, nonatomic) CDUnknownBlockType revealBlock;
@property (nonatomic) _Bool showsVariableAccessoryActions;
@property (nonatomic) unsigned long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)titleFont;
+ (struct CGSize)sizeForVariable:(id)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)variableDidChange:(id)arg1;
- (void)variableResponderDidBeginEditing:(id)arg1;
- (void)variableResponderDidEndEditing:(id)arg1;
- (_Bool)variableResponderHasText:(id)arg1;
- (void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;
- (void)variableResponderDidRevealAction:(id)arg1;
- (void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;
- (void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(CDUnknownBlockType)arg4 commitHandler:(CDUnknownBlockType)arg5;
- (void)buttonTapped;
- (void)updateVariableImage;
- (void)showVariableConfiguration;
- (void)hideVariableConfiguration;

@end
