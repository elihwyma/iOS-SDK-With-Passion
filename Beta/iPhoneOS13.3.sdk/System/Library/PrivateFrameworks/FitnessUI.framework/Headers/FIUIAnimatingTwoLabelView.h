/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface FIUIAnimatingTwoLabelView : UIView

{
    UILabel *_visibleLabel;
    UILabel *_mainLabel;
    UILabel *_secondaryLabel;
}

@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (nonatomic, readonly) UILabel *visibleLabel;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 mainLabel:(id)arg2 secondaryLabel:(id)arg3;
- (void)applyFont:(id)arg1;
- (void)showMainLabelAnimated:(_Bool)arg1;
- (struct CGRect)_frameAboveBounds;
- (struct CGRect)_frameBelowBounds;
- (void)_updateHidden;
- (void)showSecondaryLabelAnimated:(_Bool)arg1;

@end
