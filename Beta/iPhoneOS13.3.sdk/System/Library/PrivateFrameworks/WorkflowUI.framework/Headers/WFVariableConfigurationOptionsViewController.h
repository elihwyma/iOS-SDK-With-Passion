/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, WFVariableConfigurationOption;

@protocol WFVariableConfigurationOptionsViewControllerDelegate;

@interface WFVariableConfigurationOptionsViewController : UITableViewController

{
    id <WFVariableConfigurationOptionsViewControllerDelegate> _delegate;
    NSString *_userIdentifier;
    NSArray *_options;
    WFVariableConfigurationOption *_defaultOption;
    long long _selectedOptionIndex;
}

@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) WFVariableConfigurationOption *defaultOption;
@property (nonatomic) long long selectedOptionIndex;
@property (weak, nonatomic) id <WFVariableConfigurationOptionsViewControllerDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *userIdentifier;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)initWithTitle:(id)arg1 userIdentifier:(id)arg2 options:(id)arg3 defaultOption:(id)arg4 selectedOption:(id)arg5;

@end
