/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionView.h>

@class NSIndexPath, NSString, UILongPressGestureRecognizer;

@protocol _TVCollectionViewDelegate;

@interface _TVCollectionView : UICollectionView

{
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _bottomPadding;
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;
    struct UIEdgeInsets _gradientBoundsInsets;
    CDStruct_ce7ae26c _flags;
    NSIndexPath *_indexPathForLastFocusedItem;
}

@property (weak, nonatomic) id <_TVCollectionViewDelegate> delegate;
@property (copy, nonatomic, readonly) NSIndexPath *indexPathForLastFocusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)layoutBelowIfNeeded;
- (void)_notifyDidScroll;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadData;
- (struct CGRect)_visibleBounds;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
- (void)_longPressAction:(id)arg1;
- (void)_playButtonAction:(id)arg1;
- (struct UIEdgeInsets)_gradientBoundsInsets;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;
- (void)_setGradientBoundsInsets:(struct UIEdgeInsets)arg1;
- (void)_performBlockWithLongPressedCellIndexPath:(CDUnknownBlockType)arg1;
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;

@end
