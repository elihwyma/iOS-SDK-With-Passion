/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UITableViewHeaderFooterView.h>

@class UILabel;

@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView

{
    UILabel *_headlineLabel;
    UILabel *_explanationLabel;
}

@property (nonatomic, readonly) double contentMinY;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 forTodayView:(_Bool)arg2;
- (struct CGRect)_headlineLabelFrameForBoundsWidth:(double)arg1;
- (struct CGRect)_explanationLabelFrameForBoundsWidth:(double)arg1 withHeadlineLabelFrame:(struct CGRect)arg2;

@end
