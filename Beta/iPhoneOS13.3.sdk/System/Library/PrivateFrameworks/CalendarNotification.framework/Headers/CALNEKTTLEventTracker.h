/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@interface CALNEKTTLEventTracker : NSObject

+ (id)sharedInstance;

- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(_Bool)arg5 isOnSharedCalendar:(_Bool)arg6;
- (void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(_Bool)arg4 isOnSharedCalendar:(_Bool)arg5;

@end
