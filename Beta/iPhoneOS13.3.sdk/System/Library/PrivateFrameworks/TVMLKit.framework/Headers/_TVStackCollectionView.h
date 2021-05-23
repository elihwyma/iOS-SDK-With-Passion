/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionView.h>

@class NSIndexPath, NSString;

@interface _TVStackCollectionView : UICollectionView

{
    double _bottomPadding;
    struct UIEdgeInsets _gradientBoundsInsets;
    CDStruct_ce7ae26c _flags;
    NSIndexPath *_indexPathForLastFocusedItem;
}

@property (nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) struct UIEdgeInsets _gradientBoundsInsets;
@property (copy, nonatomic, readonly) NSIndexPath *indexPathForLastFocusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadData;
- (struct CGRect)_visibleBounds;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;

@end
