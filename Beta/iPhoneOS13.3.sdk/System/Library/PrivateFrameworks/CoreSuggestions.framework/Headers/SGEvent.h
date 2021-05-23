/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGObject.h>

@class NSArray, NSDate, NSObject, NSString, NSTimeZone, NSURL;

@protocol OS_dispatch_queue;

@interface SGEvent : SGObject

{
    NSObject<OS_dispatch_queue> *_geocodeQueue;
    SGEvent *_geocoded;
    _Bool _isAllDay;
    NSString *_title;
    NSString *_notes;
    NSDate *_start;
    NSTimeZone *_startTimeZone;
    NSDate *_end;
    NSTimeZone *_endTimeZone;
    NSDate *_creationDate;
    NSDate *_lastModifiedDate;
    NSArray *_locations;
    NSString *_opaqueKey;
    NSString *_uniqueKey;
    NSArray *_tags;
    NSURL *_URL;
    NSString *_naturalLanguageEventTypeIdentifier;
    unsigned long long _naturalLanguageEventAttributes;
    NSArray *_schemaOrg;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSTimeZone *startTimeZone;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) NSTimeZone *endTimeZone;
@property (nonatomic, readonly) _Bool isAllDay;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (nonatomic, readonly) NSString *uniqueKey;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly, getter=isGeocodeCandidate) _Bool geocodeCandidate;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, getter=isNaturalLanguageEvent) _Bool naturalLanguageEvent;
@property (nonatomic, readonly) NSString *naturalLanguageEventTypeIdentifier;
@property (nonatomic, readonly) unsigned long long naturalLanguageEventAttributes;
@property (nonatomic, readonly) NSArray *schemaOrg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(_Bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)duration;
- (_Bool)isEqualToEvent:(id)arg1;
- (id)startDateComponents;
- (id)endDateComponents;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2;
- (void)geocodeWithCallback:(CDUnknownBlockType)arg1;
- (id)toEKEventWithStore:(id)arg1;
- (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
- (unsigned long long)geocodingMode;
- (id)poiFilters;
- (id)geocodeStartDate;
- (id)geocodeStartTimeZone;
- (id)geocodeEndDate;
- (id)geocodeEndTimeZone;
- (id)geocodeLocations;
- (id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(_Bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tagStrings:(id)arg15 URL:(id)arg16 naturalLanguageEventIdentifier:(id)arg17 naturalLanguageEventAttributes:(unsigned long long)arg18 schemaOrg:(id)arg19;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(_Bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16;
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(_Bool)arg3 calendar:(id)arg4;
- (void)mergeIntoEKEvent:(id)arg1;
- (_Bool)shouldAllowNotificationsInCalendar;
- (_Bool)shouldAllowNotificationsInCalendarForBundleId:(id)arg1 appIsInForeground:(_Bool)arg2;
- (void)_applyTimeRangeToEKEvent:(id)arg1 withTZID:(id)arg2;
- (void)_mergeTagsIntoEKEvent:(id)arg1 withStore:(id)arg2;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3;
- (id)firstLocationForType:(unsigned long long)arg1;
- (id)_naturalLanguageEventTagsInTags:(id)arg1;

@end
