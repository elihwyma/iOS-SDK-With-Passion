/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)calendar;
- (unsigned int)changeType;
- (id)timestamp;
- (id)notification;
- (id)deleteCount;
- (id)updateCount;
- (int)entityType;
- (id)calendarItem;
- (_Bool)alerted;
- (id)deletedTitle;
- (id)changedByDisplayName;
- (id)createCount;
- (id)changedByAddress;
- (id)changedByFirstName;
- (id)changedByLastName;
- (unsigned int)changedProperties;
- (unsigned int)publicStatus;

@end
