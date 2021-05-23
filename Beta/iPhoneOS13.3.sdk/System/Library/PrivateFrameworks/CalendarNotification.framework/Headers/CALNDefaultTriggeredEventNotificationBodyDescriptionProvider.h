/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNTravelAdvisoryDescriptionGenerator;

@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject

{
    id <CALNTravelAdvisoryDescriptionGenerator> _travelAdvisoryDescriptionGenerator;
}

@property (nonatomic, readonly) id <CALNTravelAdvisoryDescriptionGenerator> travelAdvisoryDescriptionGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)bodyForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2;
- (id)initWithTravelAdvisoryDescriptionGenerator:(id)arg1;
- (id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2;
- (id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2;
- (id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1;

@end
