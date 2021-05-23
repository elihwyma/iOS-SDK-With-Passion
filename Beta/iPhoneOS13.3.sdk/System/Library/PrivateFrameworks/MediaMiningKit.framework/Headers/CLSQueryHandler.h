/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSGeoServiceThread;

@protocol CLSQueryPerformerProtocol, OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface CLSQueryHandler : NSObject

{
    id <CLSQueryPerformerProtocol> _query;
    double _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _retryLevel;
    double _nextRetryTime;
    _Bool _alreadyLaunched;
    _Bool _didQueryFinish;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_os_log> *_loggingConnection;
    _Bool _simulatesTimeout;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CLSGeoServiceThread *_geoServiceThread;
    double _timeoutInterval;
    double _numberOfRetries;
}

@property (nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) CLSGeoServiceThread *geoServiceThread;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double numberOfRetries;

- (void)cancel;
- (void)_heartBeat;
- (void)_cancel;
- (void)_forwardToGeoThread;
- (void)_startQuery;
- (id)initWithQueryPerformer:(id)arg1 geoServiceThread:(id)arg2 loggingConnection:(id)arg3;
- (void)cacheItems;
- (void)_handleQueryResultsForQuery:(id)arg1 items:(id)arg2 error:(id)arg3;
- (void)_handleError:(id)arg1 numberOfItems:(unsigned long long)arg2;
- (unsigned long long)_cacheMapItems:(id)arg1;

@end
