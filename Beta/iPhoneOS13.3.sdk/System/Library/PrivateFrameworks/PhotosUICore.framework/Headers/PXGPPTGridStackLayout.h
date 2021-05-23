/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGStackLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSIndexSet, NSString;

@interface PXGPPTGridStackLayout : PXGStackLayout <Swift>

{
    long long _numberOfItemsPerSection;
    long long _numberOfColumns;
    _Bool _useAssetBadgeDecoration;
    long long _selectionDecorationStyle;
    _Bool _decorated;
    long long _estimatedNumberOfRowsPerSection;
    struct UIColor *_spriteColor;
    NSIndexSet *_selectedItemsPerSection;
    struct PXAssetBadgeInfo _assetBadgeInfos[12];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (_Bool)wantsAssetBadgeDecorationsInLayout:(id)arg1;
- (struct PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (id)initWithSetting:(id)arg1;
- (void)_initializeSelectedItems;
- (void)_initializeBadgeInfos;

@end
