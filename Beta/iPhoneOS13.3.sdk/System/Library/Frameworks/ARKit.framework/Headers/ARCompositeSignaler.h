/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSCondition;

@interface ARCompositeSignaler : NSObject

{
    NSCondition *_renderCondition;
    NSCondition *_compositeCondition;
    _Atomic unsigned long long _renderCount;
    _Atomic unsigned long long _lastRenderCount;
}

- (id)init;
- (void)signalRenderThread;
- (void)signalCompositorThread;
- (void)waitCompositorThread;
- (void)waitRenderThreadUsingBlock:(CDUnknownBlockType)arg1;
- (void)signalRenderThreadWhenPaused;

@end
