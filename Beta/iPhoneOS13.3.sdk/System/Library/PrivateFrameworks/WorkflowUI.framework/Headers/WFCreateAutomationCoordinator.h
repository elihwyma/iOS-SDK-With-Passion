/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UINavigationController, WFConfiguredTriggerRecord, WFDatabase, WFHomeManager, WFTriggerManager, WFWorkflow;

@protocol WFCreateAutomationCoordinatorDelegate;

@interface WFCreateAutomationCoordinator : NSObject

{
    UINavigationController *_navigationController;
    id <WFCreateAutomationCoordinatorDelegate> _delegate;
    WFTriggerManager *_triggerManager;
    NSString *_triggerID;
    WFDatabase *_database;
    WFConfiguredTriggerRecord *_triggerRecord;
    WFWorkflow *_workflow;
    WFHomeManager *_homeManager;
}

@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSString *triggerID;
@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFConfiguredTriggerRecord *triggerRecord;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (nonatomic, readonly) WFHomeManager *homeManager;
@property (weak, nonatomic) id <WFCreateAutomationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)finish;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)triggerComposeViewController:(id)arg1 didFinishWithWorkflow:(id)arg2;
- (void)triggerConfigurationViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)selectTypeViewController:(id)arg1 didChooseTriggerClass:(Class)arg2;
- (void)automationTypeChooser:(id)arg1 didChooseAutomationType:(unsigned long long)arg2;
- (id)initWithDatabase:(id)arg1 homeManager:(id)arg2;
- (void)startAtStep:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildViewControllerForAutomationTypeChooserStepWithCompletion:(CDUnknownBlockType)arg1;
- (void)buildViewControllerForPersonalTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)buildViewControllerForHomeTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openHomeApp;

@end
