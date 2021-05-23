/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDataDetector, NSDateFormatter, NSNumberFormatter;

@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator

{
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
    NSDataDetector *_addressDetector;
}

+ (id)sharedGenerator;

- (id)init;
- (void)dealloc;
- (void)meCardChanged:(id)arg1;
- (id)_sharedNumberFormatter;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (id)_sharedDateFormatter;
- (_Bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)textRepresentationForEvent:(id)arg1 withTextFormat:(int)arg2 showURI:(_Bool)arg3;
- (id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(_Bool)arg2;
- (long long)_notReallyRandomNumberBetween1AndN:(int)arg1;
- (id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(_Bool)arg2 useExplicitTimes:(_Bool)arg3 followingComma:(_Bool)arg4;
- (id)_locationStringForEvent:(id)arg1;
- (_Bool)_eventIsAlreadyLate:(id)arg1;
- (_Bool)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1;
- (_Bool)_arrayHasMorningEvents:(id)arg1;
- (_Bool)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1;
- (_Bool)_arrayHasAfternoonEvents:(id)arg1;
- (_Bool)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1;
- (_Bool)_doesEventStartEarly:(id)arg1;
- (_Bool)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1;
- (_Bool)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(_Bool)arg2;
- (id)_noonDateForEvents:(id)arg1;
- (id)_addressDetector;
- (id)_showEventURLStringForEvent:(id)arg1;
- (id)textRepresentationForAttendee:(id)arg1 includeEmailAddress:(_Bool)arg2;
- (id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1;
- (id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(_Bool)arg2;
- (id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2;

@end
