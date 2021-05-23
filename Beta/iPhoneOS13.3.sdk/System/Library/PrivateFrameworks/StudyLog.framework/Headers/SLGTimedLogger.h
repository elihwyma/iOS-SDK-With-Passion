/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source, SLGActivatableLogging;

@interface SLGTimedLogger : NSObject

{
    id <SLGActivatableLogging> _logger;
    double _duration;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType activationHandler;
@property (copy, nonatomic) CDUnknownBlockType deactivationHandler;
@property (nonatomic, getter=isActive) _Bool active;

- (void)invalidate;
- (_Bool)isEnabled;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2;
- (void)_startTimer;
- (void)_stopTimer;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 tags:(CDUnknownBlockType)arg3;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 tags:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithLogger:(id)arg1 duration:(double)arg2;

@end
