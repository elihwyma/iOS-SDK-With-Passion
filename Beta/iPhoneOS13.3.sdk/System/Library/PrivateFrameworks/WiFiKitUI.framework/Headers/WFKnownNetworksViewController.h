/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSMutableArray;

@protocol WFKnownNetworksViewControllerDelegate;

@interface WFKnownNetworksViewController : UITableViewController

{
    id <WFKnownNetworksViewControllerDelegate> _knownNetworksDelegate;
    NSMutableArray *_knownNetworksArray;
}

@property (retain, nonatomic) NSMutableArray *knownNetworksArray;
@property (weak, nonatomic) id <WFKnownNetworksViewControllerDelegate> knownNetworksDelegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;

@end
