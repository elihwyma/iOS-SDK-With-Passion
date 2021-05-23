/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKParticipantChange.h>

@class EKObjectID;

@interface EKAttendeeChange : EKParticipantChange

{
    EKObjectID *_ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchAttendeeChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchAttendeeChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchAttendeeChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

- (id)initWithChangeProperties:(id)arg1;

@end
