/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _nextNotificationToken;
    NSMutableDictionary *_observers;
}

- (id)init;
- (void)dealloc;
- (id)registerWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(_Bool)arg2;
- (_Bool)deregisterHandlerWithToken:(id)arg1;
- (_Bool)deregisterHandlerAsyncWithToken:(id)arg1;
- (void)issueNotificationAsyncWithContext:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)issueNotificationAsyncWithContext:(id)arg1;

@end
