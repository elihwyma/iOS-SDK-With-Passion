/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXAnchor : NSObject

+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (id)duetEventsPredicates;
+ (_Bool)shouldPredicateOnStartDate;
+ (id)keyPathForContextStore;
+ (id)predicateForContextStoreRegistration;
+ (_Bool)shouldProcessContextStoreNotification;
+ (id)sampleEvent;
+ (id)anchorOccurenceDateFromDuetEvent:(id)arg1;
+ (_Bool)shouldProcessContextStoreNotificationForDict;
+ (_Bool)shouldProcessContextStoreNotificationForNumber;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (int)pbAnchorEventTypeFromDuetEvent:(id)arg1;
+ (id)anchorTypeToString:(long long)arg1;

- (id)description;

@end
