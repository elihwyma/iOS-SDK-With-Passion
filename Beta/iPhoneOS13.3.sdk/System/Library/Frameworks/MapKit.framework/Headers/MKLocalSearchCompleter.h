/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, GEOAutocompleteSessionData, GEOClientRankingModel, GEOMapServiceTraits, GEORetainedSearchMetadata, GEOSearchCategory, GEOSortPriorityMapping, MKLocalSearchCompletion, MKPointOfInterestFilter, NSArray, NSMutableArray, NSString, NSTimer;

@protocol MKAutocompleteAnalyticsProvider, MKLocalSearchCompleterDelegate, MKLocationManagerOperation;

@interface MKLocalSearchCompleter : NSObject

{
    NSString *_queryFragment;
    CDStruct_b7cb895d _region;
    GEOSearchCategory *_categoryFilter;
    NSArray *_filters;
    GEORetainedSearchMetadata *_retainedSearchMetadata;
    id <MKLocalSearchCompleterDelegate> _delegate;
    id _context;
    NSString *_identifier;
    long long _listType;
    double _timeSinceLastInBoundingRegion;
    CLLocation *_deviceLocation;
    unsigned long long _mapType;
    double _lastRequestTime;
    _Bool _dirty;
    _Bool _resultsAreCurrent;
    NSArray *_results;
    NSArray *_sections;
    GEOClientRankingModel *_clientRankingModel;
    GEOSortPriorityMapping *_sortPriorityMapping;
    NSTimer *_timer;
    int _source;
    id <MKLocationManagerOperation> _singleLocationUpdate;
    GEOMapServiceTraits *_traits;
    unsigned long long _maxNumberOfConcurrentRequests;
    NSMutableArray *_inFlightTickets;
    NSMutableArray *_pendingTickets;
    _Bool _statefulQueriesEnabled;
    GEOAutocompleteSessionData *_autocompleteSessionData;
    _Bool _shouldDisplayNoResults;
    _Bool _shouldEnableRAPForNoResults;
    _Bool _autocompleteTopSectionIsQuerySuggestions;
    _Bool _showAutocompleteClientSource;
    _Bool _shouldPreloadTransitInfo;
    long long _filterType;
    unsigned long long _resultTypes;
    MKPointOfInterestFilter *_pointOfInterestFilter;
    id <MKAutocompleteAnalyticsProvider> _analyticsProvider;
    MKLocalSearchCompletion *_tappedQuerySuggestionCompletion;
    long long _privateFilterType;
}

@property (nonatomic) CDStruct_b7cb895d boundingRegion;
@property (copy, nonatomic) NSString *fragment;
@property (nonatomic) long long entriesType;
@property (retain, nonatomic) id <MKAutocompleteAnalyticsProvider> analyticsProvider;
@property (retain, nonatomic) GEOSearchCategory *categoryFilter;
@property (retain, nonatomic) CLLocation *deviceLocation;
@property (retain, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (weak, nonatomic) id context;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long listType;
@property (nonatomic) double timeSinceLastInBoundingRegion;
@property (nonatomic) unsigned long long mapType;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic, readonly, getter=_shouldDisplayNoResults) _Bool shouldDisplayNoResults;
@property (nonatomic, readonly, getter=_shouldEnableRAPForNoResults) _Bool shouldEnableRAPForNoResults;
@property (nonatomic, readonly, getter=_clientRankingModel) GEOClientRankingModel *clientRankingModel;
@property (nonatomic, readonly, getter=_sortPriorityMapping) GEOSortPriorityMapping *sortPriorityMapping;
@property (nonatomic, readonly, getter=_autocompleteTopSectionIsQuerySuggestions) _Bool autocompleteTopSectionIsQuerySuggestions;
@property (retain, nonatomic, getter=_tappedQuerySuggestionCompletion, setter=_setTappedQuerySuggestionCompletion:) MKLocalSearchCompletion *tappedQuerySuggestionCompletion;
@property (nonatomic, readonly, getter=_showAutocompleteClientSource) _Bool showAutocompleteClientSource;
@property (nonatomic, getter=_shouldPreloadTransitInfo, setter=_setShouldPreloadTransitInfo:) _Bool shouldPreloadTransitInfo;
@property (nonatomic, readonly, getter=_sections) NSArray *sections;
@property (nonatomic, getter=_privateFilterType, setter=_setPrivateFilterType:) long long privateFilterType;
@property (nonatomic) _Bool statefulQueriesEnabled;
@property (copy, nonatomic) NSString *queryFragment;
@property (nonatomic) CDStruct_b7cb895d region;
@property (nonatomic) long long filterType;
@property (nonatomic) unsigned long long resultTypes;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (weak, nonatomic) id <MKLocalSearchCompleterDelegate> delegate;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly, getter=isSearching) _Bool searching;

- (id)init;
- (void)dealloc;
- (void)setSource:(int)arg1;
- (int)source;
- (void)cancel;
- (void)_updateFilters;
- (void)retry;
- (void)_cancelTimer;
- (void)_notifyDelegatesWithResults:(id)arg1 sections:(id)arg2 shouldDisplayNoResults:(_Bool)arg3 shouldEnableRAPForNoResults:(_Bool)arg4 ticket:(id)arg5;
- (void)_handleCompletion:(id)arg1 shouldDisplayNoResults:(_Bool)arg2 shouldEnableRAPForNoResults:(_Bool)arg3 forTicket:(id)arg4;
- (void)_markDirty;
- (id)_completionTicketForPrivateFilterType:(long long)arg1 traits:(id)arg2;
- (id)_completionTicketForFilterTypeWithTraits:(id)arg1;
- (void)_schedulePendingRequest;
- (void)_handleError:(id)arg1 forTicket:(id)arg2;
- (double)timeToNextRequest;
- (void)_scheduleRequestWithTimeToNextRequest:(double)arg1;
- (void)_markDirtyAndScheduleRequestWithTimeToNextRequest:(double)arg1;
- (void)_fireRequest;
- (_Bool)resultsAreCurrent;
- (void)clearQueryState;

@end
