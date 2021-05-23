/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class EKTravelAdvisoryTimelinessAuthority, NSString;

@interface CALNEKTravelAdvisoryTimelinessAuthority : NSObject

{
    EKTravelAdvisoryTimelinessAuthority *_travelAdvisoryTimelinessAuthority;
}

@property (nonatomic, readonly) EKTravelAdvisoryTimelinessAuthority *travelAdvisoryTimelinessAuthority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)periodForHypothesis:(id)arg1;
- (id)startOfLeaveNowPeriodForHypothesis:(id)arg1;
- (id)startOfRunningLatePeriodForHypothesis:(id)arg1;
- (id)initWithTravelAdvisoryTimelinessAuthority:(id)arg1;

@end
