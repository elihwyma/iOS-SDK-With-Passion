/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@protocol GEOMapTransitPoint <Swift>

@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) unsigned long long transitID;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) CDStruct_90e2a262 boundingRect;
@property (nonatomic, readonly) CDStruct_c3b9c2ee *polygonPoints;
@property (nonatomic, readonly) long long polygonPointsCount;

- (unsigned short)findGeometryWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)distanceInMetersFrom: /* Error: Ran out of types for this method. */;
- (unsigned short)findAccessPoints:completionHandler: /* Error: Ran out of types for this method. */;

@end
