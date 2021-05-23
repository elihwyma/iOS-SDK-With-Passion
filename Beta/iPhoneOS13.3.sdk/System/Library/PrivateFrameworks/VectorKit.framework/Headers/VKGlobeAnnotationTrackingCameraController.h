/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKAnnotationTrackingCameraController.h>

@class VKCameraRegionRestriction;

__attribute__((visibility("hidden")))
@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController

{
    struct GlobeView *_globeView;
    struct Anchor {
        int;
        struct Coordinate2D<Radians, double>;
        Geocentric_d8fde6f2;
        double;
        struct MercatorTile;
        struct AnchorManager *;
        _Bool;
    } *_anchor;
    CDStruct_071ac149 _currentAnimationStartCoordinate;
    CDStruct_2c43369c _currentAnimationPresentationStartCoordinate;
    CDStruct_2c43369c _currentAnimationPresentationEndCoordinate;
    CDStruct_2c43369c _currentAnimationEndCoordinate;
    VKCameraRegionRestriction *_regionRestriction;
}

@property (nonatomic) struct GlobeView *globeView;
@property (retain, nonatomic) VKCameraRegionRestriction *regionRestriction;

- (id)init;
- (void)dealloc;
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 isInitial:(_Bool)arg3;
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;
- (Matrix_443f5d51)_centerCursor;
- (Matrix_443f5d51)_nonOffsetCenterCursor;

@end
