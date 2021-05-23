/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

@class APLatencyVisualizationLayer;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface APLatencyVisualizationTrackingController : NSObject

{
    APLatencyVisualizationLayer *_layer;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)layer;
- (id)init:(id)arg1;
- (void)draw;

@end
