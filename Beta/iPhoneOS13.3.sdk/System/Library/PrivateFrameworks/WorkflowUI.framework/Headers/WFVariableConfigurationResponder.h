/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIResponder.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UITextInputPasswordRules, UIView, WFVariable, WFVariableConfigurationAccessoryView, WFVariableConfigurationView;

@protocol WFVariableConfigurationResponderDelegate;

@interface WFVariableConfigurationResponder : UIResponder <Swift>

{
    _Bool _showsAccessoryActions;
    UIView *_nextResponder;
    id <WFVariableConfigurationResponderDelegate> _delegate;
    unsigned long long _exitAccessory;
    WFVariable *_variable;
    WFVariableConfigurationAccessoryView *_accessoryView;
    WFVariableConfigurationView *_configurationView;
}

@property (nonatomic, readonly) WFVariableConfigurationAccessoryView *accessoryView;
@property (nonatomic, readonly) WFVariableConfigurationView *configurationView;
@property (weak, nonatomic) UIView *nextResponder;
@property (weak, nonatomic) id <WFVariableConfigurationResponderDelegate> delegate;
@property (nonatomic) _Bool showsAccessoryActions;
@property (nonatomic) unsigned long long exitAccessory;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic, readonly) WFVariable *variable;
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

+ (_Bool)shouldShowConfigurationOnInsertionOfVariable:(id)arg1;

- (void)dealloc;
- (id)initWithVariable:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (id)inputAccessoryView;
- (id)inputView;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)variableDidChange:(id)arg1;
- (void)updateAccessoryView;
- (void)configurationViewController:(id)arg1 didUpdateVariable:(id)arg2;
- (void)configurationViewController:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(CDUnknownBlockType)arg4 commitHandler:(CDUnknownBlockType)arg5;
- (void)accessoryViewDidDismiss:(id)arg1;
- (void)accessoryViewDidDelete:(id)arg1;
- (void)accessoryViewDidRename:(id)arg1;
- (void)accessoryViewDidRevealAction:(id)arg1;
- (void)accessoryViewDidReturnToKeyboard:(id)arg1;

@end
