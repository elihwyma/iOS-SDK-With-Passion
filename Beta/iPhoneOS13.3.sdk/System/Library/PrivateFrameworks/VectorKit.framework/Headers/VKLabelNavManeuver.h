/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavManeuver : NSObject

{
    VKLabelNavRoadLabel *_maneuverSign;
    Matrix_6e1d3589 _worldPoint;
    struct PolylineCoordinate _routeOffset;
    NSString *_name;
    int _type;
    int _drivingSide;
    _Bool _isVisible;
    _Bool _isPicked;
}

@property (nonatomic, readonly) _Bool isOnRoute;
@property (nonatomic, readonly) _Bool isAwayFromRoute;
@property (nonatomic, readonly) _Bool isRamp;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) _Bool isStartOfRoadName;
@property (nonatomic, readonly) _Bool isInGuidance;
@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) _Bool isGuidanceStepStart;
@property (nonatomic, readonly) _Bool isVisible;
@property (nonatomic, readonly) VKLabelNavRoadLabel *maneuverSign;
@property (nonatomic, readonly) struct PolylineCoordinate routeOffset;
@property (nonatomic, readonly) _Bool isEtaFeature;
@property (nonatomic, readonly) _Bool isTrafficCameraFeature;
@property (nonatomic) _Bool isPicked;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (id)initWithGEOComposedRouteStep:(id)arg1;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 artworkCache:(struct VKLabelNavArtworkCache *)arg2;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;

@end
