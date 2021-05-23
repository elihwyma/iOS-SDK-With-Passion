/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIInputView.h>

@class UIButton;

@protocol WFVariableConfigurationAccessoryViewDelegate;

@interface WFVariableConfigurationAccessoryView : UIInputView

{
    id <WFVariableConfigurationAccessoryViewDelegate> _delegate;
    unsigned long long _exitAccessory;
    UIButton *_keyboardButton;
    UIButton *_clearButton;
    UIButton *_renameButton;
    UIButton *_revealActionButton;
    UIButton *_doneButton;
}

@property (weak, nonatomic) UIButton *keyboardButton;
@property (weak, nonatomic) UIButton *clearButton;
@property (weak, nonatomic) UIButton *renameButton;
@property (weak, nonatomic) UIButton *revealActionButton;
@property (weak, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) id <WFVariableConfigurationAccessoryViewDelegate> delegate;
@property (nonatomic) _Bool canRename;
@property (nonatomic) _Bool canRevealAction;
@property (nonatomic) unsigned long long exitAccessory;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)donePressed;
- (void)clearPressed;
- (void)returnToKeyboardPressed;
- (void)renamePressed;
- (void)revealActionPressed;

@end
