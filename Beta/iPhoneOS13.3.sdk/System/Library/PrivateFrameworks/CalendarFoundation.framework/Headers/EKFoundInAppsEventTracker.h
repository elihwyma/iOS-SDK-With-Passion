/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface EKFoundInAppsEventTracker : NSObject

+ (void)trackPseudoEventDateChanged;
+ (void)trackPseudoEventDetailsOpened;
+ (id)pseudoEventDateChangedTracker;
+ (id)pseudoEventDetailsOpenedTracker;
+ (id)pseudoEventExpiredTracker;
+ (id)pseudoEventInitialTimeToLeaveFiredTracker;
+ (void)trackPseudoEventsExpired:(int)arg1;
+ (void)trackPseudoEventInitialTimeToLeaveFired;

@end
