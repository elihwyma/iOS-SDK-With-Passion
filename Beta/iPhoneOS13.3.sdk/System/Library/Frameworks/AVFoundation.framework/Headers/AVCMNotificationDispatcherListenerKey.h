/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVCMNotificationDispatcherListenerKey : NSObject

{
    AVWeakReference *_weakReferenceToListener;
    CDUnknownFunctionPointerType _callback;
    NSString *_name;
    const void *_object;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(id)arg3 object:(const void *)arg4;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(id)arg3 object:(const void *)arg4;

@end
