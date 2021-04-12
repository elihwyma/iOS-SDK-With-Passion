//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
    BOOL _hitTestingExtensionsAreValid;
    BOOL _compactMetrics;
    long long _itemDistribution;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    NSDirectionalEdgeInsets _padding;
}

@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(nonatomic) long long itemDistribution; // @synthesize itemDistribution=_itemDistribution;
@property(nonatomic) NSDirectionalEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) BOOL compactMetrics; // @synthesize compactMetrics=_compactMetrics;
// - (void).cxx_destruct;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(NSUInteger)arg2 barMetrics:(long long)arg3;
- (void)_appearanceChanged;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (double)defaultTextPadding;
- (double)defaultEdgeSpacing;
- (double)absorptionForItem:(id)arg1;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (NSUInteger)edgesPaddingBarButtonItem:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (void)reloadWithItems:(id)arg1;
- (void)updateContent;
- (void)updateConstraints;
- (id)_newButtonBarWithItems:(id)arg1;
- (void)_updateButtonBarConstraintConstants;
- (NSDirectionalEdgeInsets)_directionalSafeArea;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;

@end

