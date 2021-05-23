/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIPickerViewTopFrame : UIView

{
    UIImage *_leftImage;
    UIImage *_middleImage;
    UIImage *_rightImage;
    double _inset;
    double _shift;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setShift:(double)arg1;
- (void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3;
- (void)setInset:(double)arg1;

@end
