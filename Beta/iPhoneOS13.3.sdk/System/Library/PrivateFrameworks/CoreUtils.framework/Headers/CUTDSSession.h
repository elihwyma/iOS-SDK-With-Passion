/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUTDSEndpoint, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface CUTDSSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUTDSEndpoint *_endpoint;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_xpcServiceName;
    unsigned long long _tdsHashActivate;
}

@property (nonatomic) unsigned long long tdsHashActivate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) CUTDSEndpoint *endpoint;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *xpcServiceName;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;
- (void)_activateDirectWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateXPCWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;

@end
