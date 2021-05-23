/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIScrollViewScrollIndicator : UIView

{
    _Bool _expandedForDirectManipulation;
    unsigned long long _type;
    long long _style;
    UIView *_roundedFillView;
    UIColor *_foregroundColor;
}

@property (retain, nonatomic) UIView *roundedFillView;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long style;
@property (nonatomic) _Bool expandedForDirectManipulation;

+ (double)_expandedIndicatorDimension;
+ (double)indicatorDimension;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_colorForStyle:(long long)arg1;
- (void)_layoutFillViewAnimated:(_Bool)arg1;
- (struct CGRect)_offsetFillViewRectForExpandedState:(struct CGRect)arg1;

@end
