/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendar, NSDate, NSTimeZone;

@interface EKUIAutocompletePETTracker : NSObject

{
    _Bool _hasTrackedZKWQuery;
    _Bool _hasTrackedZKWResultShown;
    _Bool _hasTrackedAutocompleteQuery;
    _Bool _hasTrackedAutocompleteResultsShown;
    _Bool _hasTrackedNLResultShown;
    _Bool _initialIsAllDay;
    unsigned long long _finalNumberOfAutocompleteResults;
    NSDate *_initialStartDate;
    NSDate *_initialEndDate;
    NSTimeZone *_initialTimeZone;
    EKCalendar *_initialCalendar;
}

@property unsigned long long finalNumberOfAutocompleteResults;
@property (retain) NSDate *initialStartDate;
@property (retain) NSDate *initialEndDate;
@property (retain) NSTimeZone *initialTimeZone;
@property _Bool initialIsAllDay;
@property (retain) EKCalendar *initialCalendar;

+ (id)_zkwQueryEventTracker;
+ (id)_nlShownTracker;
+ (id)_autocompleteQueryEventTracker;
+ (id)_autocompleteEngagementEventTracker;
+ (id)_autocompleteSelectionTypeTracker;
+ (_Bool)_trackedEventProperty:(unsigned long long)arg1 isPresentInAutocompleteResult:(id)arg2;
+ (_Bool)_trackedEventProperty:(unsigned long long)arg1 wasOverriddenInEvent:(id)arg2 fromAutocompleteResult:(id)arg3;
+ (_Bool)_isChangeToTrackedPropertySignificant:(unsigned long long)arg1;
+ (id)_eventTrackerForProperty:(unsigned long long)arg1;
+ (id)_autocompleteCompleteWinTracker;
+ (id)_autocompleteStatsTracker;

- (_Bool)_trackedEventProperty:(unsigned long long)arg1 wasSetInNewEvent:(id)arg2;
- (void)trackZKWQuery;
- (void)trackZKWResultShown;
- (void)trackNLResultShown;
- (void)trackAutocompleteQuery;
- (void)trackAutocompleteResultsShown;
- (void)trackAutocompleteEventsOnSaveWithEvent:(id)arg1 selectedResult:(id)arg2 selectedIndex:(unsigned long long)arg3 isZKW:(_Bool)arg4;

@end
