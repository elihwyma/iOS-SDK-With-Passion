/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class SKUIInteractiveSegmentedControl;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView

{
    long long _layoutStyle;
    SKUIInteractiveSegmentedControl *_segmentedControl;
    double _segmentedControlMinimumHeight;
}

@property (nonatomic) long long layoutStyle;
@property (retain, nonatomic) SKUIInteractiveSegmentedControl *segmentedControl;
@property (nonatomic) double segmentedControlMinimumHeight;

+ (struct UIEdgeInsets)defaultLayoutMargins;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
