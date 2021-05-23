/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNTriggeredEventNotificationActions : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_mailOrganizerActionForNotification:(id)arg1;
+ (id)_mailtoURLForNotification:(id)arg1;

- (id)updatedActionsForNotification:(id)arg1 existingActions:(id)arg2;
- (id)launchURLForResponse:(id)arg1;

@end
