/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPaperViewController : UITableViewController

{
    UIPrintPanelViewController *_printPanelViewController;
}

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)adjustPopoverSize;
- (void)updateScaleUp:(id)arg1;

@end
