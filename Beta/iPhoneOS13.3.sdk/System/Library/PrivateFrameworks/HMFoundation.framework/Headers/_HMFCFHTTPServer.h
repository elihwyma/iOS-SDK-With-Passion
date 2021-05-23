/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue, _HMFCFHTTPServerDelegate;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServer

{
    id <_HMFCFHTTPServerDelegate> _delegate;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct _CFHTTPServer *_internal;
    NSMutableArray *_connections;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) struct _CFHTTPServer *internal;
@property (nonatomic, readonly) NSMutableArray *connections;
@property (weak) id <_HMFCFHTTPServerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long port;
@property double connectionIdleTimeout;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (double)watchdogTimeout;
- (id)logIdentifier;
- (id)initWithPort:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)setWatchdogTimeout:(double)arg1;

@end
