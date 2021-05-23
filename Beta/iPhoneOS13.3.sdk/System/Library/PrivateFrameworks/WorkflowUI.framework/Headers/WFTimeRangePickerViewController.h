/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSDate;

@protocol WFTimeRangePickerViewControllerDelegate;

@interface WFTimeRangePickerViewController : UITableViewController

{
    id <WFTimeRangePickerViewControllerDelegate> _delegate;
    NSDate *_startTime;
    NSDate *_endTime;
    NSArray *_sections;
}

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic, readonly) NSArray *sections;
@property (weak, nonatomic) id <WFTimeRangePickerViewControllerDelegate> delegate;

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)done:(id)arg1;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (void)cancel:(id)arg1;
- (void)startTimeChanged:(id)arg1;
- (void)endTimeChanged:(id)arg1;

@end
