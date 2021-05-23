/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIControl.h>

@class CLKDevice, NTKColoringImageView, UIColor, UIView;

@interface NTKStopwatchButton : UIControl

{
    CLKDevice *_device;
    UIView *_innerView;
    NTKColoringImageView *_glyphView;
    UIColor *_glyphColor;
    UIColor *_glyphBackgroundColor;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets touchEdgeInsets;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIColor *glyphBackgroundColor;

- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end
