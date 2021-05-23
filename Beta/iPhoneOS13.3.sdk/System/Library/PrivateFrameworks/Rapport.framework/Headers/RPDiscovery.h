/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPDiscovery : NSObject

{
    _Bool _activateCalled;
    struct NSMutableDictionary *_endpointMap;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_source> *_retryTimer;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    _Bool _targetUserSession;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    unsigned long long _controlFlags;
    CDUnknownBlockType _foundHandler;
    CDUnknownBlockType _lostHandler;
    CDUnknownBlockType _changedHandler;
    NSString *_serviceType;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) _Bool targetUserSession;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned long long controlFlags;
@property (copy, readonly) NSArray *discoveredEndpoints;
@property (copy, nonatomic) CDUnknownBlockType foundHandler;
@property (copy, nonatomic) CDUnknownBlockType lostHandler;
@property (copy, nonatomic) CDUnknownBlockType changedHandler;
@property (retain, nonatomic) NSString *serviceType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)arg1;
- (_Bool)_ensureXPCStarted;
- (void)_lostAllEndpoints;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)xpcDiscoveryFoundEndpoint:(id)arg1;
- (void)xpcDiscoveryLostEndpoint:(id)arg1;
- (void)xpcDiscoveryChangedEndpoint:(id)arg1;
- (void)_scheduleRetry;

@end
