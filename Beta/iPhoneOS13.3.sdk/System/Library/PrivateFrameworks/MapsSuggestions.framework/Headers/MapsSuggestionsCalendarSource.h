/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

@class EKCalendarVisibilityManager, EKEventStore, MapsSuggestionsCanKicker, MapsSuggestionsNetworkRequester, NSMutableDictionary, NSObject, NSSet, NSString;

@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource

{
    _Bool _suspended;
    EKEventStore *_eventStore;
    EKCalendarVisibilityManager *_calVisibilityManager;
    NSObject<OS_dispatch_queue> *_fimQueue;
    NSMutableDictionary *_handleToGEOMapItemMapping;
    NSString *_siriFoundThisString;
    MapsSuggestionsNetworkRequester *_requester;
    NSSet *_setOfEventReservationSubtypes;
    MapsSuggestionsCanKicker *_changedNotificationCanKicker;
}

@property _Bool suspended;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKCalendarVisibilityManager *calVisibilityManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fimQueue;
@property (retain, nonatomic) NSMutableDictionary *handleToGEOMapItemMapping;
@property (retain, nonatomic) NSString *siriFoundThisString;
@property (retain, nonatomic) MapsSuggestionsNetworkRequester *requester;
@property (retain, nonatomic) NSSet *setOfEventReservationSubtypes;
@property (retain, nonatomic) MapsSuggestionsCanKicker *changedNotificationCanKicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (weak, nonatomic) id <MapsSuggestionsSourceDelegate> delegate;

+ (_Bool)isEnabled;
+ (unsigned long long)disposition;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)_callUpdateSuggestionEntries;
- (void)eventStoreDidChange:(id)arg1;
- (_Bool)_createEntriesWithinPeriod:(struct NSDateInterval *)arg1 location:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_predicateForPeriod:(struct NSDateInterval *)arg1;
- (long long)_entryTypeFromSchema:(id)arg1;
- (_Bool)_addTravelFlightFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)_addTicketedEventFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)_addCarRentalFieldsToEntry:(id)arg1 event:(id)arg2;
- (_Bool)_addHotelFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)_addCalendarEventFieldsToEntry:(id)arg1 event:(id)arg2;
- (_Bool)_addRestaurantReservationFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)suggestionsEntriesAtLocation:(id)arg1 period:(struct NSDateInterval *)arg2 handler:(CDUnknownBlockType)arg3;

@end
