/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class EKCalendar, EKCalendarItem, NSDate, NSNumber, NSString, NSURL;

@interface EKResourceChange : EKObject

@property (retain, nonatomic, readonly) EKCalendar *calendar;
@property (retain, nonatomic, readonly) EKCalendarItem *calendarItem;
@property (copy, nonatomic, readonly) NSString *changedByDisplayName;
@property (copy, nonatomic, readonly) NSURL *changedByAddress;
@property (copy, nonatomic, readonly) NSString *changedByFirstName;
@property (copy, nonatomic, readonly) NSString *changedByLastName;
@property (nonatomic, readonly) unsigned int changeType;
@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) _Bool dateChanged;
@property (nonatomic, readonly) _Bool timeChanged;
@property (nonatomic, readonly) _Bool titleChanged;
@property (nonatomic, readonly) _Bool locationChanged;
@property (nonatomic, readonly) NSNumber *createCount;
@property (nonatomic, readonly) NSNumber *updateCount;
@property (nonatomic, readonly) NSNumber *deleteCount;
@property (nonatomic, readonly) NSString *deletedTitle;
@property (nonatomic, readonly) _Bool alerted;
@property (nonatomic, readonly) unsigned int publicStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)calendarItemPropertyName;

- (id)name;
- (id)URL;
- (id)phoneNumber;
- (id)notification;
- (id)emailAddress;
- (id)firstName;
- (id)lastName;
- (void)clearAlertedStatus;
- (unsigned int)changedProperties;
- (_Bool)_propertyWithFlagDidChange:(unsigned int)arg1;

@end
