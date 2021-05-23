/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/Swift-Protocol.h>

@protocol VKTrackableAnnotation;

@protocol VKAnnotationTrackingCameraController <Swift>

@property (nonatomic) long long annotationTrackingZoomStyle;
@property (nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property (nonatomic, readonly) id <VKTrackableAnnotation> trackingAnnotation;
@property (nonatomic, readonly) _Bool isAnimatingToTrackAnnotation;
@property (nonatomic, readonly) _Bool isTrackingHeading;

- (unsigned short)startTrackingAnnotation:trackHeading:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)stopTrackingAnnotation;

@end
