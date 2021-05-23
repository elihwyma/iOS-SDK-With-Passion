/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSDictionary, NSMutableDictionary, NSTimer;

@interface OKTimerAnimation : NSObject

{
    NSTimer *_timer;
    NSDictionary *_fromValues;
    NSDictionary *_toValues;
    double _duration;
    double _currentInterval;
    NSMutableDictionary *_previousValues;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    _Bool _additionally;
    CAMediaTimingFunction *_timingFunction;
}

@property (nonatomic) _Bool additionally;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)animationFromValues:(id)arg1 toValues:(id)arg2 withDuration:(double)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)handleTimer:(id)arg1;

@end
