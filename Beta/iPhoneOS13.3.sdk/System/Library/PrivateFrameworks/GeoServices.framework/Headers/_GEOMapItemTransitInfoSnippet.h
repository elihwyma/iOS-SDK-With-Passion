/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOPDTransitInfoSnippet, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfoSnippet : NSObject

{
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    NSArray *_labelItems;
    NSString *_displayName;
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

- (id)initWithTransitInfoSnippet:(id)arg1;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(CDUnknownBlockType)arg4;
- (id)linesForSystem:(id)arg1;
- (unsigned long long)numAdditionalDeparturesForSequence:(id)arg1;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(CDUnknownBlockType)arg3 hasSequencesWithNoDirection:(out _Bool *)arg4;
- (id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out _Bool *)arg4;
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(CDUnknownBlockType)arg2 excludingIncidentEntities:(id)arg3;
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;
- (id)headSignsForLine:(id)arg1;

@end
