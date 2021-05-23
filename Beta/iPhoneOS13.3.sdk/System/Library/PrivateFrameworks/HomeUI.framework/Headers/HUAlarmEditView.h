/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIDatePicker, UITableView;

@interface HUAlarmEditView : UIView

{
    UITableView *_settingsTable;
    UIDatePicker *_timePicker;
}

@property (nonatomic, readonly) UITableView *settingsTable;
@property (nonatomic, readonly) UIDatePicker *timePicker;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
