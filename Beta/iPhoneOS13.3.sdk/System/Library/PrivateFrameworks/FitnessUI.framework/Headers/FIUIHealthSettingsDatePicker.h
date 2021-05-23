/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIDatePicker.h>

@interface FIUIHealthSettingsDatePicker : UIDatePicker

{
    CDUnknownBlockType _dateUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType dateUpdateHandler;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)forceUpdate;
- (void)layoutSubviews;
- (void)_dateDidChange:(id)arg1;

@end
