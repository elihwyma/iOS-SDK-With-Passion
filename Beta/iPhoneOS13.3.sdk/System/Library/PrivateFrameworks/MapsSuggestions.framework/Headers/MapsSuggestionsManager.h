/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class GEOAutomobileOptions, MapsSuggestionsCanKicker, MapsSuggestionsFakePullSource, MapsSuggestionsTracker, NSDate, NSHashTable, NSString;

@protocol MapsSuggestionsLocationUpdater, MapsSuggestionsStrategy, OS_dispatch_queue;

@interface MapsSuggestionsManager : NSObject <Swift>

{
    id <MapsSuggestionsStrategy> _strategy;
    struct NSMutableDictionary *_additionalFiltersPerSink;
    unsigned long long _countToRequest;
    MapsSuggestionsTracker *_tracker;
    NSDate *_etaValidUntil;
    struct NSMutableSet *_sources;
    NSHashTable *_sinks;
    struct NSMutableDictionary *_storage;
    struct NSArray *_latestResults;
    NSObject<OS_dispatch_queue> *_gatheringQueue;
    NSObject<OS_dispatch_queue> *_storageQueue;
    _Bool _dirtyFlag;
    int _defaultTansportType;
    MapsSuggestionsCanKicker *_expiredEntryInvalidator;
    MapsSuggestionsCanKicker *_wipeStaleETAWiper;
    MapsSuggestionsCanKicker *_deferredSourcesUpdater;
    int _mapType;
    long long _style;
    GEOAutomobileOptions *_automobileOptions;
    id <MapsSuggestionsLocationUpdater> _locationUpdater;
    MapsSuggestionsFakePullSource *_fakeSource;
}

@property (retain, nonatomic) MapsSuggestionsFakePullSource *fakeSource;
@property (retain, nonatomic) id <MapsSuggestionsStrategy> strategy;
@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) long long style;
@property (weak, nonatomic) id <MapsSuggestionsLocationUpdater> locationUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (void)dealloc;
- (struct NSDictionary *)storage;
- (struct NSSet *)sources;
- (void)clearResults;
- (_Bool)_removeEntry:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)_sendInvalidateToAllSinks;
- (void)_wipeStaleETAs;
- (void)_updateAllSourcesOnce;
- (void)_stopAllSources;
- (void)_updateCurrentLocation:(id)arg1;
- (void)scheduleUpdateAllSourcesOnce;
- (void)_updateSource:(id)arg1 repeat:(_Bool)arg2;
- (void)_updateSource:(id)arg1 forType:(long long)arg2 repeat:(_Bool)arg3;
- (void)_startSource:(id)arg1;
- (struct NSArray *)_pruneExpiredFromEntries:(struct NSArray *)arg1;
- (void)_pruneExpiredSourceEntries;
- (void)_scheduleInvalidateSinksOnFirstExpiredOfEntries:(struct NSArray *)arg1;
- (void)_startLocationUpdater;
- (void)_startAllSources;
- (void)_stopLocationUpdater;
- (void)_restartLocationUpdaterIfNeeded;
- (struct NSArray *)_filteredEntries:(struct NSArray *)arg1 forSink:(struct NSString *)arg2 limit:(unsigned long long)arg3;
- (_Bool)_sink:(struct NSString *)arg1 allowsEntry:(id)arg2;
- (_Bool)_loadStorageFromFile:(id)arg1;
- (_Bool)_updateResult;
- (unsigned long long)_deleteEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2;
- (unsigned long long)_addOrUpdateSuggestionEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2;
- (_Bool)_removeEntry:(id)arg1 sourceName:(struct NSString *)arg2;
- (void)setTitleFormatter:(id)arg1 forType:(long long)arg2;
- (unsigned long long)deleteEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2;
- (void)hintRefreshOfType:(long long)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (unsigned long long)addOrUpdateSuggestionEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2;
- (_Bool)attachSource:(id)arg1;
- (_Bool)detachSource:(id)arg1;
- (id)initWithStrategy:(id)arg1 locationUpdater:(id)arg2 ETARequirements:(id)arg3;
- (void)attachSink:(id)arg1;
- (_Bool)detachSink:(id)arg1;
- (_Bool)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(CDUnknownBlockType)arg4 onQueue:(id)arg5;
- (void)addAdditionalFilter:(id)arg1 forSink:(struct NSString *)arg2;
- (void)removeAdditionalFilter:(id)arg1 forSink:(struct NSString *)arg2;
- (_Bool)saveStorageToFile:(id)arg1;
- (_Bool)loadStorageFromFile:(id)arg1;
- (_Bool)loadStorageFromFile:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (unsigned long long)clearAllEntriesFromSource:(struct NSString *)arg1;
- (void)trackerRefreshedETAsUntil:(id)arg1;
- (id)dumpStorage;
- (struct NSArray *)storageForSource:(id)arg1;
- (struct NSSet *)sinks;
- (void)awaitGatheringQueue;
- (void)awaitStorageQueue;
- (void)sendInvalidateToAllSinks;

@end
