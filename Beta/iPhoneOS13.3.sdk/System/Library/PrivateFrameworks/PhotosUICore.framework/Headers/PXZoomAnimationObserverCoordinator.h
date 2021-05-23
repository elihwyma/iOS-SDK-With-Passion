/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@protocol PXZoomAnimationObserverCoordinatorDelegate;

@interface PXZoomAnimationObserverCoordinator : PXZoomAnimationCoordinator

{
    struct {
        _Bool animationWillBeginWithContext;
        _Bool animationDidEndWithContext;
    } _delegateRespondsTo;
    id <PXZoomAnimationObserverCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <PXZoomAnimationObserverCoordinatorDelegate> delegate;

- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;

@end
