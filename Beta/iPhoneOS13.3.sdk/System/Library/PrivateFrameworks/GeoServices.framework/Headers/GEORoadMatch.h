/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEORoadMatch : NSObject

{
    CDStruct_c8b5ad3f *_roadFeature;
    NSString *_roadName;
    CDStruct_2c43369c _coordinateOnRoad;
    double _courseOnRoad;
    double _distanceFromRoad;
    double _roadWidth;
    double _distanceFromJunction;
    double _junctionRadius;
}

@property (copy, nonatomic) NSString *roadName;
@property (nonatomic) CDStruct_c3b9c2ee coordinateOnRoad;
@property (nonatomic) double courseOnRoad;
@property (nonatomic) double distanceFromRoad;
@property (nonatomic) double roadWidth;
@property (nonatomic) double distanceFromJunction;
@property (nonatomic) double junctionRadius;
@property (nonatomic, readonly) CDStruct_c8b5ad3f *roadFeature;

- (void)dealloc;
- (id)initWithCoordinateOnRoad:(CDStruct_c3b9c2ee)arg1 courseOnRoad:(double)arg2;
- (void)setRoadFeature:(CDStruct_c8b5ad3f *)arg1;

@end
