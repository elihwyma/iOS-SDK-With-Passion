/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@class EKObjectID;

@interface EKShareeChange : EKObjectChange

{
    EKObjectID *_ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchShareeChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchShareeChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)fetchShareeChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

- (id)initWithChangeProperties:(id)arg1;

@end
