/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIAnimation : NSObject

{
    id _target;
    SEL _action;
    id _delegate;
    CDUnknownBlockType _completion;
    struct {
        unsigned int curve:4;
        unsigned int tvOutput:1;
        unsigned int useNSTimer:1;
    } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
}

- (int)type;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)target;
- (int)state;
- (id)initWithTarget:(id)arg1;
- (SEL)action;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completion;
- (void)setDuration:(double)arg1;
- (void)setProgress:(float)arg1;
- (void)setAction:(SEL)arg1;
- (float)fractionForTime:(double)arg1;
- (void)markStop;
- (void)markStart:(double)arg1;
- (float)progressForFraction:(float)arg1;
- (void)stopAnimation;
- (void)setUsesNSTimer:(_Bool)arg1;
- (_Bool)usesNSTimer;
- (void)setAnimationCurve:(int)arg1;

@end
