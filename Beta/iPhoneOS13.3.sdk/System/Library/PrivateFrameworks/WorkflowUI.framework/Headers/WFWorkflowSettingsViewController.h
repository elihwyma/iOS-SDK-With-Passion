/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UINavigationController, WFAddToHomeScreenActivity, WFDatabase, WFWorkflow, WFWorkflowSettingsLayoutMetrics, WFWorkflowSettingsViewDataSource;

@protocol WFWorkflowSettingsViewControllerDelegate;

@interface WFWorkflowSettingsViewController : UITableViewController <Swift>

{
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    id <WFWorkflowSettingsViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFDatabase *_database;
    WFAddToHomeScreenActivity *_homeScreenActivity;
    UINavigationController *_cardPresentationNavigationController;
    WFWorkflowSettingsViewDataSource *_dataSource;
}

@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFAddToHomeScreenActivity *homeScreenActivity;
@property (nonatomic, readonly) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (retain, nonatomic) UINavigationController *cardPresentationNavigationController;
@property (retain, nonatomic) WFWorkflowSettingsViewDataSource *dataSource;
@property (weak, nonatomic) id <WFWorkflowSettingsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)done;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)contentSizeCategoryDidChange;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)arg1;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;
- (void)footerLinkView:(id)arg1 didTapURL:(id)arg2;
- (void)toggledActionExtensionSwitch:(id)arg1;
- (void)toggledWidgetSwitch:(id)arg1;
- (void)galleryImportViewControllerDidCancel:(id)arg1;
- (void)galleryImportViewController:(id)arg1 didFinishWithWorkflow:(id)arg2;
- (void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2;
- (void)homeScreenActivityDidFinish:(id)arg1 success:(_Bool)arg2;
- (void)invalidateLayoutMetrics;
- (_Bool)showInputTypeSelection;
- (void)toggleWorkflowType:(id)arg1 sender:(id)arg2;
- (void)didSelectSettingsSectionHelpAtRow:(long long)arg1;
- (void)didSelectSettingsSectionShowInAtRow:(long long)arg1;
- (void)didSelectSettingsSectionButtonsAtRow:(long long)arg1;
- (void)didSelectSettingsSectionImportQuestionsAtRow:(long long)arg1;
- (void)dismissIconViewController;

@end
