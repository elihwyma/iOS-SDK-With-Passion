/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSOperationQueue;

@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

@interface _HDDemoDataModule : NSObject

{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    id <_HDDemoDataModuleDelegate> _delegate;
    NSDate *_lastFireDate;
}

@property (nonatomic, readonly) NSDate *lastFireDate;
@property (nonatomic, readonly) double nextFireInterval;
@property (weak, nonatomic) id <_HDDemoDataModuleDelegate> delegate;

- (void)stop;
- (void)start;
- (id)initWithOperationQueue:(id)arg1;
- (void)scheduleNextFire;
- (void)scheduleNextFireWithInterval:(double)arg1;
- (void)timerDidFireWithInterval:(double)arg1;
- (void)handleDataObject:(id)arg1;

@end
