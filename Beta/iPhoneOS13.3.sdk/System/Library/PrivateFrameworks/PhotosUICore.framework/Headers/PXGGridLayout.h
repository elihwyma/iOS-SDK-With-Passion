/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGItemsLayout.h>

@class NSString;

@interface PXGGridLayout : PXGItemsLayout

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdating;
    struct CGSize _itemSize;
    double _finalInterItemSpacing;
    struct UIEdgeInsets _finalInsets;
    _Bool _canHandleVisibleRectRejection;
    _Bool _enableBestCropRect;
    unsigned char _mediaFlags;
    _Bool _fillSafeAreaTopInset;
    _Bool _hideIncompleteLastRow;
    _Bool _mediaTargetSizeIgnoresSpacing;
    _Bool _loadItemsOutsideAnchorViewport;
    int _mediaKind;
    int _presentationType;
    long long _style;
    long long _contentMode;
    long long _numberOfColumns;
    double _interItemSpacing;
    double _itemCaptionSpacing;
    double _itemAspectRatio;
    double _aspectRatioLimit;
    long long _visualItemShift;
    id _anchorObjectReference;
    CDStruct_2bd92d94 _itemCornerRadius;
    CDStruct_2bd92d94 _edgeCornerRadius;
    struct CGPoint _anchorViewportCenter;
    struct CGPoint _contentOrigin;
    struct UIEdgeInsets _padding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) _Bool enableBestCropRect;
@property (nonatomic) unsigned char mediaFlags;
@property (nonatomic, readonly) long long visualItemShift;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic) _Bool hideIncompleteLastRow;
@property (nonatomic) _Bool fillSafeAreaTopInset;
@property (nonatomic, readonly) struct _NSRange loadedItems;
@property (nonatomic, readonly) struct CGRect loadedItemsRect;
@property (nonatomic, readonly) _Bool supportsContentMode;
@property (nonatomic, readonly) _Bool itemCaptionsVisible;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint anchorViewportCenter;
@property (nonatomic) _Bool loadItemsOutsideAnchorViewport;
@property (nonatomic) long long contentMode;
@property (nonatomic, readonly) long long numberOfVisualItems;
@property (nonatomic, readonly) long long numberOfVisualRows;
@property (nonatomic) struct CGPoint contentOrigin;
@property (nonatomic) long long style;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) _Bool enableBestCropRect;
@property (nonatomic) double aspectRatioLimit;
@property (nonatomic) int mediaKind;
@property (nonatomic) unsigned char mediaFlags;
@property (nonatomic) int presentationType;
@property (nonatomic) _Bool fillSafeAreaTopInset;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic) long long visualItemShift;
@property (nonatomic, getter=isLazy) _Bool lazy;
@property (nonatomic) _Bool hideIncompleteLastRow;
@property (nonatomic) _Bool mediaTargetSizeIgnoresSpacing;
@property (nonatomic) CDStruct_2bd92d94 itemCornerRadius;
@property (nonatomic) CDStruct_2bd92d94 edgeCornerRadius;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint anchorViewportCenter;
@property (nonatomic) _Bool loadItemsOutsideAnchorViewport;
@property (nonatomic) _Bool canHandleVisibleRectRejection;
@property (nonatomic, readonly) struct CGRect loadedItemsRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

- (id)init;
- (void)update;
- (void)safeAreaInsetsDidChange;
- (void)_updateContentSize;
- (void)_updateSprites;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)alphaDidChange;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;
- (void)loadedItemsDidChange;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;
- (struct _NSRange)itemsToLoad;
- (id)itemsGeometry;
- (void)_updateSpriteStyles;
- (struct CGRect)frameForItem:(long long)arg1;
- (long long)itemClosestTo:(struct CGPoint)arg1;
- (struct _NSRange)itemRangeInRect:(struct CGRect)arg1;
- (struct _NSRange)itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1;
- (_Bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(_Bool)arg3;
- (long long)columnForItem:(long long)arg1;
- (struct CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;
- (_Bool)shouldUpdateDecorationMediaTargetSizes;
- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (id)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (id)itemsInRect:(struct CGRect)arg1 inLayout:(id)arg2;
- (void)_updateColumnsMetrics;
- (struct CGPoint)_layoutPointInContent:(struct CGPoint)arg1;
- (struct CGPoint)_contentPointInLayout:(struct CGPoint)arg1;
- (struct CGRect)_layoutRectInContent:(struct CGRect)arg1;
- (struct CGRect)_contentRectInLayout:(struct CGRect)arg1;
- (struct CGRect)_frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2 itemSize:(struct CGSize)arg3 insets:(struct UIEdgeInsets)arg4;
- (void)_getItemSize:(struct CGSize *)arg1 finalInteritemSpacing:(double *)arg2 finalInsets:(struct UIEdgeInsets *)arg3 forDesiredInterItemSpacing:(double)arg4 padding:(struct UIEdgeInsets)arg5;
- (long long)_rowForItem:(long long)arg1;
- (struct _NSRange)_itemsToLoadForVisibleRect:(struct CGRect)arg1;
- (struct CGRect)_pageAlignedRectForVisibleRect:(struct CGRect)arg1;

@end
