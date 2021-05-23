/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKParticipantChange.h>

@class EKObjectID;

@interface EKOrganizerChange : EKParticipantChange

{
    EKObjectID *_ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchOrganizerChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchOrganizerChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchOrganizerChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

- (id)initWithChangeProperties:(id)arg1;

@end
