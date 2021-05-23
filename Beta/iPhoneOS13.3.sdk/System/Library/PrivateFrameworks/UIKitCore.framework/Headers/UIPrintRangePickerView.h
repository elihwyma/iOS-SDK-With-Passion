/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPickerView.h>

__attribute__((visibility("hidden")))
@interface UIPrintRangePickerView : UIPickerView

{
    double _shift;
}

- (void)layoutSubviews;
- (double)_wheelShift;
- (_Bool)_forceTextAlignmentCentered;

@end
