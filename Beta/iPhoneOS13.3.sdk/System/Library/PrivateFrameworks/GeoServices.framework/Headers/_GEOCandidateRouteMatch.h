/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOCandidateRouteMatch : NSObject

{
    _Bool _isGoodMatch;
    double _score;
    struct PolylineCoordinate _routeCoordinate;
    CDStruct_2c43369c _locationCoordinate;
    unsigned long long _stepIndex;
    double _distanceFromRoute;
    double _maxDistance;
    double _distanceMatchScore;
    double _distanceWeight;
    double _courseDelta;
    double _maxCourseDelta;
    double _courseMatchScore;
    double _courseWeight;
}

@property (nonatomic) _Bool isGoodMatch;
@property (nonatomic) double score;
@property (nonatomic) struct PolylineCoordinate routeCoordinate;
@property (nonatomic) CDStruct_c3b9c2ee locationCoordinate;
@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double maxDistance;
@property (nonatomic) double distanceMatchScore;
@property (nonatomic) double distanceWeight;
@property (nonatomic) double courseDelta;
@property (nonatomic) double maxCourseDelta;
@property (nonatomic) double courseMatchScore;
@property (nonatomic) double courseWeight;

- (id)description;
- (id).cxx_construct;
- (id)initWithRoute:(id)arg1;

@end
