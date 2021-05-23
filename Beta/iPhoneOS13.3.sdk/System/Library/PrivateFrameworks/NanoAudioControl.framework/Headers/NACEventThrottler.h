/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NACEventThrottler : NSObject

{
    double _lastUpdateTime;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _eventBlock;
    double _minimumDelay;
    id _value;
}

@property (copy, nonatomic) CDUnknownBlockType eventBlock;
@property (nonatomic) double minimumDelay;
@property (retain, nonatomic) id value;

- (id)init;
- (void)cancel;
- (id)initWithQueue:(id)arg1;
- (void)_fire;

@end
