/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVCMNotificationDispatcherListenerAndCallback : NSObject

{
    AVWeakReference *_weakReferenceToListener;
    CDUnknownFunctionPointerType _callback;
    void *_callbackContextToken;
}

@property (nonatomic, readonly) id listener;
@property (nonatomic, readonly) CDUnknownFunctionPointerType callback;
@property (nonatomic) void *callbackContextToken;

- (id)init;
- (void)dealloc;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2;

@end
