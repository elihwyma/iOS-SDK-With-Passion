/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class NSArray;

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator

{
    NSArray *_zoomAnimationCoordinators;
}

@property (copy, nonatomic, readonly) NSArray *zoomAnimationCoordinators;

- (id)init;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (void)animateContentForEndPointType:(long long)arg1 inView:(struct NSObject *)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (id)initWithZoomAnimationCoordinators:(id)arg1;

@end
