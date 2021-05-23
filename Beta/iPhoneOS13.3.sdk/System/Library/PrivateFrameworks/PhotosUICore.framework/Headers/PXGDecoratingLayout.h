/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@class NSMutableIndexSet;

@protocol PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGDebugDecorationSource, PXGDragDecorationSource, PXGHighlightDecorationSource, PXGLayoutContentSource, PXGSelectionDecorationSource;

@interface PXGDecoratingLayout : PXGLayout

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdatingDecoratedLayout;
    NSMutableIndexSet *_invalidatedDecoratedSpriteIndexes;
    _Bool _wantsCaptionDecorations;
    long long _selectionDecorationStyle;
    unsigned int _numberOfDecoratingSpritesPerDecoratedSprite;
    PXGLayout *_decoratedLayout;
    id <PXGLayoutContentSource> _decorationSource;
    id <PXGAssetBadgeDecorationSource> _assetBadgeDecorationSource;
    id <PXGCaptionDecorationSource> _captionDecorationSource;
    id <PXGSelectionDecorationSource> _selectionDecorationSource;
    id <PXGHighlightDecorationSource> _highlightDecorationSource;
    id <PXGDragDecorationSource> _dragDecorationSource;
    id <PXGDebugDecorationSource> _debugDecorationSource;
}

@property (nonatomic, readonly) unsigned int numberOfDecoratingSpritesPerDecoratedSprite;
@property (weak, nonatomic, readonly) id <PXGAssetBadgeDecorationSource> assetBadgeDecorationSource;
@property (weak, nonatomic, readonly) id <PXGCaptionDecorationSource> captionDecorationSource;
@property (weak, nonatomic, readonly) id <PXGSelectionDecorationSource> selectionDecorationSource;
@property (weak, nonatomic, readonly) id <PXGHighlightDecorationSource> highlightDecorationSource;
@property (weak, nonatomic, readonly) id <PXGDragDecorationSource> dragDecorationSource;
@property (weak, nonatomic, readonly) id <PXGDebugDecorationSource> debugDecorationSource;
@property (nonatomic, readonly) unsigned int debugDecorationIndex;
@property (retain, nonatomic) PXGLayout *decoratedLayout;
@property (weak, nonatomic) id <PXGLayoutContentSource> decorationSource;

- (id)init;
- (id)description;
- (void)update;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (_Bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int *)arg2;
- (void)viewEnvironmentDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (struct CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect)arg2;
- (void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2;
- (_Bool)canHandleVisibleRectRejection;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (void)setLastBaseline:(double)arg1;
- (double)lastBaseline;
- (id)layoutForItemChanges;
- (id)itemsLayout;
- (id)initWithDecoratedLayout:(id)arg1;
- (void)_updateDecoratedLayout;
- (void)_updateDecorationSources;
- (void)_updateDecorationSprites;
- (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (struct PXGDecorationSpriteInfo)decorationSpriteInfoForDecoratedSpriteIndex:(unsigned int)arg1 decorationIndex:(unsigned int)arg2 assetBadgeInfo:(struct PXAssetBadgeInfo)arg3 isItemSelected:(_Bool)arg4 isItemHighlighted:(_Bool)arg5 isItemDragged:(_Bool)arg6;

@end
