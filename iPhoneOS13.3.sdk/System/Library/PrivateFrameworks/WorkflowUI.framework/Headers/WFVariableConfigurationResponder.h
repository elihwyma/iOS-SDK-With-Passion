//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <WorkflowUI/WFVariableConfigurationAccessoryViewDelegate-Protocol.h>
#import <WorkflowUI/WFVariableConfigurationViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFVariableDelegate-Protocol.h>

@class UIView, WFVariable, WFVariableConfigurationAccessoryView, WFVariableConfigurationView;
@protocol WFVariableConfigurationResponderDelegate;

@interface WFVariableConfigurationResponder : UIResponder <WFVariableConfigurationAccessoryViewDelegate, WFVariableConfigurationViewControllerDelegate, WFVariableDelegate, UIKeyInput>
{
    BOOL _showsAccessoryActions;
    UIView *_nextResponder;
    id <WFVariableConfigurationResponderDelegate> _delegate;
    NSUInteger _exitAccessory;
    WFVariable *_variable;
    WFVariableConfigurationAccessoryView *_accessoryView;
    WFVariableConfigurationView *_configurationView;
}

+ (BOOL)shouldShowConfigurationOnInsertionOfVariable:(id)arg1;
@property(readonly, nonatomic) WFVariableConfigurationView *configurationView; // @synthesize configurationView=_configurationView;
@property(readonly, nonatomic) WFVariableConfigurationAccessoryView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
@property(nonatomic) NSUInteger exitAccessory; // @synthesize exitAccessory=_exitAccessory;
@property(nonatomic) BOOL showsAccessoryActions; // @synthesize showsAccessoryActions=_showsAccessoryActions;
@property(nonatomic) __weak id <WFVariableConfigurationResponderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *nextResponder; // @synthesize nextResponder=_nextResponder;
// - (void).cxx_destruct;
- (void)updateAccessoryView;
- (void)variableDidChange:(id)arg1;
- (void)configurationViewController:(id)arg1 didUpdateVariable:(id)arg2;
- (void)configurationViewController:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(id /* CDUnknownBlockType */)arg4 commitHandler:(id /* CDUnknownBlockType */)arg5;
- (void)accessoryViewDidReturnToKeyboard:(id)arg1;
- (void)accessoryViewDidDismiss:(id)arg1;
- (void)accessoryViewDidRevealAction:(id)arg1;
- (void)accessoryViewDidRename:(id)arg1;
- (void)accessoryViewDidDelete:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) BOOL hasText;
- (id)inputView;
- (id)inputAccessoryView;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
@property(nonatomic) NSUInteger resultType;
- (void)dealloc;
- (id)initWithVariable:(id)arg1;

@end

