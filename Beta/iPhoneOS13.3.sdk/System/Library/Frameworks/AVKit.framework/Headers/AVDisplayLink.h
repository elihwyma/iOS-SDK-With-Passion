/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface AVDisplayLink : NSObject

{
    CDUnknownBlockType _linkFired;
    CADisplayLink *_displayLink;
    id _observer;
    double _startTime;
}

@property (copy, nonatomic) CDUnknownBlockType linkFired;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) id observer;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) double runningTime;

- (void)invalidate;
- (void)startDisplayLinkUpdatesForObserver:(id)arg1 framesPerSecond:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)linkFired:(id)arg1;

@end
