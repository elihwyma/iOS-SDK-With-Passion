/*
 Image: /System/Library/Frameworks/IOSurface.framework/IOSurface
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IOSurfaceSharedEventListener : NSObject

{
    struct IONotificationPort *_notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (id)init;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;

@end
