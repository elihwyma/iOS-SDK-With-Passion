/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKAnnotationTrackingCameraController.h>

__attribute__((visibility("hidden")))
@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController

- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 isInitial:(_Bool)arg3;
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;
- (double)_minTrackingCameraDistance;
- (double)_zoomLevelForCameraPosition:(Matrix_6e1d3589)arg1;

@end
