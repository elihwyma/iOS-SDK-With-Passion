/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface CUTDSSeeker : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    _Bool _directedOnly;
    _Bool _passive;
    int _dataLinkType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    NSString *_xpcServiceName;
    struct NSMutableSet *_endpoints;
    unsigned long long _tdsHashProvide;
    unsigned long long _tdsHashSeek;
}

@property (retain, nonatomic) NSMutableSet *endpoints;
@property (nonatomic) unsigned long long tdsHashProvide;
@property (nonatomic) unsigned long long tdsHashSeek;
@property (nonatomic) int dataLinkType;
@property (nonatomic) _Bool directedOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType endpointFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointLostHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) _Bool passive;
@property (copy, nonatomic) NSString *serviceType;
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
- (void)updateEndpointsForDevices:(struct NSMutableDictionary *)arg1;
- (void)_activateDirectWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateXPCWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;

@end
