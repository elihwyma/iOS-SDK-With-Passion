/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOMapLine <Swift>

@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *coordinates;
@property (nonatomic, readonly) double length;

- (unsigned short)distanceFromCoordinate:outSegmentCoordinate: /* Error: Ran out of types for this method. */;

@end
