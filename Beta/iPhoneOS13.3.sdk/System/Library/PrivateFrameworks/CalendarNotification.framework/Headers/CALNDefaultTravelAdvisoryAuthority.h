/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNDefaultTravelAdvisoryAuthority : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double minimumAllowableTravelTime;
@property (nonatomic, readonly) double maximumAllowableTravelTime;

+ (id)sharedInstance;

- (_Bool)travelStateIndicatesTravelingTowardDestination:(long long)arg1;
- (_Bool)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1;

@end
