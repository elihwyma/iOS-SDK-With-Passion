/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNEKUIEventRepresentationProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)eventRepresentationDictionaryForResponseNotificationWithTitle:(id)arg1 message:(id)arg2;
- (id)eventRepresentationDictionaryForUpcomingEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3;
- (id)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(id)arg1 message:(id)arg2;
- (id)eventRepresentationDictionaryForInvitationNotification:(id)arg1 event:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
- (id)eventRepresentationDictionaryForResourceChangeNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
- (id)updateEventRepresentationDictionary:(id)arg1 withHypothesisMessage:(id)arg2;

@end
