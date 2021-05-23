/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

#import <HomeUI/Swift-Protocol.h>

@class HFColorPalette, HFColorPaletteColor, HUQuickControlColorViewProfile, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;

@protocol HUQuickControlColorPaletteViewInteractionDelegate;

@interface HUColorLinearPaletteView : UIView <Swift>

{
    _Bool _userInteractionActive;
    HUQuickControlColorViewProfile *_profile;
    id <HUQuickControlColorPaletteViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    unsigned long long _mode;
    NSIndexPath *_selectedColorIndexPath;
    HFColorPalette *_colorPalette;
    HFColorPalette *_calibratedColorPalette;
    HFColorPaletteColor *_selectedColor;
    NSIndexPath *_prevSelectedColorIndexPath;
    UICollectionView *_colorSwatchCollectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

@property (retain, nonatomic) HFColorPalette *calibratedColorPalette;
@property (retain, nonatomic) HFColorPaletteColor *selectedColor;
@property (retain, nonatomic) NSIndexPath *prevSelectedColorIndexPath;
@property (retain, nonatomic) UICollectionView *colorSwatchCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (weak, nonatomic) id <HUQuickControlColorPaletteViewInteractionDelegate> interactionDelegate;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (retain, nonatomic) NSIndexPath *selectedColorIndexPath;
@property (retain, nonatomic) HFColorPalette *colorPalette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (void)updateSelectedColorIndexPathToIndexPath:(id)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_prepareForTapticFeedback;
- (void)_actuateSelectionTapticFeedback;
- (void)_updateCalibratedColorPalette;
- (void)_setColorPalette:(id)arg1 notifyDelegate:(_Bool)arg2;
- (unsigned long long)_indexForSelectedColor:(id)arg1 includeBias:(_Bool)arg2;
- (void)_setSelectedColor:(id)arg1 notifyDelegate:(_Bool)arg2 selectionChanged:(_Bool)arg3;
- (void)_actuateImpactTapticFeedback;

@end
