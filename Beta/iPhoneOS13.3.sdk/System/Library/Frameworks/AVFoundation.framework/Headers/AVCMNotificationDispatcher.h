/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCallbackContextRegistry, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface AVCMNotificationDispatcher : NSObject

{
    struct opaqueCMNotificationCenter *_cmNotificationCenter;
    AVCallbackContextRegistry *_callbackContextRegistry;
    NSMutableDictionary *_listenerObjectsPassedToFig;
    NSObject<OS_dispatch_queue> *_listenerObjectsQueue;
}

@property (nonatomic, readonly, getter=_callbackContextRegistry) AVCallbackContextRegistry *callbackContextRegistry;
@property (nonatomic, readonly) struct opaqueCMNotificationCenter *CMNotificationCenter;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg1;

- (id)init;
- (void)dealloc;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4;
- (void)addListenerWithWeakReference:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4 flags:(unsigned int)arg5;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg1;
- (void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(CDUnknownFunctionPointerType)arg3 name:(struct __CFString *)arg4 object:(const void *)arg5;
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4;

@end
