/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableSet, NSSet, NSString, PXAssetBadgeManager, PXAssetsDataSource, PXGLayout, PXSelectionSnapshot;

@interface PXCuratedLibraryAssetDecorationSource : NSObject

{
    CDStruct_d97c9657 _updateFlags;
    NSIndexSet *_draggedItems;
    NSMutableSet *_assetUUIDsInCloud;
    PXAssetBadgeManager *_badgeManager;
    _Bool _forceBadgesOnAllAssets;
    _Bool _durationAlwaysHidden;
    _Bool _enableDebugDecoration;
    PXGLayout *_decoratedLayout;
    PXAssetsDataSource *_dataSource;
    long long _section;
    PXSelectionSnapshot *_selectionSnapshot;
    NSSet *_draggedAssetReferences;
    unsigned long long _forbiddenBadges;
    NSIndexSet *_itemsWithCoveredBottomTrailingCorner;
}

@property (weak, nonatomic) PXGLayout *decoratedLayout;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (nonatomic, readonly) long long section;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (copy, nonatomic) NSSet *draggedAssetReferences;
@property (nonatomic) unsigned long long forbiddenBadges;
@property (nonatomic) _Bool durationAlwaysHidden;
@property (copy, nonatomic) NSIndexSet *itemsWithCoveredBottomTrailingCorner;
@property (nonatomic) _Bool enableDebugDecoration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)update;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)observeIsInCloud:(_Bool)arg1 forDisplayAsset:(id)arg2;
- (_Bool)wantsDebugDecorationInLayout:(id)arg1;
- (id)debugDecorationAtSpriteIndex:(unsigned int)arg1 asset:(id)arg2 inLayout:(id)arg3;
- (id)draggingSpriteIndexesInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (_Bool)wantsCaptionDecorationsInLayout:(id)arg1;
- (_Bool)wantsAssetBadgeDecorationsInLayout:(id)arg1;
- (struct PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2;
- (void)_invalidateDragDecoration;
- (void)_updateDragDecoration;

@end
