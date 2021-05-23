/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIViewController.h>

@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController

{
    HKQuantitySeriesDataProvider *_dataProvider;
    UITableView *_tableView;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider;

- (void)loadView;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

@end
