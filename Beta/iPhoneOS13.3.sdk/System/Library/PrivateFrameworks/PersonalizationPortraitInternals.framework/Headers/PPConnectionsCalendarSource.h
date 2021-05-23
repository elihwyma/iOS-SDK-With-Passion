/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

@class NSString, PPLocalEventStore;

@interface PPConnectionsCalendarSource : PPConnectionsSource

{
    PPLocalEventStore *_localEventStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)identifier;
+ (id)locationNameFromEvent:(id)arg1;
+ (id)locationValueFromEvent:(id)arg1;
+ (id)locationLabelFromEvent:(id)arg1;

- (id)init;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;
- (id)ekEventWithExternalID:(id)arg1;
- (_Bool)isCalendarEventEligibleForLocationPrediction:(id)arg1;

@end
