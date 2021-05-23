/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)address;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)radius;
- (void)setRadius:(id)arg1;
- (id)latitude;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (void)setLatitude:(id)arg1;
- (id)referenceFrame;
- (void)setReferenceFrame:(id)arg1;
- (void)setAddress:(id)arg1;
- (int)entityType;
- (id)contactLabel;
- (void)setContactLabel:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setMapKitHandle:(id)arg1;
- (id)mapKitHandle;
- (id)routing;
- (id)derivedFrom;
- (void)setDerivedFrom:(id)arg1;
- (id)semanticIdentifier;
- (id)calendarItemOwner;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setAlarmOwner:(id)arg1;
- (id)alarmOwner;

@end
