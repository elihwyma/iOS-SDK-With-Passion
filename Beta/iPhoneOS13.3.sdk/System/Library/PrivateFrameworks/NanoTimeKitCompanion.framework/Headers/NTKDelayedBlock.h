/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface NTKDelayedBlock : NSObject

{
    _Bool _canceled;
    _Bool _invalidated;
    double _delay;
    NSString *_runLoopMode;
    CDUnknownBlockType _action;
    NSTimer *_timer;
}

@property (nonatomic) double delay;
@property (copy, nonatomic) NSString *runLoopMode;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) _Bool canceled;
@property (nonatomic) _Bool invalidated;

- (void)dealloc;
- (void)cancel;
- (void)reset;
- (void)timerFired:(id)arg1;
- (id)initWithDelay:(double)arg1 action:(CDUnknownBlockType)arg2;
- (void)resetWithDelay:(double)arg1;
- (id)initWithDelay:(double)arg1 runLoopMode:(id)arg2 action:(CDUnknownBlockType)arg3;

@end
