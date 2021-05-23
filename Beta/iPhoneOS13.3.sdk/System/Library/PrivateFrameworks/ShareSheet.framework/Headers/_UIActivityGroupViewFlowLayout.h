/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSIndexPath, UILongPressGestureRecognizer, _UIActivityGroupActivityCell;

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout

{
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForDraggedItem;
    double _evaluatedHorizontalItemOffset;
    NSArray *_preparedLayoutAttributes;
    NSArray *_preparedUpdateItems;
    _UIActivityGroupActivityCell *_draggingView;
    struct CGSize _evaluatedItemSize;
    struct CGSize _evaluatedContentSize;
    struct UIOffset _draggingOffset;
    struct UIEdgeInsets _externalSafeInset;
    struct UIEdgeInsets _evaluatedInset;
}

@property (nonatomic) struct UIEdgeInsets evaluatedInset;
@property (nonatomic) struct CGSize evaluatedItemSize;
@property (nonatomic) struct CGSize evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (copy, nonatomic) NSArray *preparedLayoutAttributes;
@property (copy, nonatomic) NSArray *preparedUpdateItems;
@property (nonatomic) struct UIOffset draggingOffset;
@property (retain, nonatomic) _UIActivityGroupActivityCell *draggingView;
@property (retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer;
@property (copy, nonatomic) NSIndexPath *indexPathForDraggedItem;
@property (nonatomic) struct UIEdgeInsets externalSafeInset;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)handleEditingGesture:(id)arg1;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 offscreenPeekInFactor:(float)arg3;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (_Bool)shouldReverseLayoutDirection;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (void)updateDraggingViewForGesture:(id)arg1;
- (_Bool)shouldCancelDraggingForGesture:(id)arg1;
- (void)cancelDraggingForGesture:(id)arg1;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (void)invalidateGroupViewLayoutAnimated:(_Bool)arg1;

@end
