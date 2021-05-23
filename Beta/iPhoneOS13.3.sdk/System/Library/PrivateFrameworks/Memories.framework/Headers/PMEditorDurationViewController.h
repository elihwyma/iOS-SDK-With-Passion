/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSString, PMDurationProvider, UILabel, UIPickerView, UITableView;

@interface PMEditorDurationViewController : UIViewController

{
    PMDurationProvider *_durationProvider;
    UITableView *_tableView;
    UIPickerView *_durationPicker;
    UILabel *_minutesLabel;
    UILabel *_secondsLabel;
}

@property (retain, nonatomic) UIPickerView *durationPicker;
@property (retain, nonatomic) UILabel *minutesLabel;
@property (retain, nonatomic) UILabel *secondsLabel;
@property (nonatomic, readonly) unsigned long long minimumDuration;
@property (nonatomic, readonly) unsigned long long maximumDuration;
@property (retain, nonatomic) PMDurationProvider *durationProvider;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)refreshPickerSelectionTime;
- (long long)secondsComponentOffset;
- (_Bool)isValidSelectionForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)pickerView:(id)arg1 voiceOverStringForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)createDurationPickerView;

@end
