/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface C3DEngineNotificationQueueTransientWrapper : NSObject

{
    id _queue;
}

- (void)dealloc;
- (void)setEngineNotificationQueue:(struct __C3DEngineNotificationQueue *)arg1;
- (struct __C3DEngineNotificationQueue *)engineNotificationQueue;

@end
