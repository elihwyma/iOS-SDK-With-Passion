/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString, NSTimer;

@interface TMLTimer : NSObject

{
    NSTimer *_timer;
    CDUnknownBlockType _block;
    _Bool _repeats;
    _Bool _running;
    double _interval;
    double _tolerance;
    NSString *_runLoopMode;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) _Bool repeats;
@property (nonatomic) double interval;
@property (nonatomic) double tolerance;
@property (nonatomic) _Bool running;
@property (copy, nonatomic) NSString *runLoopMode;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initializeJSContext:(id)arg1;

- (void)fire;
- (void)stop;
- (void)start;
- (void)timerFired:(id)arg1;
- (void)tmlDispose;

@end
