/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface MPUserNotification : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackInvocationQueue;
    CDUnknownBlockType _willShowNotificationHandler;
    id strongSelf;
    _Bool _isShowing;
    struct __CFRunLoopSource *_runLoopSource;
    NSMutableArray *_showingCompletionHandlers;
    struct __CFUserNotification *_cfUserNotification;
}

@property (nonatomic, readonly) struct __CFUserNotification *cfUserNotification;
@property (copy, nonatomic) CDUnknownBlockType willShowNotificationHandler;

+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification *)arg1;
+ (void)_setUserNotification:(id)arg1 forCFUserNotification:(struct __CFUserNotification *)arg2;
+ (id)_userNotificationConversionAccessQueue;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (id)initWithCFUserNotification:(struct __CFUserNotification *)arg1;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cancelSynchronously:(_Bool)arg1;
- (void)_didReceiveResponseWithFlags:(unsigned long long)arg1;

@end
