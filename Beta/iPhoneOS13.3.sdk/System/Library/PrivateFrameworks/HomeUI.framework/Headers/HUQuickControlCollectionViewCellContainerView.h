/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NAUILayoutConstraintSet, NSString, UILabel, UILayoutGuide;

@interface HUQuickControlCollectionViewCellContainerView : UIView

{
    UIView *_contentView;
    unsigned long long _titlePosition;
    UILayoutGuide *_preferredContentFrameLayoutGuide;
    UILabel *_titleLabel;
    NAUILayoutConstraintSet *_constraintSet;
    NAUILayoutConstraintSet *_preferredContentFrameConstraintSet;
    struct UIEdgeInsets _preferredContentLayoutFrameInset;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;
@property (nonatomic, readonly) NAUILayoutConstraintSet *preferredContentFrameConstraintSet;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long titlePosition;
@property (nonatomic) struct UIEdgeInsets preferredContentLayoutFrameInset;
@property (nonatomic, readonly) UILayoutGuide *preferredContentFrameLayoutGuide;

+ (id)_titleFont;
+ (_Bool)requiresConstraintBasedLayout;
+ (double)preferredChromeHeightForTitlePosition:(unsigned long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 titlePosition:(unsigned long long)arg2;
- (void)_configureConstraintSets;

@end
