/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOSpatialPlaceLookupParameters : NSObject

{
    CDStruct_2c43369c _coordinate;
    double _radius;
    NSArray *_categories;
    int _maxResultCount;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) int maxResultCount;

- (id)init;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4;

@end
