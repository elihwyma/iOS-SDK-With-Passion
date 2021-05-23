/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class GEOLocationShifter, MapsSuggestionsLimitedDictionary, NSMutableDictionary, NSString;

@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsRoutineRequester;

@interface MapsSuggestionsRoutine : NSObject <Swift>

{
    id <MapsSuggestionsRoutineRequester> _routineRequester;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue _queue;
    NSMutableDictionary *_loiLocationsForHome;
    NSMutableDictionary *_loiLocationsForWork;
    NSMutableDictionary *_loiVisits;
    MapsSuggestionsLimitedDictionary *_mapItemCache;
    MapsSuggestionsLimitedDictionary *_mapItemCacheOrigin;
    GEOLocationShifter *_locationShifter;
    _Bool _areFrequentLocationsAvailable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (id).cxx_construct;
- (_Bool)fetchSuggestedShortcutsForType:(long long)arg1 minVisits:(unsigned long long)arg2 maxAge:(double)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)fetchLocationsSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (id)initWithRoutineRequester:(id)arg1 networkRequester:(id)arg2;
- (id)networkRequester;
- (long long)_convertType:(long long)arg1 source:(id)arg2;
- (_Bool)_addFieldsToSuggestionsEntry:(id)arg1 fromRTMapItem:(id)arg2;
- (_Bool)_addCalendarFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (_Bool)_addRecentsFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (_Bool)_addParkedCarFieldsToSuggestionsEntry:(id)arg1 vehicleEvent:(id)arg2;
- (_Bool)_addResumeRouteFieldsToSuggestionEntry:(id)arg1 fromSource:(id)arg2;
- (void)_addLabelForEntry:(id)arg1;
- (void)_setFrequentLocationsAreAvailable:(_Bool)arg1;
- (id)_suggestionEntryForPLOI:(id)arg1;
- (void)_resolveMapItemsAndAddEntries:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_treatPLOIs:(id)arg1 stepName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)_addMapItemToShortcut:(id)arg1 fromLOI:(id)arg2 group:(id)arg3;
- (void)_treatLOIs:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)fetchEntriesForLocation:(id)arg1 period:(struct NSDateInterval *)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)readMeCardWithMinVisits:(unsigned long long)arg1 maxAge:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)updateFixedLOIs;
- (unsigned long long)countHomeLOIs;
- (unsigned long long)countWorkLOIs;
- (_Bool)startParkedCarEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopParkedCarEvents;
- (void)removeParkedCarsAllowingFeature:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (double)distanceToNearest:(long long)arg1;
- (_Bool)touristBitForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)routineRequester;

@end
