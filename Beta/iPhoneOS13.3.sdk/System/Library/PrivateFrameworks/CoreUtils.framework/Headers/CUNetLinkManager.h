/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUNetLinkManager : NSObject

{
    struct NSMutableSet *_endpoints;
    unsigned int _endpointChanges;
    _Bool _hasIPv4Endpoint;
    _Bool _hasIPv6Endpoint;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_source> *_pollTimer;
    int _probeSocketV4;
    NSObject<OS_dispatch_source> *_probeSourceV4;
    int _probeSocketV6;
    NSObject<OS_dispatch_source> *_probeSourceV6;
    unsigned int _reReachableCount;
    unsigned int _rxCount;
    unsigned int _txCount;
    unsigned int _txErrors;
    struct LogCategory *_ucat;
    unsigned int _unreachableCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)_update;
- (void)_invalidated;
- (void)activate;
- (id)descriptionWithLevel:(int)arg1;
- (void)addEndpoint:(id)arg1;
- (void)removeEndpoint:(id)arg1;
- (void)_updateEndpoints;
- (void)_updateARP;
- (void)_updateNDP;
- (void)_updateEndpoint:(id)arg1 state:(int)arg2;
- (void)_monitorEnsureStarted;
- (void)_monitorEnsureStopped;
- (void)_monitorSetupSocket:(int)arg1;
- (void)_monitorReadPacket:(int)arg1;
- (void)_monitorSendPacketToEndpoint:(id)arg1;

@end
