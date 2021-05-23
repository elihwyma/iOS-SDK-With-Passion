/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject

{
    CDUnknownBlockType _eventHandler;
    NSTimer *_transitionTimer;
    double _delay;
}

@property (retain, nonatomic) NSTimer *transitionTimer;
@property (nonatomic, readonly) double delay;
@property (copy, nonatomic, readonly) CDUnknownBlockType eventHandler;

- (void)stop;
- (id)initWithEventHandler:(CDUnknownBlockType)arg1;
- (id)initWithEventHandler:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void)scheduleEvent;
- (void)didCompleteEvent;
- (void)scheduleTransitionTimer;

@end
