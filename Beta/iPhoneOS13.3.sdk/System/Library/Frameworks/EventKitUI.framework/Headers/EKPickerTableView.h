/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class UIDatePicker, UITableView;

@protocol EKPickerTableViewDelegate;

__attribute__((visibility("hidden")))
@interface EKPickerTableView : UIView

{
    UIDatePicker *_datePicker;
    UITableView *_tableView;
    _Bool _showsDatePicker;
    _Bool _usesKeyboard;
    id <EKPickerTableViewDelegate> _delegate;
}

@property (nonatomic, readonly) UIDatePicker *datePicker;
@property (nonatomic, readonly) UITableView *tableView;
@property (weak, nonatomic) id <EKPickerTableViewDelegate> delegate;
@property (nonatomic) _Bool showsDatePicker;
@property (nonatomic) _Bool usesKeyboard;
@property (nonatomic) _Bool usesBlackDatePicker;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)inputView;
- (_Bool)canBecomeFirstResponder;
- (void)_datePickerDoubleTapped:(id)arg1;
- (double)_heightForDatePicker;
- (id)initWithFrame:(struct CGRect)arg1 tableViewController:(id)arg2;
- (struct CGRect)_frameForDatePicker;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (void)setShowsDatePicker:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTableContentInset;
- (double)heightWithDatePickerAndTableHeight:(double)arg1;

@end
