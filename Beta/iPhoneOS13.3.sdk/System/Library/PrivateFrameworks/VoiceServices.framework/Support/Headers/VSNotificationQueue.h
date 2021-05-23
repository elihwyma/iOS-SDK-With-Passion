/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface VSNotificationQueue : NSObject

{
    NSMutableDictionary *_queuedNotification;
    NSMutableSet *_ongoingNotifications;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    struct _opaque_pthread_mutex_t _lock;
}

@property (retain, nonatomic) NSMutableDictionary *queuedNotification;
@property (retain, nonatomic) NSMutableSet *ongoingNotifications;
@property (nonatomic) struct _opaque_pthread_mutex_t lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;

+ (id)sharedQueue;

- (id)init;
- (void)dealloc;
- (void)enqueueNotificationName:(id)arg1 object:(id)arg2;
- (void)startNotificationName:(id)arg1;
- (void)removeNotificationName:(id)arg1;

@end
