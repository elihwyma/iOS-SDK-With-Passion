/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class CADisplay, CADisplayLink, NSTimer;

__attribute__((visibility("hidden")))
@interface SKDisplayLink : NSObject

{
    NSTimer *_timer;
    id _client;
    CADisplayLink *_caDisplayLink;
    CADisplay *_display;
    _Bool _paused;
    _Bool _callbackAlreadyInProgress;
    double _previousFrameTime;
    float _preferredFramesPerSecond;
    CDUnknownBlockType _block;
    float _averageFrameTime;
    long long _frameCount;
    double _frameCountBeginTime;
}

@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (retain, nonatomic) CADisplay *display;

+ (id)displayLinkWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_setup;
- (void)_teardown;
- (void)_caDisplayLinkCallback;
- (id)initWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;
- (void)_callbackForNextFrame:(double)arg1;
- (_Bool)_callbackAlreadyInProgress;
- (void)_setCallbackAlreadyInProgress:(_Bool)arg1;

@end
