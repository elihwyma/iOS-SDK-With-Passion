/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIInputView.h>

@class NSArray, NSString, UIImageView, WFVariablesViewController;

@protocol WFVariableProvider, WFVariableShortcutsTrayDelegate;

@interface WFVariableShortcutsTray : UIInputView

{
    id <WFVariableShortcutsTrayDelegate> _delegate;
    WFVariablesViewController *_variablesViewController;
    WFVariablesViewController *_specialVariablesViewController;
    UIImageView *_keyboardImageView;
}

@property (retain, nonatomic) WFVariablesViewController *variablesViewController;
@property (retain, nonatomic) WFVariablesViewController *specialVariablesViewController;
@property (retain, nonatomic) UIImageView *keyboardImageView;
@property (weak, nonatomic) id <WFVariableShortcutsTrayDelegate> delegate;
@property (weak, nonatomic) id <WFVariableProvider> variableProvider;
@property (nonatomic) _Bool showsUserDefinedVariables;
@property (nonatomic) _Bool showsMagicVariableButton;
@property (copy, nonatomic) NSArray *userDefinedVariableNames;
@property (copy, nonatomic) NSArray *specialVariables;
@property (copy, nonatomic) NSArray *suggestedVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)keyboardWindow;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (void)reveal;
- (void)variablesViewController:(id)arg1 didSelectVariable:(id)arg2;
- (void)variablesViewControllerDidSelectMagicVariable:(id)arg1;
- (void)prepareReveal;
- (void)obsureWithCompletion:(CDUnknownBlockType)arg1;

@end
