/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _ATXInternalNotification : NSObject

{
    NSString *_notificationName;
    id _token;
    struct _opaque_pthread_mutex_t _lock;
}

+ (void)postData:(id)arg1 forNotificationNamed:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)registerForNotifications:(CDUnknownBlockType)arg1;
- (id)initWithNotificationName:(id)arg1;

@end
