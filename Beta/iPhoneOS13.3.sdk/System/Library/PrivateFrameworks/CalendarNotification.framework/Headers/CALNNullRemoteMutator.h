/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNNullRemoteMutator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setSnoozeTimeInterval:(double)arg1 alarm:(id)arg2 calendarItem:(id)arg3;
- (void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(id)arg3;
- (_Bool)deleteEvent:(id)arg1 withSpan:(long long)arg2;

@end
