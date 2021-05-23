/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXAnchor.h>

@interface ATXAudioConnectedAnchor : ATXAnchor

+ (long long)anchorType;
+ (Class)supportedDuetDataProviderClass;
+ (id)duetEventsPredicates;
+ (_Bool)shouldPredicateOnStartDate;
+ (id)keyPathForContextStore;
+ (id)predicateForContextStoreRegistration;
+ (_Bool)shouldProcessContextStoreNotification;
+ (id)sampleEvent;

@end
