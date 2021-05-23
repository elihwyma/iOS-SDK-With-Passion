/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@interface TAFilterSingleVisit : NSObject

+ (_Bool)shouldDetectWithStore:(id)arg1 filterSingleVisitSettings:(id)arg2;
+ (id)filterSuspiciousDeviceWithStore:(id)arg1 singleVisitSettings:(id)arg2 andAppendOutgoingRequestsTo:(id)arg3;

@end
