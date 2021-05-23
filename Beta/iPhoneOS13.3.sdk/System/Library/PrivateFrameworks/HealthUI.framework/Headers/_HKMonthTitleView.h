/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface _HKMonthTitleView : UIView

{
    UIView *_dividerLine;
    _Bool _highlighted;
    UILabel *_monthTitle;
    double _topPadding;
    double _bottomPadding;
    double _dividerOriginX;
    double _dividerWidth;
}

@property (retain, nonatomic) UILabel *monthTitle;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double dividerOriginX;
@property (nonatomic) double dividerWidth;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

- (void)setDate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateFont;
- (id)_monthStringFromDate:(id)arg1;

@end
