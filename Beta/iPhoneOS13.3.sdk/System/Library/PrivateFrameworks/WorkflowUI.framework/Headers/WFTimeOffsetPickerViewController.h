/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIPickerView, UITableView;

@protocol WFTimeOffsetPickerViewControllerDelegate;

@interface WFTimeOffsetPickerViewController : UIViewController

{
    id <WFTimeOffsetPickerViewControllerDelegate> _delegate;
    unsigned long long _event;
    UIPickerView *_currentPickerView;
    UITableView *_tableView;
    NSArray *_sections;
    NSArray *_pickerItems;
    unsigned long long _timeOffset;
}

@property (retain, nonatomic) UIPickerView *currentPickerView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *pickerItems;
@property (nonatomic) unsigned long long timeOffset;
@property (weak, nonatomic) id <WFTimeOffsetPickerViewControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)cancel:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithTimeTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;

@end
