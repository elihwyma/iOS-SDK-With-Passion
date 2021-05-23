/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintMoreOptionsTableViewController : UITableViewController

{
    UIPrintPanelViewController *_printPanelViewController;
    long long _stapleRow;
}

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateStaple:(id)arg1;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)showCancelButton;

@end
