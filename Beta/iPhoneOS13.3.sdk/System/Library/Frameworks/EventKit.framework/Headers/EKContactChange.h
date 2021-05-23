/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@class EKObjectID;

@interface EKContactChange : EKObjectChange

{
    EKObjectID *_ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchContactChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchContactChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchContactChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

- (id)initWithChangeProperties:(id)arg1;

@end
