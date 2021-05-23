/*
 Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface ACCiAP2ShimServerClient : NSObject

{
    _Bool _locationSupportedByClient;
    _Bool _cameraSupportedByClient;
    _Bool _supportsAccessibility;
    _Bool _clientRequiresAccReset;
    _Bool _entitlementForAllAccessories;
    int _processId;
    unsigned int _clientID;
    unsigned int _capabilities;
    int _iapSessionRefCount;
    unsigned int _applicationState;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSString *_bundleId;
    NSArray *_clientEAProtocols;
    NSObject<OS_dispatch_queue> *_processAssertionQ;
    struct SBSProcessAssertion *_processAssertion;
    long long _processAssertionStartTime;
    NSObject<OS_dispatch_source> *_processAssertionTimer;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic, readonly) _Bool entitlementForAllAccessories;
@property (nonatomic, readonly) NSArray *clientEAProtocols;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processAssertionQ;
@property (nonatomic, readonly) struct SBSProcessAssertion *processAssertion;
@property (nonatomic, readonly) long long processAssertionStartTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *processAssertionTimer;
@property (nonatomic, readonly) int iapSessionRefCount;
@property (nonatomic) unsigned int applicationState;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, readonly) int processId;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcConnection;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) CDStruct_4c969caf auditToken;
@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic) _Bool locationSupportedByClient;
@property (nonatomic) _Bool cameraSupportedByClient;
@property (nonatomic, readonly) _Bool supportsAccessibility;
@property (nonatomic) _Bool clientRequiresAccReset;

- (void)dealloc;
- (id)description;
- (id)_applicationInfoForBundleIDSync:(id)arg1;
- (void)takeProcessAssertion:(id)arg1;
- (void)releaseProcessAssertion;
- (id)initWithCapabilities:(unsigned int)arg1 auditToken:(CDStruct_4c969caf)arg2 xpcConnection:(id)arg3 eaProtocols:(id)arg4 andBundleId:(id)arg5;
- (_Bool)canSendConnectionEventForAccessory:(id)arg1;

@end
