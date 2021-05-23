/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HFItem, HUGridCellBackgroundView, HUGridCellLayoutOptions, NSString, UIView, UIVisualEffect, UIVisualEffectView;

@protocol HUResizableCellDelegate;

@interface HUGridCell : UICollectionViewCell

{
    _Bool _cellContentsHidden;
    _Bool _rearranging;
    HUGridCellLayoutOptions *_layoutOptions;
    long long _primaryState;
    UIVisualEffect *_contentEffect;
    UIVisualEffect *_secondaryContentEffect;
    double _secondaryContentDimmingFactor;
    HUGridCellBackgroundView *_gridBackgroundView;
    HFItem *_item;
    UIVisualEffectView *_gridForegroundView;
}

@property (nonatomic) long long primaryState;
@property (retain, nonatomic) HUGridCellBackgroundView *gridBackgroundView;
@property (retain, nonatomic) UIVisualEffectView *gridForegroundView;
@property (retain, nonatomic) UIVisualEffect *contentEffect;
@property (retain, nonatomic) UIVisualEffect *secondaryContentEffect;
@property (nonatomic) double secondaryContentDimmingFactor;
@property (nonatomic, readonly) unsigned long long backgroundState;
@property (nonatomic, readonly) UIView *gridForegroundContentView;
@property (nonatomic, readonly) unsigned long long iconDisplayStyle;
@property (retain, nonatomic) HFItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden;
@property (retain, nonatomic) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic, getter=isRearranging) _Bool rearranging;

+ (Class)layoutOptionsClass;
+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimationWithAspectRatio:(double)arg1;

- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)layoutOptionsDidChange;
- (void)_setupCommonCellAppearance;
- (void)_updateForegroundStyle;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned long long)arg2;
- (void)displayStyleDidChange;

@end
