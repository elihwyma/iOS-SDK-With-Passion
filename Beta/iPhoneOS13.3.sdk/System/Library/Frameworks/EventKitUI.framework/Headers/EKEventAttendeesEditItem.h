/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class EKParticipant, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditItem : EKEventEditItem

{
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    long long _numberOfConflicts;
}

+ (id)_noneInviteesLocalizedString;

- (id)init;
- (void)dealloc;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)forceTableReloadOnSave;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (id)attendeesWithoutSelfOrganizerAndLocations;

@end
