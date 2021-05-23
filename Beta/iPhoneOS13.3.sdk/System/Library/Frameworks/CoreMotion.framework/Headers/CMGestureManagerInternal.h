/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMGestureManagerInternal : NSObject

{
    int fPriority;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fGestureHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (void)dealloc;
- (id)initWithPriority:(int)arg1;
- (void)startGestureUpdatesWithHandlerPrivate:(CDUnknownBlockType)arg1;
- (void)stopGestureUpdatesPrivate;

@end
