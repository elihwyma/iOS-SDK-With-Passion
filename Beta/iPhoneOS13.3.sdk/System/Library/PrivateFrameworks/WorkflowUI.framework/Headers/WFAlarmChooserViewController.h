/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class MTAlarmDataSource, NSMutableOrderedSet, NSString, UITableView;

@protocol WFAlarmChooserViewControllerDelegate;

@interface WFAlarmChooserViewController : UIViewController

{
    id <WFAlarmChooserViewControllerDelegate> _delegate;
    UITableView *_tableView;
    MTAlarmDataSource *_alarmDataSource;
    NSMutableOrderedSet *_checkedAlarmIDs;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) MTAlarmDataSource *alarmDataSource;
@property (nonatomic, readonly) NSMutableOrderedSet *checkedAlarmIDs;
@property (weak, nonatomic) id <WFAlarmChooserViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finish:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isModalInPresentation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancel:(id)arg1;
- (void)dataSourceDidReload:(id)arg1;
- (id)initWithAlarmDataSource:(id)arg1 checkedAlarmIDs:(id)arg2;
- (void)checkForValidCheckedAlarmIDs;
- (void)updateDoneButtonEnabled;

@end
