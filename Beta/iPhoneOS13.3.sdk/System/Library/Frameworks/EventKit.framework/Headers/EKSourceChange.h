/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObjectChange.h>

@interface EKSourceChange : EKObjectChange

+ (int)entityType;
+ (void)fetchSourceChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
