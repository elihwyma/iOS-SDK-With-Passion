/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface CKImageAnimationTimer : NSObject

{
    unsigned long long _frame;
    _Bool _shouldStopWhenBackgrounded;
    NSMutableSet *_observers;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) _Bool shouldStopWhenBackgrounded;

+ (id)sharedTimer;

- (id)init;
- (void)dealloc;
- (unsigned long long)frame;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)addAnimationTimerObserver:(id)arg1;
- (void)updateDisplayLink;
- (void)animationTimerFired;

@end
