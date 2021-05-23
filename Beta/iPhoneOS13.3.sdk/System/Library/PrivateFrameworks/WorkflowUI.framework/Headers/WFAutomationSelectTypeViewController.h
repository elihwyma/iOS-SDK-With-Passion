/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, WFTriggerManager;

@protocol WFAutomationSelectTypeViewControllerDelegate;

@interface WFAutomationSelectTypeViewController : UITableViewController

{
    id <WFAutomationSelectTypeViewControllerDelegate> _delegate;
    WFTriggerManager *_triggerManager;
    NSArray *_tableContent;
}

@property (nonatomic, readonly) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) NSArray *tableContent;
@property (weak, nonatomic) id <WFAutomationSelectTypeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildTableContent;
+ (id)sortedTriggerGroupIdentifiers;
+ (id)triggerGroupTitleForIdentifier:(id)arg1;
+ (id)allTriggersByGroupIdentifier;
+ (id)allKnownTriggersSortedAsInUI;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithTriggerManager:(id)arg1;
- (Class)triggerSourceClassForIndexPath:(id)arg1;

@end
