/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, VKLabelNavRoad, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavJunction : NSObject

{
    shared_ptr_702c344d _tile;
    Matrix_8746f91e _tileCoordinate;
    CDStruct_3b01f0aa *_geoJunction;
    struct PolylineCoordinate _routeOffset;
    NSMutableArray *_roads;
    VKLabelNavRoad *_incomingRoad;
    VKLabelNavRoad *_outgoingRoad;
    float _distanceFromPreviousShieldLabel;
    int _preferredLabelPlacement;
    _Bool _isOnDualCarriageway;
    _Bool _hasSharedRouteDirection;
    Matrix_8746f91e _sharedRouteDirection;
    _Bool _foundRoads;
    _Bool _isOverpass;
    _Bool _isRouteOverpass;
    int _largestRoadClass;
    struct {
        CDStruct_58d0ca89 _field1;
        CDStruct_b2fbf00d _field2;
        float _field3;
        CDStruct_b2fbf00d _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        unsigned long long _field7;
        unsigned long long _field8;
        short _field9;
        short _field10;
        unsigned char _field11;
        float _field12;
        float _field13;
        unsigned int _field14;
        unsigned int _field15;
        unsigned char _field16;
        unsigned char _field17;
        _Bool _field18;
        _Bool _field19;
        _Bool _field20;
        _Bool _field21;
        _Bool _field22;
    } *_labelFeature;
    NSString *_name;
    VKLabelNavRoadLabel *_junctionSign;
    _Bool _areLabelsDisabled;
    unsigned long long _depthFromRoute;
    double _worldUnitsPerMeter;
    VKLabelNavJunction *_overpassJunction;
    _Bool _cachedSignVisibility[3];
    _Bool _isVisibilityCached[3];
    _Bool _isVisible;
    _Bool _isPicked;
    Matrix_6e1d3589 _worldCoordinate;
    double _sortValue;
    _Bool _isRouteRefineJunction;
}

@property (nonatomic, readonly) const shared_ptr_702c344d *tile;
@property (nonatomic, readonly) const CDStruct_3b01f0aa *geoJunction;
@property (nonatomic, readonly) Matrix_8746f91e tileCoordinate;
@property (nonatomic) struct PolylineCoordinate routeOffset;
@property (nonatomic, readonly) NSArray *roads;
@property (nonatomic, readonly) VKLabelNavRoad *outgoingRoad;
@property (nonatomic, readonly) VKLabelNavRoad *incomingRoad;
@property (nonatomic) float distanceFromPreviousShieldLabel;
@property (nonatomic) _Bool isOnDualCarriageway;
@property (nonatomic, readonly) _Bool hasSharedRouteDirection;
@property (nonatomic) Matrix_8746f91e sharedRouteDirection;
@property (nonatomic, readonly) _Bool isOnRoute;
@property (nonatomic, readonly) _Bool isIntraRamp;
@property (nonatomic, readonly) _Bool isTileEdgeJunction;
@property (nonatomic) _Bool isRouteRefineJunction;
@property (nonatomic, readonly) _Bool isRoadTerminus;
@property (nonatomic, readonly) _Bool isIntersection;
@property (nonatomic, readonly) _Bool isMultiRoadIntersection;
@property (nonatomic, readonly) _Bool isAwayFromRoute;
@property (nonatomic, readonly) _Bool isOffRouteGraph;
@property (nonatomic, readonly) _Bool isOverpass;
@property (nonatomic) _Bool isRouteOverpass;
@property (nonatomic, readonly) int largestRoadClass;
@property (nonatomic) unsigned long long depthFromRoute;
@property (nonatomic) VKLabelNavJunction *overpassJunction;
@property (nonatomic, readonly) double worldUnitsPerMeter;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) VKLabelNavRoadLabel *junctionSign;
@property (nonatomic, readonly) _Bool isVisible;
@property (nonatomic, readonly) int requiredLabelPlacement;
@property (nonatomic) int preferredLabelPlacement;
@property (nonatomic, readonly) _Bool isRamp;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) _Bool isStartOfRoadName;
@property (nonatomic, readonly) _Bool isInGuidance;
@property (nonatomic, readonly) long long intraRoadPriority;
@property (nonatomic, readonly) _Bool isGuidanceStepStart;
@property (nonatomic, readonly) _Bool isEtaFeature;
@property (nonatomic, readonly) _Bool isTrafficCameraFeature;
@property (nonatomic) _Bool isPicked;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (void)_updateWithNavContext:(struct NavContext *)arg1 threshold:(double)arg2;
- (void)_updateWithNavContext:(struct NavContext *)arg1;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isDrivingSideRight:(_Bool)arg2 artworkCache:(struct VKLabelNavArtworkCache *)arg3;
- (void)evaluateCrossStreets;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;
- (void)findRoads;
- (unsigned char)_signOrientationWithDrivingSide:(_Bool)arg1;
- (Matrix_6e1d3589)_anchorCoordinateForSignOrientation:(unsigned char)arg1;
- (id)initWithGEOJunction:(CDStruct_3b01f0aa *)arg1 routeOffset:(struct PolylineCoordinate)arg2 tile:(const shared_ptr_702c344d *)arg3;
- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const shared_ptr_702c344d *)arg4;
- (_Bool)matchesLocationForJunction:(id)arg1;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2;

@end
