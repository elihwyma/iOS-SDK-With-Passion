/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface _PKSliderKnobView : UIView

{
    UIImageView *_knobImageView;
}

@property (nonatomic, readonly) UIImageView *knobImageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
