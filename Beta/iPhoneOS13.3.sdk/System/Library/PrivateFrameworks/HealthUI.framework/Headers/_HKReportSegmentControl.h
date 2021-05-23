/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIControl, UISegmentedControl;

@interface _HKReportSegmentControl : UIView

{
    UISegmentedControl *_segmentControl;
    UIView *_dividerView;
    UIControl *_rightControl;
}

@property (nonatomic, readonly) UISegmentedControl *segmentControl;
@property (nonatomic, readonly) UIView *dividerView;
@property (nonatomic, readonly) UIControl *rightControl;

- (_Bool)isOpaque;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4;

@end
