/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface CUMessageSession : NSObject

{
    CDUnknownBlockType _activateHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidateHandler;
    CDUnknownBlockType _invalidationHandler;
    NSXPCListenerEndpoint *_listenerEndpoint;
    CDUnknownBlockType _registerRequestHandler;
    CDUnknownBlockType _sendRequestHandler;
    struct LogCategory *_ucat;
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_requestMap;
    NSXPCConnection *_xpcCnx;
    NSString *_label;
}

@property (copy, nonatomic) CDUnknownBlockType activateHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidateHandler;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) CDUnknownBlockType registerRequestHandler;
@property (copy, nonatomic) CDUnknownBlockType sendRequestHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_cleanup;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (void)remoteRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)initWithTemplate:(id)arg1;
- (void)_ensureXPCStarted;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;

@end
