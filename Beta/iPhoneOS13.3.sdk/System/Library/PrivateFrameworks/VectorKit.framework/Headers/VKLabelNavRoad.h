/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKLabelNavJunction, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoad : NSObject

{
    shared_ptr_702c344d _tile;
    CDStruct_a190bee8 *_data;
    unsigned long long _vertexIndexA;
    unsigned long long _vertexIndexB;
    CDStruct_3b01f0aa *_junctionA;
    CDStruct_3b01f0aa *_junctionB;
    VKLabelNavJunction *_navJunctionA;
    vector_8c4749e3 _simplifiedPoints;
    Matrix_8746f91e _direction;
    _Bool _isRoadLabelUnique;
    _Bool _isOnRoute;
    _Bool _isStartOfRoadName;
    _Bool _isInGuidance;
    _Bool _isGuidanceStepStart;
    _Bool _areLabelsDisabled;
    struct PolylineCoordinate _routeOffset;
    float _routeCrossProduct;
    long long _intraRoadPriority;
    double _length;
    NSString *_name;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelNavRoadLabel *_roadSign;
    VKLabelNavRoadLabel *_roadShield;
    _Bool _isVisibilityCached[3];
    _Bool _cachedSignVisibility[3];
    _Bool _cachedShieldVisibility[3];
    _Bool _hasVisibleSigns;
    _Bool _hasVisibleShields;
    _Bool _suppressRoadSignIfShieldPresent;
    _Bool _isPicked;
}

@property (nonatomic, readonly) const shared_ptr_702c344d *tile;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) const char *cstrName;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) NSString *shieldGroup;
@property (nonatomic, readonly) CDStruct_3b01f0aa *junctionB;
@property (nonatomic, readonly) VKLabelNavJunction *navJunctionA;
@property (nonatomic) Matrix_8746f91e direction;
@property (nonatomic) _Bool isOnRoute;
@property (nonatomic) _Bool isStartOfRoadName;
@property (nonatomic) _Bool isInGuidance;
@property (nonatomic) _Bool isGuidanceStepStart;
@property (nonatomic) _Bool areLabelsDisabled;
@property (nonatomic) struct PolylineCoordinate routeOffset;
@property (nonatomic) float routeCrossProduct;
@property (nonatomic) long long intraRoadPriority;
@property (nonatomic) _Bool isRoadLabelUnique;
@property (nonatomic, readonly) _Bool isAwayFromRoute;
@property (nonatomic, readonly) _Bool suppressRoadSignIfShieldPresent;
@property (nonatomic, readonly) _Bool isRamp;
@property (nonatomic, readonly) _Bool isOnewayToJunction;
@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) unsigned char roadSignAlignment;
@property (nonatomic, readonly) _Bool isEtaFeature;
@property (nonatomic, readonly) _Bool isTrafficCameraFeature;
@property (nonatomic) _Bool isPicked;

- (void)dealloc;
- (double)length;
- (id)description;
- (id).cxx_construct;
- (_Bool)hasShield;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (_Bool)hasVisibleSigns;
- (_Bool)hasVisibleShields;
- (void)_updateWithNavContext:(struct NavContext *)arg1 threshold:(double)arg2;
- (void)_updateWithNavContext:(struct NavContext *)arg1;
- (void)_worldRoadPoints:(vector_8c4749e3 *)arg1;
- (_Bool)_worldPointForRoadOffset:(float)arg1 worldPoint:(Mercator3_d8bb135c *)arg2;
- (id)labelWithType:(_Bool)arg1;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(Matrix_6e1d3589)arg2 rayVector:(Matrix_8746f91e)arg3 roadGraph:(id)arg4;
- (_Bool)_findLabelAnchorPoint:(Mercator3_d8bb135c *)arg1 isShieldLabel:(_Bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (id)_newLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(_Bool)arg2 worldPoint:(Matrix_6e1d3589)arg3 alignment:(unsigned char)arg4 artworkCache:(struct VKLabelNavArtworkCache *)arg5;
- (void)clearRoadSign;
- (void)clearRoadShield;
- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const shared_ptr_702c344d *)arg4;
- (void)getRoadEdge:(CDStruct_91f75a7f *)arg1;
- (_Bool)matchesRoadEdge:(const CDStruct_91f75a7f *)arg1;
- (_Bool)matchesRoad:(id)arg1;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(_Bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7 artworkCache:(struct VKLabelNavArtworkCache *)arg8;
- (void)recreateRoadSignWithAlignment:(unsigned char)arg1 navContext:(struct NavContext *)arg2 artworkCache:(struct VKLabelNavArtworkCache *)arg3;
- (void)recreateRoadShieldWithNavContext:(struct NavContext *)arg1 artworkCache:(struct VKLabelNavArtworkCache *)arg2;
- (void)appendSimplifiedWorldRoadPoints:(vector_8c4749e3 *)arg1;

@end
