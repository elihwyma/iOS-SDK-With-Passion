/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIButton.h>

@class NAUILayoutConstraintSet, NSString, UIFont, UILabel, UIView;

@interface HUPillButton : UIButton

{
    unsigned long long _style;
    NAUILayoutConstraintSet *_constraintSet;
    UIView *_backgroundView;
    UILabel *_buttonLabel;
    struct {
        double topToLabelBaselineDistance;
        double labelBaselineToBottomDistance;
        double minHorizontalPadding;
        double minWidth;
    } _metrics;
}

@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UILabel *buttonLabel;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (nonatomic) CDStruct_d2b197d1 metrics;

+ (_Bool)requiresConstraintBasedLayout;
+ (CDStruct_d2b197d1)defaultMetrics;

- (id)description;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)didMoveToSuperview;
- (id)initWithBackgroundStyle:(unsigned long long)arg1;
- (void)_setupConstraintSet;
- (void)_didTap:(id)arg1;

@end
