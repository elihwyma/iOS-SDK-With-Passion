/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIView, WFFloatingView, WFGradient;

@interface WFColorCell : UICollectionViewCell

{
    NSString *_colorName;
    WFFloatingView *_floatingView;
    UIView *_selectedRingView;
}

@property (nonatomic, readonly) WFFloatingView *floatingView;
@property (weak, nonatomic) UIView *selectedRingView;
@property (retain, nonatomic) WFGradient *gradient;
@property (copy, nonatomic) NSString *colorName;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end
