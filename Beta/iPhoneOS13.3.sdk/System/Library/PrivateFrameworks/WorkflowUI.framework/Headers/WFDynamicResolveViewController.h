/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, WFDebouncer, WFDynamicResolveParameter;

@protocol WFDynamicResolveViewControllerDelegate;

@interface WFDynamicResolveViewController : UITableViewController

{
    WFDynamicResolveParameter *_parameter;
    id <WFDynamicResolveViewControllerDelegate> _delegate;
    NSArray *_results;
    WFDebouncer *_inputDebouncer;
}

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) WFDebouncer *inputDebouncer;
@property (nonatomic, readonly) WFDynamicResolveParameter *parameter;
@property (weak, nonatomic) id <WFDynamicResolveViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)failWithError:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelButtonPressed:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)initWithParameter:(id)arg1 delegate:(id)arg2;
- (void)updateSearchResultsFromCurrentUserInput;
- (void)succeedWithResolvedObject:(id)arg1;

@end
