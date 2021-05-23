/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSDictionary;

@interface WFKnownNetworkScoreViewController : UITableViewController

{
    NSDictionary *_score;
}

@property (retain, nonatomic) NSDictionary *score;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end
