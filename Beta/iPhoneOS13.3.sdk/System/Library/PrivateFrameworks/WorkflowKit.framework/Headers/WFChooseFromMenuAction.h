/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFControlFlowAction.h>

@class NSString, WFVariableString;

@interface WFChooseFromMenuAction : WFControlFlowAction

{
    long long _latestMenuChoice;
    WFVariableString *_itemTitle;
}

@property (copy, nonatomic) WFVariableString *itemTitle;
@property (nonatomic, readonly) long long latestMenuChoice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (id)localizedName;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)inputRequired;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)serializedParameters;
- (id)createAccompanyingActions;
- (id)inputSourceInWorkflow:(id)arg1;
- (id)defaultOutputName;
- (_Bool)inputPassthrough;
- (void)variableDidChange:(id)arg1;
- (void)arrayParameter:(id)arg1 itemWasAppended:(id)arg2;
- (void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3;
- (void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)newIntermediaryActionWithMenuItemTitle:(id)arg1;
- (void)showNotificationWithInput:(id)arg1;
- (void)showAlertWithInput:(id)arg1;
- (id)intermediaryActions;
- (unsigned long long)numberOfActionsIncludedWithAction:(id)arg1;

@end
