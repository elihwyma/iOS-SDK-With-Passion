/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@class geo_isolater;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData

{
    geo_isolater *_placeIso;
}

+ (id)sharedData;

- (id)init;
- (void)_populateWithGEOTransitPlaceCard:(id)arg1;
- (void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1;
- (void)populateWithPlaceActionDetails:(id)arg1;
- (_Bool)hasPlaceCard_PlaceActionDetails;
- (_Bool)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
- (_Bool)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
- (void)performPlaceCardStateUpdate:(CDUnknownBlockType)arg1;
- (void)clearPlaceCardStateData;
- (void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (_Bool)hasPlaceCardStateData;
- (_Bool)hasMapsServerData;
- (_Bool)hasSuggestionsData;
- (void)clearSuggestionsData;
- (_Bool)hasMapRestoreData;

@end
