//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTriggeredEventNotificationActionUpdater-Protocol.h>
#import <CalendarNotification/CALNTriggeredEventNotificationResponseLaunchURLProvider-Protocol.h>

@interface CALNTriggeredEventNotificationActions : NSObject <CALNTriggeredEventNotificationActionUpdater, CALNTriggeredEventNotificationResponseLaunchURLProvider>
{
}

+ (id)_mailOrganizerActionForNotification:(id)arg1;
+ (id)_mailtoURLForNotification:(id)arg1;
- (id)launchURLForResponse:(id)arg1;
- (id)updatedActionsForNotification:(id)arg1 existingActions:(id)arg2;

@end

