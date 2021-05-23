/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedRoute, NSArray, NSString;

@protocol GEOMapItemTransitInfo <Swift>

@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSArray *connections;
@property (nonatomic, readonly) NSArray *systems;
@property (nonatomic, readonly) unsigned long long systemsCount;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly) unsigned long long linesCount;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) _Bool isTransitIncidentsTTLExpired;
@property (nonatomic, readonly) _Bool hasTransitIncidentComponent;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *transitTripStops;
@property (nonatomic, readonly) GEOComposedRoute *composedRoute;

- (unsigned short)linesForSystem: /* Error: Ran out of types for this method. */;

@end
