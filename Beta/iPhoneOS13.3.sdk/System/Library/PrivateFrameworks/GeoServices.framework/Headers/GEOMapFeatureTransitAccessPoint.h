/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOMapFeatureTransitAccessPoint : NSObject

{
    CDStruct_9bbfa40f *_feature;
    CDStruct_2c43369c _coordinate;
}

@property (nonatomic, readonly) CDStruct_9bbfa40f *feature;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) _Bool isEntrance;
@property (nonatomic, readonly) _Bool isExit;
@property (nonatomic, readonly) double radiusMeters;

- (void)dealloc;
- (id)initWithFeature:(CDStruct_9bbfa40f *)arg1;

@end
