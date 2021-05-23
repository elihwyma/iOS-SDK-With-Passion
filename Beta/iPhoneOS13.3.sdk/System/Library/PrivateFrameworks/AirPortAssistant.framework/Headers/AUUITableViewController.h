/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <UIKit/UITableViewController.h>

@class TableViewManager, UITableView;

@protocol TableViewManagerDelegate;

@interface AUUITableViewController : UITableViewController

{
    TableViewManager *_tableManager;
}

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) TableViewManager *tableManager;
@property (nonatomic) id <TableViewManagerDelegate> delegate;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initAUUITableViewControllerCommon;

@end
