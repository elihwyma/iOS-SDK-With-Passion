/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)date;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setDate:(id)arg1;
- (int)entityType;

@end
