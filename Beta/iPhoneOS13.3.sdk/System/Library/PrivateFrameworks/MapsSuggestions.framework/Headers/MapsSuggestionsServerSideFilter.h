/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

@class NSString;

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter

{
    _Bool _enabledEntryTypeUnknown;
    _Bool _enabledEntryTypeHome;
    _Bool _enabledEntryTypeWork;
    _Bool _enabledEntryTypeCalendarEvent;
    _Bool _enabledEntryTypeFrequentLocation;
    _Bool _enabledEntryTypeRecentHistory;
    _Bool _enabledEntryTypeFavoritePlace;
    _Bool _enabledEntryTypeParkedCar;
    _Bool _enabledEntryTypeRestaurantReservation;
    _Bool _enabledEntryTypeRidesharing;
    _Bool _enabledEntryTypeCarPlayLowEnergy;
    _Bool _enabledEntryTypeResumeRoute;
    _Bool _enabledEntryTypeAppConnection;
    _Bool _enabledEntryTypeHotel;
    _Bool _enabledEntryTypeCarRental;
    _Bool _enabledEntryTypeTravelFlight;
    _Bool _enabledEntryTypeTicketedEvent;
    _Bool _enabledEntryTypePortrait;
    _Bool _enabledEntryTypeUserPlace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)isEnabled;

- (id)init;
- (_Bool)shouldKeepEntry:(id)arg1;

@end
