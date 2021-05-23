/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)setOwner:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (id)specifier;
- (long long)interval;
- (void)setInterval:(long long)arg1;
- (id)endDate;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (id)owner;
- (void)setEndDate:(id)arg1;
- (int)frequency;
- (void)setFrequency:(int)arg1;
- (void)setSpecifier:(id)arg1;
- (int)entityType;
- (long long)firstDayOfTheWeek;
- (void)setFirstDayOfTheWeek:(long long)arg1;
- (id)cachedEndDate;

@end
