/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUICollectionView : UICollectionView

{
    struct UIEdgeInsets _gradientBoundsInsets;
    struct {
        unsigned int layoutBelowDisabled:1;
    } _flags;
}

@property (nonatomic) struct UIEdgeInsets gradientBoundsInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;

@end
