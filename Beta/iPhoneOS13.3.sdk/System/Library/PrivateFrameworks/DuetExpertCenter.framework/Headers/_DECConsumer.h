/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, PETScalarEventTracker, _DECResult;

@protocol OS_dispatch_queue;

@interface _DECConsumer : NSObject

{
    CDUnknownBlockType _handler;
    _DECResult *_cachedResult;
    _Atomic unsigned long long _category;
    _Atomic unsigned long long _consumerType;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _startedMonitoring;
    unsigned long long _limit;
    PETScalarEventTracker *_consumerInitTracker;
}

@property unsigned long long category;
@property unsigned long long consumerType;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_setupConnection;
- (void)handleDaemonStart;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 queue:(id)arg3;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(_Bool)arg2 criteria:(id)arg3 timeout:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(_Bool)arg2 criteria:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 timeout:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)startMonitoringForPredictionsWithLimit:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopMonitoringForPredictions;
- (void)receivePrediction:(id)arg1 consumer:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;

@end
