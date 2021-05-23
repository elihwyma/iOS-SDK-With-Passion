/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@interface _DECUpdatePredictionsNotification : NSObject

{
    id _notificationToken;
}

+ (void)runNotificationBlockForListenerCategory:(unsigned long long)arg1 notificationCategory:(unsigned long long)arg2 listenConsumerType:(unsigned long long)arg3 notificationConsumerType:(unsigned long long)arg4 updateTimeInterval:(double)arg5 currentDate:(id)arg6 withCachedDateGetter:(CDUnknownBlockType)arg7 andUpdateBlock:(CDUnknownBlockType)arg8 finallyBlock:(CDUnknownBlockType)arg9;
+ (void)postNotificationForPredictionCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 andRefreshTimeInterval:(double)arg3;

- (void)dealloc;
- (id)initWithNotificationsForPredictionCategory:(unsigned long long)arg1 andConsumerType:(unsigned long long)arg2 withCachedDateGetter:(CDUnknownBlockType)arg3 andUpdateBlock:(CDUnknownBlockType)arg4 finallyBlock:(CDUnknownBlockType)arg5;

@end
