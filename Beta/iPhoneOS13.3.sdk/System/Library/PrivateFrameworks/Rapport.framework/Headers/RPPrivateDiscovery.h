/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface RPPrivateDiscovery : NSObject

{
    _Bool _activateCalled;
    _Bool _changesPending;
    _Bool _direct;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    unsigned int _clientID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _endpointChangedHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
}

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType endpointFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointLostHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_update;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)_activateDirect;
- (void)_activateXPC:(_Bool)arg1;
- (void)xpcPrivateDiscoveryEndpointFound:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointLost:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointChanged:(id)arg1;
- (void)_invalidateDirect;

@end
