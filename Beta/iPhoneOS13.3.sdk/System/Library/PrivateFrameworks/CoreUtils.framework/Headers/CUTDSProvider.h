/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface CUTDSProvider : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    _Bool _directedOnly;
    _Bool _triggered;
    int _dataLinkType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    CDUnknownBlockType _stateChangedHandler;
    NSString *_xpcServiceName;
    unsigned long long _tdsHashActivate;
    unsigned long long _tdsHashProvide;
    unsigned long long _tdsHashSeek;
}

@property (nonatomic) unsigned long long tdsHashActivate;
@property (nonatomic) unsigned long long tdsHashProvide;
@property (nonatomic) unsigned long long tdsHashSeek;
@property (nonatomic) int dataLinkType;
@property (nonatomic) _Bool directedOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;
@property (nonatomic, readonly) unsigned int state;
@property (copy, nonatomic) CDUnknownBlockType stateChangedHandler;
@property (nonatomic, readonly) _Bool triggered;
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
- (_Bool)updateForDevices:(struct NSMutableDictionary *)arg1;
- (void)updateDeviceActivateHash:(const char *)arg1;
- (void)_activateDirectWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateXPCWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;

@end
