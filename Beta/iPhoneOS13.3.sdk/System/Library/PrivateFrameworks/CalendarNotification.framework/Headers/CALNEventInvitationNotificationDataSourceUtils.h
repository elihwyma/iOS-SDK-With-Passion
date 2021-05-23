/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@interface CALNEventInvitationNotificationDataSourceUtils : NSObject

+ (void)clearEventInvitationOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;
+ (id)eventForNotificationOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;
+ (id)expirationDateForEventInvitation:(id)arg1;
+ (id)eventForEventInvitation:(id)arg1 inEventStore:(id)arg2;
+ (id)launchURLForEvent:(id)arg1;

@end
