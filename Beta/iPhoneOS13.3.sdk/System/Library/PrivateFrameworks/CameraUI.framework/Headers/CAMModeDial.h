/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class CAGradientLayer, NSArray, NSDictionary, NSString, UIView;

@protocol CAMModeDialDataSource;

@interface CAMModeDial : UIControl

{
    long long _layoutStyle;
    id <CAMModeDialDataSource> _dataSource;
    long long _selectedMode;
    UIView *__selectedItemBackgroundView;
    NSArray *__modes;
    NSDictionary *__items;
    UIView *__meshTransformView;
    CAGradientLayer *__gradientLayer;
    UIView *__itemsContainerView;
}

@property (nonatomic, readonly) UIView *_selectedItemBackgroundView;
@property (retain, nonatomic, setter=_setModes:) NSArray *_modes;
@property (retain, nonatomic, setter=_setItems:) NSDictionary *_items;
@property (nonatomic, readonly) UIView *_meshTransformView;
@property (nonatomic, readonly) CAGradientLayer *_gradientLayer;
@property (nonatomic, readonly) UIView *_itemsContainerView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) id <CAMModeDialDataSource> dataSource;
@property (nonatomic) long long selectedMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)wantsVerticalModeDialForLayoutStyle:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (id)_selectedItem;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)updateToContentSize:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)_updateForLayoutStyle;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_configureMeshTransformForLayoutStyle:(long long)arg1;
- (void)_configureGradientForLayoutStyle:(long long)arg1;
- (void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1;
- (void)_layoutVerticalModeDial;
- (void)_layoutHorizontalModeDial;
- (void)_updateContainerCenterFromSelectedModeAnimated:(_Bool)arg1;
- (struct CGSize)_interpolatedHorizontalMeshTransformSize;
- (id)_fontForLayoutStyle:(long long)arg1 selected:(_Bool)arg2;
- (double)_centeringNudgeForMode:(long long)arg1;
- (struct CGPoint)_verticalContainerCenterForMode:(long long)arg1;
- (struct CGPoint)_horizontalContainerCenterForMode:(long long)arg1;
- (id)_horizontalMeshTransform;
- (id)_meshTransformForLayoutStyle:(long long)arg1;
- (long long)_nearestCaptureModeForLocation:(struct CGPoint)arg1;
- (void)_updateItemsForLayoutStyle:(long long)arg1;
- (void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1;

@end
