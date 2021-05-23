/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSPageViewBase.h>

@class UIScrollView, UIView;

@interface CSTodayPageView : CSPageViewBase

{
    UIView *_todayView;
    UIScrollView *_widgetMajorScrollView;
    double _navigationBarTopInset;
}

@property (retain, nonatomic) UIView *todayView;
@property (retain, nonatomic) UIScrollView *widgetMajorScrollView;
@property (nonatomic) double navigationBarTopInset;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_layoutTodayView;

@end
