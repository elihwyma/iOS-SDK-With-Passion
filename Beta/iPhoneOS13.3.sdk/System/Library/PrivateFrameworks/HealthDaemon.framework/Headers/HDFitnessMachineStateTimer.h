/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDFitnessMachineStateTimer : NSObject

{
    NSString *_name;
    unsigned long long _duration;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long duration;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic, readonly) CDUnknownBlockType handler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)_timerWithDuration:(long long)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (_Bool)isValid;
- (void)cancel;
- (void)begin;
- (id)initWithName:(id)arg1 duration:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
