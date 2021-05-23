/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVTimer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _invalidated;
    double _interval;
}

@property (readonly) double interval;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3 repeats:(_Bool)arg4;

@end
