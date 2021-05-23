/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol VKAnimationRunner;

@interface VKAnimation : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSString *_name;
    long long _priority;
    id <VKAnimationRunner> _runner;
    long long _state;
    float _frequency;
    _Bool _runsForever;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) _Bool running;
@property (nonatomic) _Bool runsForever;
@property (nonatomic) float frequency;
@property (nonatomic, readonly) _Bool hasFrequency;
@property (nonatomic) double duration;
@property (nonatomic, readonly) _Bool timed;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSString *name;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)stopAnimation:(_Bool)arg1;
- (id)initWithPriority:(long long)arg1;
- (void)onTimerFired:(double)arg1;
- (void)startWithRunner:(id)arg1;
- (id)initWithPriority:(long long)arg1 name:(id)arg2;
- (void)transferToRunner:(id)arg1;

@end
