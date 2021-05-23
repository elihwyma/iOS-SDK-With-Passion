/*
 Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@protocol NUAnimatable, NUAnimationObserver;

@interface NUAnimation : NSObject

{
    MISSING_TYPE *_ctrl1;
    MISSING_TYPE *_ctrl2;
    MISSING_TYPE *_values[75];
    int _valuesCount;
    float _prevTime;
    float _pauseTime;
    _Bool _repeat;
    _Bool _paused;
    float _startTime;
    float _duration;
    float _delay;
    int _frameInterval;
    unsigned long long _function;
    unsigned long long _key;
    id <NUAnimatable> _animatable;
    id <NUAnimationObserver> _observer;
    MISSING_TYPE *_from;
    MISSING_TYPE *_to;
}

@property (nonatomic) float startTime;
@property (nonatomic) float duration;
@property (nonatomic) float delay;
@property (nonatomic) int frameInterval;
@property (nonatomic) MISSING_TYPE *from;
@property (nonatomic) MISSING_TYPE *to;
@property (nonatomic, getter=isRepeat) _Bool repeat;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) unsigned long long function;
@property (nonatomic) unsigned long long key;
@property (weak, nonatomic) id <NUAnimatable> animatable;
@property (weak, nonatomic) id <NUAnimationObserver> observer;

- (void)apply:(float)arg1;
- (_Bool)update:(float)arg1;
- (id)initWithAnimatable:(id)arg1 value:(unsigned long long)arg2 key: /* Error: Ran out of types for this method. */;
- (id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 to:key: /* Error: Ran out of types for this method. */;
- (id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 to:ctrl1:ctrl2:key: /* Error: Ran out of types for this method. */;
- (id)initWithAnimatable:(id)arg1 values:(MISSING_TYPE **)arg2 count:(int)arg3 key:(unsigned long long)arg4;

@end
