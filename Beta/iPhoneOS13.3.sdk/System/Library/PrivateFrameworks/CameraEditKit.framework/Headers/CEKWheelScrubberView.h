/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIView.h>

@class CEKAnimationGenerator, CEKEdgeGradientView, CEKSelectionFeedbackGenerator, CEKWheelScrubberCollectionViewLayout, NSArray, NSString, UICollectionView, UILabel, UILongPressGestureRecognizer, UIPreviewInteraction, UITapGestureRecognizer;

@protocol CEKWheelScrubberViewDelegate;

@interface CEKWheelScrubberView : UIView

{
    struct {
        _Bool respondsToWillBeginScrolling;
        _Bool respondsToDidScroll;
        _Bool respondsToWillEndScrolling;
        _Bool respondsToDidEndScrolling;
    } _delegateFlags;
    _Bool _suspended;
    _Bool __showSelectedItemTextOverlay;
    id <CEKWheelScrubberViewDelegate> _delegate;
    unsigned long long _itemCount;
    unsigned long long _defaultIndex;
    unsigned long long _selectedIndex;
    unsigned long long _markedIndex;
    long long _cornerStyle;
    double _selectionDotCenterTopSpacing;
    long long _dotPlacement;
    CEKWheelScrubberCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    UIView *__selectedItemLoupe;
    UILabel *__selectedItemTextOverlay;
    CEKEdgeGradientView *__edgeGradientView;
    UILongPressGestureRecognizer *__pressGestureRecognizer;
    UITapGestureRecognizer *__tapGestureRecognizer;
    CEKSelectionFeedbackGenerator *__selectionFeedbackGenerator;
    NSArray *__reducedItemIndicesToShow;
    UIPreviewInteraction *__previewInteraction;
    double __previewTransitionProgress;
    CEKAnimationGenerator *__animationGenerator;
    UIView *__collectionViewSnapshot;
    CDStruct_ae5a35ae _gradientInsets;
    struct UIEdgeInsets _thumbnailEdgeInsets;
}

@property (nonatomic, readonly) CEKWheelScrubberCollectionViewLayout *_collectionViewLayout;
@property (nonatomic, readonly) UICollectionView *_collectionView;
@property (nonatomic, readonly) UIView *_selectedItemLoupe;
@property (nonatomic, readonly) UILabel *_selectedItemTextOverlay;
@property (nonatomic) _Bool _showSelectedItemTextOverlay;
@property (retain, nonatomic) CEKEdgeGradientView *_edgeGradientView;
@property (nonatomic, readonly) UILongPressGestureRecognizer *_pressGestureRecognizer;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) CEKSelectionFeedbackGenerator *_selectionFeedbackGenerator;
@property (retain, nonatomic, setter=_setReducedItemIndicesToShow:) NSArray *_reducedItemIndicesToShow;
@property (retain, nonatomic) UIPreviewInteraction *_previewInteraction;
@property (nonatomic, setter=_setPreviewTransitionProgress:) double _previewTransitionProgress;
@property (nonatomic, readonly) CEKAnimationGenerator *_animationGenerator;
@property (retain, nonatomic, setter=_setCollectionViewSnapshot:) UIView *_collectionViewSnapshot;
@property (weak, nonatomic) id <CEKWheelScrubberViewDelegate> delegate;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long defaultIndex;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) unsigned long long markedIndex;
@property (nonatomic) NSString *selectionText;
@property (nonatomic) _Bool useRoundedCorners;
@property (nonatomic) long long cornerStyle;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (nonatomic, readonly) struct CGSize thumbnailSize;
@property (nonatomic) struct UIEdgeInsets thumbnailEdgeInsets;
@property (nonatomic) CDStruct_ae5a35ae gradientInsets;
@property (nonatomic, readonly) double selectedThumbnailBorderWidth;
@property (nonatomic) double selectionDotCenterTopSpacing;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long layoutOrder;
@property (nonatomic) long long dotPlacement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)updateItems;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)_handlePressGesture:(id)arg1;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)setMarkedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setTransparentGradients;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (void)_updateCollectionViewForMarkedIndexAnimated:(_Bool)arg1;
- (void)_setSelectedIndex:(unsigned long long)arg1 shouldNotify:(_Bool)arg2 shouldSuppressHaptic:(_Bool)arg3;
- (void)_scrollToIndex:(long long)arg1 animated:(_Bool)arg2 shouldOvershoot:(_Bool)arg3;
- (_Bool)_shouldPerformFeedback;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (void)setSelectionText:(id)arg1 animated:(_Bool)arg2;
- (void)_setShowTextOverlay:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateLayoutForVisibleCells;
- (void)_updateLayoutForCell:(id)arg1;
- (struct CGSize)_defaultItemSize;
- (_Bool)_isDirectionHorizontal;
- (void)_updateCornerMaskForCell:(id)arg1 withItemIndex:(long long)arg2;
- (double)_lengthForItemIndex:(long long)arg1 withPreviewTransitionProgress:(double)arg2;
- (double)_alphaForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (double)_defaultItemLength;
- (double)_lengthForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (long long)_itemIndexUsingHysteresisForScrollingToContentOffset:(struct CGPoint)arg1 switchToNextItemThreshold:(double)arg2 withPreviewTransitionProgress:(double)arg3;
- (id)_newReducedItemIndicesToShow;
- (_Bool)_isOrderReverse;
- (struct CGPoint)_contentOffsetForFractionalItemOffset:(double)arg1 withPreviewTransitionProgress:(double)arg2;
- (long long)_nominalItemIndexForFractionalItemOffset:(double)arg1;
- (double)_fractionalItemOffsetForContentOffset:(struct CGPoint)arg1 withPreviewTransitionProgress:(double)arg2;
- (void)_resetForTouchesEnded;
- (void)_switchToIndex:(long long)arg1 shouldOvershoot:(_Bool)arg2 shouldSuppressHaptic:(_Bool)arg3;
- (void)_switchToItemAtIndexOffset:(long long)arg1 shouldOvershoot:(_Bool)arg2;
- (double)_idealFractionalItemOffsetTargetForFractionalItemOffset:(double)arg1 allowUnselectedItems:(_Bool)arg2;
- (struct CGSize)wheelScrubberCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (double)wheelScrubberCollectionViewLayout:(id)arg1 alphaForItemAtIndexPath:(id)arg2;
- (void)switchToNextItem;
- (void)switchToPreviousItem;

@end
