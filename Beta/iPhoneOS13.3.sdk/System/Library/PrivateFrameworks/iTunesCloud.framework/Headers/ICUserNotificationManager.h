/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_queue;

@interface ICUserNotificationManager : NSObject

{
    NSMapTable *_contextForUserNotification;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)sharedManager;

- (id)init;
- (void)displayUserNotification:(struct __CFUserNotification *)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleCallbackForUserNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;

@end
