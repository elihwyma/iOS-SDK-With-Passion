/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGNotificationListener : NSObject

{
    CDUnknownBlockType _callback;
    struct __CFString *_notification;
    struct _opaque_pthread_mutex_t _lock;
}

- (void)dealloc;
- (void)_notify;
- (id)initWithNotification:(struct __CFString *)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)unsubscribe;

@end
