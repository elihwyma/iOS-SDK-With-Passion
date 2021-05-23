/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarItemLocationInlineEditItem : EKCalendarItemEditItem

{
    NSMutableArray *_locationsAndCells;
    _Bool _sourceSupportsAvailabilityRequests;
    NSMutableDictionary *_conferenceRoomInfos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_locationPlaceholder;
+ (id)conferenceRoomNameForLocation:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)_makeCell:(unsigned long long)arg1;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)isSaveable;
- (id)searchStringForEventAutocomplete;
- (_Bool)isInline;
- (_Bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)forceTableReloadOnSave;
- (void)_clearButtonTapped:(id)arg1;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;
- (void)_updateAvailabilityInformation;
- (_Bool)_showSuggestedLocation:(id)arg1;
- (_Bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;
- (_Bool)_showConferenceLocation:(id)arg1;
- (void)_clearLocation:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_refreshConferenceRoomCell:(id)arg1;
- (id)_clearButtonView:(unsigned long long)arg1;
- (void)_updateAuxiliaryLocationsForNewLocation:(id)arg1;
- (void)_updateCalendarItemLocation;
- (id)participantForConferenceRoomName:(id)arg1;
- (id)locationCellPairForCell:(id)arg1;
- (void)_updateLocation:(id)arg1 withStructuredLocation:(id)arg2;
- (void)_updateLocation:(id)arg1 withConferenceRoom:(id)arg2;

@end
