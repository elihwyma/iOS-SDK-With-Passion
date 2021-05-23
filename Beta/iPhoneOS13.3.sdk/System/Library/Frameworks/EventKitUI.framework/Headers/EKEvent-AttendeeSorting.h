/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKit/EKEvent.h>

@interface EKEvent (AttendeeSorting)

- (id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1;
- (id)sortEKParticipantsIgnoringNonHumans:(id)arg1;
- (id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1;
- (_Bool)hasHumanInviteesToDisplay;
- (id)attendeesWithoutOrganizerAndLocations;
- (id)sortedEKAttachmentsDisplayStrings;
- (long long)daySpan;

@end
