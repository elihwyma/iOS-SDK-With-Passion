/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class MapsSuggestionsFwdGeocodingRelevanceScoreProvider, MapsSuggestionsPortraitRelevanceScoreProvider, MapsSuggestionsRelevanceScorer, MapsSuggestionsRoutineRelevanceScoreProvider, NSString, NSXPCConnection;

@protocol OS_dispatch_source;

@interface MapsSuggestionsInsights : NSObject <Swift>

{
    struct Queue _queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsFwdGeocodingRelevanceScoreProvider *_fwdGeoCodingRoutineScoreProvider;
    MapsSuggestionsRoutineRelevanceScoreProvider *_routineScoreProvider;
    MapsSuggestionsPortraitRelevanceScoreProvider *_portraitScoreProvider;
    MapsSuggestionsRelevanceScorer *_relevanceScorer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)sharedInsights;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_closeConnection;
- (void)preload;
- (void)_unscheduleCloseConnection;
- (_Bool)_openConnectionIfNecessary;
- (void)_scheduleCloseConnection;
- (void)_initCloseTimerIfNecessary;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (id)signalPackForHere;
- (double)isTouristHere;
- (_Bool)signalPackForDestinationMapItem:(struct GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)signalPackForHereWithHandler:(CDUnknownBlockType)arg1;
- (id)confidenceScoresForMapItems:(id)arg1;
- (id)confidenceScoresForContacts:(id)arg1 addresses:(id)arg2;
- (id)signalPackForDestinationMapItem:(struct GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;

@end
