/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOLocation, GEOQuickETATransitDeparturesInfo, NSMutableArray, NSString;

@interface GEOQuickETAResponse : NSObject

{
    GEOLocation *_sourceLocation;
    GEOLocation *_destinationLocation;
    unsigned int _responseETASeconds;
    unsigned int _baselineETASeconds;
    double _distance;
    NSString *_routeDescription;
    GEOQuickETATransitDeparturesInfo *_transitDeparturesInfo;
    double _distanceToDepartureStop;
    double _walkingDurationToDepartureStop;
    NSMutableArray *_sortedETAs;
}

@property (nonatomic, readonly) GEOLocation *sourceLocation;
@property (nonatomic, readonly) GEOLocation *destinationLocation;
@property (nonatomic, readonly) unsigned int responseETASeconds;
@property (nonatomic, readonly) unsigned int baselineETASeconds;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) NSString *routeDescription;
@property (nonatomic, readonly) GEOQuickETATransitDeparturesInfo *transitDeparturesInfo;
@property (nonatomic, readonly) double distanceToDepartureStop;
@property (nonatomic, readonly) double walkingDurationToDepartureStop;
@property (nonatomic, readonly) NSMutableArray *sortedETAs;

- (id)initWithETAResult:(id)arg1 fromRequest:(id)arg2;
- (id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2;

@end
