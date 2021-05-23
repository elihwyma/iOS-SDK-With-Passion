/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXNotificationsRecord.h>

@class NSString;

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord

{
    NSString *_actionPredBundleId;
}

- (id)init;
- (_Bool)addEvent:(id)arg1;
- (long long)determineEndingInteraction;
- (id)initWithNotificationId:(id)arg1 timestamp:(id)arg2;
- (_Bool)isMatchActionPredBundleId:(id)arg1;

@end
