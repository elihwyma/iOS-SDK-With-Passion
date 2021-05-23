/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOPDTransitInfo, GEOPDTransitSchedule, NSArray, NSDate, NSMapTable, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfo : NSObject

{
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
    NSArray *_systems;
    NSArray *_lines;
    NSArray *_departureSequences;
    NSTimeZone *_timeZone;
    NSArray *_incidents;
    _Bool _hasTransitIncidentComponent;
    NSDate *_incidentExpirationDate;
    NSArray *_connections;
    NSString *_displayName;
    NSMapTable *_cachedHeadSignsForLine;
    CDStruct_2c43369c _coordinate;
    NSArray *_transitStops;
    GEOComposedRoute *_composedRoute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departureSequences;
@property (nonatomic, readonly) double timeToLive;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSDate *lastFullScheduleValidDate;
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

- (id)initWithTransitInfo:(id)arg1 schedule:(id)arg2 timeZone:(id)arg3 incidents:(id)arg4 hasTransitIncidentComponent:(_Bool)arg5 incidentExpirationDate:(id)arg6 providerID:(int)arg7 coordinate:(CDStruct_c3b9c2ee)arg8 transitStops:(id)arg9 composedRoute:(id)arg10;
- (id)_departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 ignoreDirectionFilter:(_Bool)arg3 direction:(id)arg4 validForDateFromBlock:(CDUnknownBlockType)arg5;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;
- (id)linesForSystem:(id)arg1;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)arg1;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(CDUnknownBlockType)arg3 hasSequencesWithNoDirection:(out _Bool *)arg4;
- (id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out _Bool *)arg4;
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(CDUnknownBlockType)arg2 excludingIncidentEntities:(id)arg3;
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;
- (id)headSignsForLine:(id)arg1;

@end
