/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class NSNumber, NSString, UIColor, UIImageView, UILabel;

@interface FIUICompetitionLearnMoreExampleView : UIView

{
    UIImageView *_moveRingView;
    UIImageView *_exerciseRingView;
    UIImageView *_standRingView;
    UILabel *_movePercentLabel;
    UILabel *_exercisePercentLabel;
    UILabel *_standPercentLabel;
    UIView *_separatorView;
    UILabel *_totalPointsLabel;
    NSNumber *_previousLayoutWidth;
    UIColor *_separatorViewColor;
    UIColor *_totalPointsLabelColor;
    NSString *_totalPointsLabelText;
}

@property (retain, nonatomic) UIColor *separatorViewColor;
@property (retain, nonatomic) UIColor *totalPointsLabelColor;
@property (retain, nonatomic) NSString *totalPointsLabelText;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)arg1;
- (id)_ringViewOfType:(long long)arg1 withMetricColors:(id)arg2 percentage:(double)arg3;
- (id)_ringPercentageLabelForPercentage:(double)arg1 withMetricColors:(id)arg2;

@end
