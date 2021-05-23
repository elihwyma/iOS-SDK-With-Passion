/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class CLGeocoder, CLInUseAssertion, CLLocationManager, CNContactStore, EKEventStore, EKOccurrenceCacheLocationSearch, EKStructuredLocation, MKLocalSearch, MKLocalSearchCompleter, NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@protocol CNCancelable, EKUILocationSearchModelDelegate, GEOMapServiceCompletionTicket, OS_dispatch_queue;

@interface EKUILocationSearchModel : NSObject

{
    CLLocationManager *_locationManager;
    CLInUseAssertion *_locationAssertion;
    MKLocalSearchCompleter *_completer;
    EKStructuredLocation *_currentLocation;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CNContactStore *_contactStore;
    id <CNCancelable> _contactsSearchToken;
    NSObject<OS_dispatch_queue> *_recentsQueue;
    NSObject<OS_dispatch_queue> *_eventsQueue;
    EKEventStore *_eventStore;
    EKOccurrenceCacheLocationSearch *_eventsSearch;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSObject<OS_dispatch_queue> *_conferenceRoomProcessingQueue;
    NSOperationQueue *_conferenceRoomOperationQueue;
    NSMutableArray *_mutableConferenceRoomSearchResults;
    NSMutableDictionary *_conferenceRoomAddressesToConferenceRooms;
    NSMutableArray *_recentsSearchResults;
    NSMutableArray *_frequentsSearchResults;
    NSMutableArray *_eventsSearchResults;
    NSMutableArray *_contactsSearchResults;
    unsigned long long _supportedSearchTypes;
    NSArray *_mapCompletionSearchResults;
    NSArray *_textualSearchResults;
    id <EKUILocationSearchModelDelegate> _delegate;
}

@property (retain, nonatomic) EKStructuredLocation *currentLocation;
@property (nonatomic) unsigned long long supportedSearchTypes;
@property (nonatomic, readonly) NSArray *mapCompletionSearchResults;
@property (nonatomic, readonly) NSArray *contactsSearchResults;
@property (nonatomic, readonly) NSArray *recentsSearchResults;
@property (nonatomic, readonly) NSArray *frequentsSearchResults;
@property (nonatomic, readonly) NSArray *eventsSearchResults;
@property (nonatomic, readonly) NSArray *textualSearchResults;
@property (nonatomic, readonly) NSArray *conferenceRoomSearchResults;
@property (nonatomic) id <EKUILocationSearchModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket;

- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopUpdatingLocation;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)updateContacts:(id)arg1;
- (void)cancelSearch;
- (void)completerDidUpdateResults:(id)arg1 finished:(_Bool)arg2;
- (void)completerDidFail:(id)arg1 error:(id)arg2;
- (id)initWithEventStore:(id)arg1;
- (void)resetContactsSearchResults;
- (void)resetEventsSearchResults;
- (void)resetConferenceRoomSearchResults;
- (void)resetSearchResults:(_Bool)arg1;
- (void)updateRecents:(id)arg1;
- (void)searchFrequentLocations:(id)arg1;
- (void)searchConferenceRooms:(id)arg1;
- (void)updateEventLocations:(id)arg1;
- (void)_updateContactsSearchWithResults:(id)arg1 forToken:(id)arg2;
- (void)dedupeResults;
- (id)splitEventLocations:(id)arg1;
- (void)_processDirectorySearchResultSet:(id)arg1 forOperation:(id)arg2;
- (void)_addDiscoveredConferenceRooms:(id)arg1;
- (void)_handleAvailabilityResults:(id)arg1 forOperation:(id)arg2;
- (id)availabilityRequestForConferenceRooms:(id)arg1 duringEvent:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addLocationToRecents:(id)arg1 addressString:(id)arg2;
- (void)getCurrentLocation;
- (void)beginSearchForTerm:(id)arg1;
- (void)updateConferenceRoomAvailability:(id)arg1 duringEvent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addConferenceRoomToRecents:(id)arg1 fromSource:(id)arg2;
- (_Bool)removeRecentLocation:(id)arg1;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)selectLocation:(id)arg1;
- (void)selectCurrentLocation;

@end
