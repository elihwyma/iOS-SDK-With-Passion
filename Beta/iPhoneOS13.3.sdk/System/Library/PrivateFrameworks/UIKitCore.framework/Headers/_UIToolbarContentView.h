/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarContentView.h>

@class NSLayoutConstraint, NSMapTable, _UIBarButtonItemData, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIToolbarContentView : _UIBarContentView

{
    _UIButtonBar *_buttonBar;
    NSLayoutConstraint *_buttonBarLeadingConstraint;
    NSLayoutConstraint *_buttonBarTrailingConstraint;
    NSMapTable *_absorptionTable;
    double _standardEdgeSpacing;
    _Bool _hitTestingExtensionsAreValid;
    _Bool _compactMetrics;
    long long _itemDistribution;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    struct NSDirectionalEdgeInsets _padding;
}

@property (nonatomic) struct NSDirectionalEdgeInsets padding;
@property (nonatomic) long long itemDistribution;
@property (nonatomic) _Bool compactMetrics;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance;

- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;
- (void)_appearanceChanged;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (double)defaultEdgeSpacing;
- (double)absorptionForItem:(id)arg1;
- (double)defaultTextPadding;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateContent;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (void)reloadWithItems:(id)arg1;
- (struct NSDirectionalEdgeInsets)_directionalSafeArea;
- (void)_updateButtonBarConstraintConstants;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (id)_newButtonBarWithItems:(id)arg1;

@end
