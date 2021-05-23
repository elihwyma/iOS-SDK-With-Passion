/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKCalendar, EKStructuredLocation, EKSuggestedEventInfo, NSArray, NSDate, NSString, NSTimeZone, NSURL, UIColor;

@interface EKUIAutocompleteSearchResult : NSObject

{
    _Bool _allDay;
    _Bool _suggested;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_location;
    NSString *_locationWithoutPrediction;
    EKStructuredLocation *_preferredLocation;
    NSArray *_alarms;
    NSArray *_attendees;
    NSURL *_URL;
    NSString *_notes;
    EKCalendar *_calendar;
    UIColor *_calendarColor;
    EKSuggestedEventInfo *_suggestionInfo;
    NSString *_foundInBundleID;
    NSString *_uniqueID;
}

@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, getter=isAllDay) _Bool allDay;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *locationWithoutPrediction;
@property (retain, nonatomic) EKStructuredLocation *preferredLocation;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) UIColor *calendarColor;
@property (nonatomic, getter=isSuggested) _Bool suggested;
@property (retain, nonatomic) EKSuggestedEventInfo *suggestionInfo;
@property (retain, nonatomic) NSString *foundInBundleID;

+ (_Bool)_participantShouldBeUsedForAutocomplete:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUniqueID:(id)arg1;

@end
