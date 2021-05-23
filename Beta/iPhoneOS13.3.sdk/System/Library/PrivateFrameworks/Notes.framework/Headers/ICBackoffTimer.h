/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface ICBackoffTimer : NSObject

{
    id _userInfo;
    double _initialTimeInterval;
    id _target;
    SEL _selector;
    unsigned long long _backoffCount;
    double _maxTimeInterval;
    NSTimer *_timer;
}

@property (nonatomic) double initialTimeInterval;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) unsigned long long backoffCount;
@property (nonatomic) double maxTimeInterval;
@property (retain) NSTimer *timer;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)fire;
- (void)fire:(id)arg1;
- (_Bool)isScheduled;
- (id)initWithInitialInterval:(double)arg1 maxInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (double)nextTimeInterval;
- (void)scheduleToFire;

@end
