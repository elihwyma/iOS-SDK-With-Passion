/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGItemsLayout.h>

@class NSString;

@interface PXGOneColumnLayout : PXGItemsLayout

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _isUpdating;
    _Bool _didAlreadyUpdateLoadedItems;
    _Bool _enableBestCropRect;
    _Bool _fillSafeAreaTopInset;
    int _mediaKind;
    int _presentationType;
    double _interItemSpacing;
    double _itemCaptionSpacing;
    double _overrideAspectRatio;
    double _overrideAspectRatioAmount;
    double _aspectRatioLimit;
    id _anchorObjectReference;
    long long _anchorItem;
    struct CGPoint _anchorViewportCenter;
    struct CGPoint _anchorItemCenter;
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
@property (nonatomic) long long anchorItem;
@property (nonatomic) struct CGPoint anchorItemCenter;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) int mediaKind;
@property (nonatomic) int presentationType;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic) _Bool enableBestCropRect;
@property (nonatomic) double overrideAspectRatio;
@property (nonatomic) double overrideAspectRatioAmount;
@property (nonatomic) double aspectRatioLimit;
@property (nonatomic) _Bool fillSafeAreaTopInset;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint anchorViewportCenter;

- (id)init;
- (void)update;
- (void)setVisibleRect:(struct CGRect)arg1;
- (void)_updateSprites;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)alphaDidChange;
- (id)diagnosticDescription;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (_Bool)canHandleVisibleRectRejection;
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;
- (void)loadedItemsDidChange;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;
- (void)invalidateLoadedItems;
- (struct _NSRange)itemsToLoad;
- (void)_updateVisibleRect;
- (void)_updateSpriteStyles;
- (struct _NSRange)_itemsToLoadForAnchorItem:(long long)arg1 visibleRect:(struct CGRect)arg2;
- (struct CGRect)frameForItem:(long long)arg1;
- (long long)itemClosestTo:(struct CGPoint)arg1;
- (struct _NSRange)itemRangeInRect:(struct CGRect)arg1;
- (struct _NSRange)itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1;
- (_Bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(_Bool)arg3;
- (long long)columnForItem:(long long)arg1;
- (struct CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;

@end
