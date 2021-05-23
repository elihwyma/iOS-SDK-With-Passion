/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@protocol GEOMapRoad <Swift>

@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) int formOfWay;
@property (nonatomic, readonly) int travelDirection;
@property (nonatomic, readonly) double roadWidth;
@property (nonatomic, readonly) unsigned long long speedLimit;
@property (nonatomic, readonly) _Bool speedLimitIsMPH;
@property (nonatomic, readonly) unsigned long long roadID;
@property (nonatomic, readonly) _Bool isTunnel;
@property (nonatomic, readonly) _Bool isBridge;
@property (nonatomic, readonly) _Bool isRail;
@property (nonatomic, readonly) int rampType;
@property (nonatomic, readonly) NSString *internalRoadName;

- (unsigned short)roadFeaturesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)roadEdgesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findRoadsFrom:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findRoadsFromPreviousIntersection:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findRoadsToPreviousIntersection:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findRoadsFromNextIntersection:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findRoadsToNextIntersection:completionHandler: /* Error: Ran out of types for this method. */;

@end
