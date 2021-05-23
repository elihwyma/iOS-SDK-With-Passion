/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

#import <MapsSuggestions/Swift-Protocol.h>

@class CLLocation, GEOAutomobileOptions, GEOLocationShifter, MapsSuggestionsCanKicker, MapsSuggestionsDonater, MapsSuggestionsETARequester, MapsSuggestionsETARequirements, MapsSuggestionsFlightUpdater, MapsSuggestionsManager, MapsSuggestionsMutableWeakEntries, MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor, NSMutableDictionary, NSString;

@protocol MapsSuggestionsFlightRequester, OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsTracker : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_refreshTimer;
    double _refreshInterval;
    double _refreshDeferTime;
    int _transportType;
    MapsSuggestionsManager *_manager;
    GEOLocationShifter *_locationShifter;
    struct NSMutableDictionary *_etaTitleFormatters;
    struct NSMutableDictionary *_distanceTitleFormatters;
    _Bool _shouldBeRunning;
    MapsSuggestionsETARequester *_etaRequester;
    MapsSuggestionsDonater *_donater;
    MapsSuggestionsCanKicker *_currentLocationWiper;
    NSMutableDictionary *_previousETAs;
    id _transportTypeChangedListener;
    id <MapsSuggestionsFlightRequester> _flightRequester;
    MapsSuggestionsFlightUpdater *_flightUpdater;
    int _mapType;
    MapsSuggestionsETARequirements *_requirements;
    GEOAutomobileOptions *_automobileOptions;
    CLLocation *_currentLocation;
    MapsSuggestionsMutableWeakEntries *_trackedEntries;
    MapsSuggestionsNetworkRequester *_networkRequester;
    MapsSuggestionsPredictor *_predictor;
}

@property (retain) CLLocation *currentLocation;
@property (retain, nonatomic) MapsSuggestionsMutableWeakEntries *trackedEntries;
@property (retain, nonatomic) MapsSuggestionsNetworkRequester *networkRequester;
@property (retain, nonatomic) MapsSuggestionsPredictor *predictor;
@property (copy) MapsSuggestionsETARequirements *requirements;
@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)_isLocationShiftRequiredForLocation:(id)arg1;

- (void)dealloc;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)unschedule;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 withShiftRequestBlock:(CDUnknownBlockType)arg3;
- (void)_refresh;
- (id)initWithManager:(id)arg1 requirements:(id)arg2;
- (void)trackSuggestionEntries:(struct NSArray *)arg1 transportType:(int)arg2;
- (void)scheduleRefresh;
- (void)resetAllTitleFormatting;
- (void)setTitleFormatter:(id)arg1 forType:(long long)arg2;
- (void)_scheduleRefresh;
- (void)_unschedule;
- (_Bool)_isMatchingTransportType:(int)arg1;
- (_Bool)_isUnusableETA:(id)arg1;
- (void)_captureSignalsFromEntries:(struct NSArray *)arg1;
- (_Bool)_hasTitleFormatterForType:(long long)arg1;
- (void)_prunePreviousETAs;
- (id)_etaTitleFormatterForType:(long long)arg1;
- (id)_bestValidOfflineETAForEntry:(id)arg1 destinationKey:(id)arg2;
- (void)_rememberETA:(id)arg1 forEntry:(id)arg2;
- (void)_decorateETA:(id)arg1 forEntry:(id)arg2;
- (id)_distanceTitleFormatterForType:(long long)arg1;
- (void)_decorateFlightInfoForEntry:(id)arg1;
- (void)_scheduleRefreshIfCurrentLocationIsMuchBetterThanLocation:(id)arg1;
- (void)_shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)_requestDistances;
- (void)_requestETAs;
- (void)_requestFlightInfo;
- (void)_resetAllTitleFormatting;

@end
