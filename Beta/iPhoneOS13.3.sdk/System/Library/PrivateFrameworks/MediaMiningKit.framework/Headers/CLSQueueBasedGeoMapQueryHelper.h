/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@protocol CLSQueryProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface CLSQueueBasedGeoMapQueryHelper : NSObject

{
    _Bool _simulatesTimeout;
    _Bool _alreadyLaunched;
    _Bool _didFinishQuery;
    id <CLSQueryProtocol> _query;
    CDUnknownBlockType _cancellerBlock;
    CDUnknownBlockType _completionBlock;
    double _timeoutInterval;
    double _numberOfRetries;
    double _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned long long _retryLevel;
    double _nextRetryTime;
}

@property (nonatomic, readonly) id <CLSQueryProtocol> query;
@property (copy, nonatomic, readonly) CDUnknownBlockType cancellerBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (nonatomic) double internalProgressTimeInterval;
@property (nonatomic) unsigned long long retryLevel;
@property (nonatomic) double nextRetryTime;
@property (nonatomic) _Bool alreadyLaunched;
@property (nonatomic) _Bool didFinishQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double numberOfRetries;
@property (nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout;

- (void)cancel;
- (void)_heartBeat;
- (void)_cancel;
- (void)_handleError:(id)arg1;
- (id)initWithQueryObject:(id)arg1;
- (void)launchQueryWithCancellerBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleQueryResultsForQuery:(id)arg1 error:(id)arg2;
- (void)_startQuery;

@end
