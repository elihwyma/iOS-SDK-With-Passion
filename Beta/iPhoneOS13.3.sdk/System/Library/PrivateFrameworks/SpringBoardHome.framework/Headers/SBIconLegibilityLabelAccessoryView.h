/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconLabelAccessoryView.h>

@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView

{
    UIImageView *_iconImageView;
}

@property (nonatomic, readonly) UIImageView *iconImageView;

- (_Bool)hasBaseline;
- (double)baselineOffsetFromBottom;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;
- (void)removeInvertingFilter;
- (void)addInvertingFilter;

@end
