/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSError;

@protocol MPRequestCancellationToken, MPRequestResponseControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MPRequestResponseController : NSObject

{
    long long _numberOfObservers;
    long long _requestRevision;
    _Bool _shouldAutomaticallyLoad;
    _Bool _needsReload;
    id <MPRequestCancellationToken> _cancelToken;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSError *_lastError;
    id _pendingResponse;
    unsigned long long _stateHandle;
    id _request;
    id _response;
    id <MPRequestResponseControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) id request;
@property (weak, nonatomic) id <MPRequestResponseControllerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)beginAutomaticResponseLoading;
- (void)endAutomaticResponseLoading;
- (void)setNeedsReloadForSignificantRequestChange;
- (void)_responseDidInvalidate:(id)arg1;
- (void)_onQueue_scheduleRetryAfterInterval:(double)arg1;
- (void)_onQueue_reloadIfNeeded;

@end
