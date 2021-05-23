/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@class EKObjectID;

@interface EKAlarmChange : EKObjectChange

{
    EKObjectID *_ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchAlarmChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchAlarmChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchAlarmChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

- (id)initWithChangeProperties:(id)arg1;

@end
