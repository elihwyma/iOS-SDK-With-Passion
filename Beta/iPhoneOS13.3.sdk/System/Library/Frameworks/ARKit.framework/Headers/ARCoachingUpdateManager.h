/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, CAMetalLayer;

@protocol ARCoachingUpdateManagerDelegate, MTLCommandQueue;

@interface ARCoachingUpdateManager : NSObject

{
    CAMetalLayer *_metalLayer;
    id <MTLCommandQueue> _commandQueue;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
    id <ARCoachingUpdateManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <ARCoachingUpdateManagerDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)update;
- (void)drawWithTimeDelta:(double)arg1;
- (id)init:(id)arg1 metalLayer:(id)arg2;

@end
