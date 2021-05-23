/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <Foundation/NSObject.h>

@class ICSDate, ICSDuration, ICSStructuredLocation, ICSTrigger, ICSUserAddress, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface ICSComponent : NSObject

{
    NSMutableDictionary *_properties;
    NSMutableArray *_components;
    NSString *_unrecognizedComponentName;
}

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (readonly) _Bool isAllDay;
@property (retain) ICSDate *dtend;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *relatedTo;
@property (retain) NSArray *rrule;
@property unsigned long long sequence;
@property int status;
@property (retain) NSString *statusString;
@property (retain) NSString *summary;
@property (retain) ICSTrigger *trigger;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property unsigned long long priority;
@property (retain) NSString *unrecognizedComponentName;
@property int x_calendarserver_access;
@property (retain) NSString *x_apple_dropbox;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property _Bool x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property _Bool x_apple_ignore_on_restore;
@property (retain) NSString *x_apple_etag;
@property (retain) NSString *x_apple_scheduletag;
@property (retain) NSString *x_apple_serverFilename;
@property _Bool x_apple_suggestionInfoChangesAcknowledged;
@property unsigned long long x_apple_suggestionInfoChangedFields;
@property (retain) NSString *x_apple_suggestionInfoOpaqueKey;
@property (retain) ICSDate *x_apple_suggestionInfoTimestamp;
@property (retain) NSString *x_apple_suggestionInfoUniqueKey;
@property (retain) NSString *x_apple_contactIdentifiers;
@property (retain) NSString *x_apple_relatedExternalID;
@property (retain) NSString *x_apple_universalID;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (retain) NSArray *conferences;
@property (retain, nonatomic) NSMutableArray *components;

+ (id)name;
+ (id)makeUID;
+ (unsigned long long)relationshipTypeFromString:(id)arg1;
+ (id)stringFromRelationshipType:(unsigned long long)arg1;
+ (id)stringFromStatus:(int)arg1;
+ (int)statusFromString:(id)arg1;
+ (id)inheritanceKeywords;

- (id)init;
- (id)debugDescription;
- (id)properties;
- (_Bool)validate:(id *)arg1;
- (id)allProperties;
- (void)addComponent:(id)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3;
- (id)x_apple_travel_start;
- (id)propertiesForName:(id)arg1;
- (void)removePropertiesForName:(id)arg1;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (id)x_apple_travel_duration;
- (id)x_apple_travel_advisory_behavior;
- (void)setX_apple_travel_duration:(id)arg1;
- (void)setX_apple_travel_advisory_behavior:(id)arg1;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (void)setX_apple_travel_start:(id)arg1;
- (void)removeComponent:(id)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (_Bool)ignorePropertyWithName:(id)arg1;
- (id)propertiesToObscure;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)parametersToObscure;
- (_Bool)shouldObscureValue;
- (void)setPropertyValue:(id)arg1 forName:(id)arg2;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (_Bool)forcedAllDay;
- (void)setX_apple_end_location:(id)arg1;
- (id)x_apple_end_location;
- (void)setForcedAllDay:(_Bool)arg1;
- (void)fixPropertiesInheritance:(id)arg1;
- (void)fixComponent;
- (void)fixAlarms;
- (void)fixAttendees;
- (void)fixAttachments;
- (void)fixRelatedTo;
- (void)fixRecurrenceRules;
- (void)fixRecurrenceDates;
- (void)fixExceptionRules;
- (void)fixExceptionDates;
- (void)fixSuggestionInfo;

@end
