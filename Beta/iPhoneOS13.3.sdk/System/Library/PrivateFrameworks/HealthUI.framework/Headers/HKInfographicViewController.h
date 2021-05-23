/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;

@interface HKInfographicViewController : UIViewController

{
    UITableView *_tableView;
    NSArray *_items;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithItems:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithTextItems:(id)arg1;

@end
