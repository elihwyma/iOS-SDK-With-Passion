/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIPickerView;

__attribute__((visibility("hidden")))
@interface _UIPickerViewSelectionBar : UIView

{
    UIPickerView *_pickerView;
}

@property (weak, nonatomic) UIPickerView *pickerView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
