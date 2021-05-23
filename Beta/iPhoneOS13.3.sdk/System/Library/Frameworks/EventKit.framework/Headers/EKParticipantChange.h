/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@interface EKParticipantChange : EKObjectChange

+ (int)entityType;
+ (void)fetchParticipantChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchParticipantChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchParticipantChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
