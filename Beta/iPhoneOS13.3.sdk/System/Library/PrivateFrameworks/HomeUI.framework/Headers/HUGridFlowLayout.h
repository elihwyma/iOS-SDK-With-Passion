/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class HFWallpaperSlice, HUGridLayoutOptions, HUWallpaperView, NSHashTable, NSMutableDictionary, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout

{
    HUGridLayoutOptions *_layoutOptions;
    HUWallpaperView *_wallpaperView;
    HFWallpaperSlice *_blurredWallpaperSlice;
    HFWallpaperSlice *_darkModeBlurredWallpaperSlice;
    NSMutableDictionary *_indexPathsByItems;
    NSMutableDictionary *_overrideAttributesByIndexPath;
    NSHashTable *_childGridLayouts;
    HUGridFlowLayout *_parentGridLayout;
}

@property (nonatomic, readonly) NSMutableDictionary *indexPathsByItems;
@property (nonatomic, readonly) NSMutableDictionary *overrideAttributesByIndexPath;
@property (retain, nonatomic) NSHashTable *childGridLayouts;
@property (weak, nonatomic) HUGridFlowLayout *parentGridLayout;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (weak, nonatomic) HUWallpaperView *wallpaperView;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layoutAttributesClass;

- (id)init;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3;
- (void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)clearAllOverrideAttributesForItems:(id)arg1;
- (id)_modifiedLayoutAttributesForAttributes:(id)arg1;
- (void)_updateContainingGridLayout;
- (void)unregisterChildGridLayout:(id)arg1;
- (void)registerChildGridLayout:(id)arg1;

@end
