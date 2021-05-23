/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CADisplay;

@interface CADisplayLink : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) CADisplay *display;
@property (retain, nonatomic) id userInfo;
@property (nonatomic, readonly) double maximumRefreshRate;
@property (nonatomic, readonly) double heartbeatRate;
@property (nonatomic, readonly) long long minimumFrameDuration;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) long long frameInterval;
@property (nonatomic) long long preferredFramesPerSecond;

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

- (void)dealloc;
- (void)invalidate;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (id)_initWithDisplayLinkItem:(struct DisplayLinkItem *)arg1;
- (long long)actualFramesPerSecond;

@end
