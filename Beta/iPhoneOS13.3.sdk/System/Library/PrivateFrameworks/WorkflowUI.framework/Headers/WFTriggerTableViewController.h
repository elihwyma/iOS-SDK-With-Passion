/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@protocol WFTriggerTableViewControllerDelegate;

@interface WFTriggerTableViewController : UITableViewController

{
    _Bool _anyOptionSelected;
    id <WFTriggerTableViewControllerDelegate> _delegate;
    NSArray *_sections;
    NSArray *_options;
    NSString *_nameOfAnyOption;
    NSString *_mainSectionTitle;
}

@property (nonatomic, readonly) NSArray *sections;
@property (retain, nonatomic) NSArray *options;
@property (nonatomic) _Bool anyOptionSelected;
@property (copy, nonatomic, readonly) NSString *nameOfAnyOption;
@property (copy, nonatomic, readonly) NSString *mainSectionTitle;
@property (weak, nonatomic) id <WFTriggerTableViewControllerDelegate> delegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithOptions:(id)arg1 anySelected:(_Bool)arg2 nameOfAnyOption:(id)arg3 mainSectionTitle:(id)arg4;
- (void)updateDoneButtonEnabledState;

@end
