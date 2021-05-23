/*
 Image: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
 */

#import <Foundation/NSObject.h>

@class ATXNotificationsAggregateLogger, NSXPCConnection;

@interface ATXNotificationsLoggingClient : NSObject

{
    NSXPCConnection *_xpcConnection;
    ATXNotificationsAggregateLogger *_logger;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)logNotification:(id)arg1 withNotificationId:(id)arg2 timestamp:(id)arg3;
- (void)logEvent:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)logEvent:(long long)arg1 forNotificationId:(id)arg2 supplementaryAction:(id)arg3 timestamp:(id)arg4;
- (void)logTapCoalesceForNotificationId:(id)arg1 andBundleId:(id)arg2 timestamp:(id)arg3;
- (void)shouldMakeQuietingSuggestionForBundleId:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)quietingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)shouldMakePromotingSuggestionForBundleId:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)promotingSuggestionResponse:(id)arg1 topic:(id)arg2 response:(long long)arg3;
- (void)makeQuietingSuggestionForNextNotification;
- (void)makePromotingSuggestionForNextNotification;
- (void)makeSuggestionForNextNotification;
- (void)logSuggestionShown:(id)arg1 forType:(long long)arg2 timestamp:(id)arg3;
- (void)logSuggestionDeduped:(id)arg1 timestamp:(id)arg2;
- (void)logRealTimeTuningOutcome:(unsigned long long)arg1 withBundleId:(id)arg2;
- (void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4;
- (void)logEvent:(long long)arg1 forNotificationId:(id)arg2 timestamp:(id)arg3;
- (void)logRealTimeTuningCountFrom:(unsigned long long)arg1;

@end
