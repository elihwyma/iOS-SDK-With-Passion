/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, SKUIFlexibleSegmentedControl, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIChartColumnsView : UIView

{
    NSArray *_allViewControllers;
    long long _animatingToNumberOfVisibleColumns;
    UIVisualEffectView *_effectView;
    UIView *_borderView0;
    UIView *_borderView1;
    long long _columnChangeAnimationCount;
    NSArray *_columnViews;
    struct UIEdgeInsets _contentInset;
    UIView *_headerBackgroundView;
    UIView *_headerBackgroundBottomBorder;
    NSArray *_headerViews;
    long long _numberOfVisibleColumns;
    SKUIFlexibleSegmentedControl *_segmentedControl;
}

@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (copy, nonatomic) NSArray *chartViewControllers;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) long long numberOfVisibleColumns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1;
- (void)endColumnChangeAnimation;
- (void)_reloadColumnViews;
- (void)_headerViewAction:(id)arg1;
- (id)_headerViewWithViewControllers:(id)arg1;

@end
