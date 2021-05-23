/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@interface CALNTimeToLeaveEventTrackerUtilities : NSObject

+ (id)ttlEventTrackerAlertTypeForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1;
+ (unsigned long long)ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1;
+ (unsigned long long)ttlEventTrackerETATypeForHypothesis:(id)arg1;
+ (unsigned long long)ttlEventTrackerTravelStateForHypothesisTravelState:(long long)arg1;
+ (unsigned long long)ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2;
+ (void)trackDirectionsEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 hasSuggestedLocation:(_Bool)arg4 isOnSharedCalendar:(_Bool)arg5;

@end
