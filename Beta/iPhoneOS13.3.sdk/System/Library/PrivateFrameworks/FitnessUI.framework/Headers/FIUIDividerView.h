/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface FIUIDividerView : UIView

{
    UIImageView *_imageView;
    struct UIEdgeInsets _edgeInsets;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
