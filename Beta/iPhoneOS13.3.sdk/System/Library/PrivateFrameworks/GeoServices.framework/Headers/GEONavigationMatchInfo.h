/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEONavigationMatchInfo : NSObject

{
    double routeMatchScore;
    double distanceFromRoute;
    double maxDistance;
    double distanceMatchScore;
    double distanceWeight;
    double courseDelta;
    double maxCourseDelta;
    double courseMatchScore;
    double courseWeight;
    double roadWidthOnRoute;
    double distanceFromRoad;
    double roadCourseDelta;
    double distanceFromNearestJunction;
}

@property (nonatomic) double routeMatchScore;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double maxDistance;
@property (nonatomic) double distanceMatchScore;
@property (nonatomic) double distanceWeight;
@property (nonatomic) double courseDelta;
@property (nonatomic) double maxCourseDelta;
@property (nonatomic) double courseMatchScore;
@property (nonatomic) double courseWeight;
@property (nonatomic) double roadWidthOnRoute;
@property (nonatomic) double distanceFromRoad;
@property (nonatomic) double roadCourseDelta;
@property (nonatomic) double distanceFromNearestJunction;

- (id)description;

@end
