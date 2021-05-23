/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject

{
    struct __CFDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
}

+ (id)eventDescriptionForDrag:(id)arg1;

- (void)dealloc;
- (id)_sharedNumberFormatter;
- (id)_attendeesForEvent:(id)arg1 sorted:(_Bool)arg2 limitedTo:(long long)arg3;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (struct __CFDateFormatter *)_sharedDateFormatter;
- (_Bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)naturalLanguageDescriptionForAttendees:(id)arg1;
- (id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(_Bool)arg2 useExplicitTimes:(_Bool)arg3 followingComma:(_Bool)arg4;

@end
