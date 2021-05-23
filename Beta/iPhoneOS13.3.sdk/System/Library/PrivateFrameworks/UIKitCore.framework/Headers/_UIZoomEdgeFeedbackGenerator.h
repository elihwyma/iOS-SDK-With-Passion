/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIEdgeFeedbackGenerator.h>

@interface _UIZoomEdgeFeedbackGenerator : _UIEdgeFeedbackGenerator

{
    double _minimumZoomScale;
    double _maximumZoomScale;
    double _minimumTemporaryZoomScale;
    double _maximumTemporaryZoomScale;
}

@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double minimumTemporaryZoomScale;
@property (nonatomic) double maximumTemporaryZoomScale;

- (id)init;
- (id)initWithCoordinateSpace:(id)arg1;
- (void)_updateMaximumValue;
- (void)_zoomScaleUpdated:(double)arg1 withVelocity:(double)arg2;
- (void)zoomScaleUpdated:(double)arg1;

@end
