/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class UIDatePicker;

__attribute__((visibility("hidden")))
@interface CNDatePickerContainerView : UIView

{
    UIDatePicker *_datePicker;
}

@property (nonatomic, readonly) UIDatePicker *datePicker;

- (id)initWithDatePicker:(id)arg1;

@end
