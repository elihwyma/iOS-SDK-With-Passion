/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface RPRemoteDisplayDiscovery : NSObject

{
    _Bool _activateCalled;
    struct NSMutableDictionary *_discoveredDevices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    unsigned long long _controlFlags;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    unsigned long long _errorFlags;
    CDUnknownBlockType _errorFlagsChangedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) unsigned long long controlFlags;
@property (copy, nonatomic, readonly) NSArray *discoveredDevices;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (nonatomic) unsigned long long errorFlags;
@property (copy, nonatomic) CDUnknownBlockType errorFlagsChangedHandler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)_lostAllDevices;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (_Bool)shouldReportDevice:(id)arg1;
- (void)remoteDisplayFoundDevice:(id)arg1;
- (void)remoteDisplayLostDevice:(id)arg1;
- (void)remoteDisplayChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)remoteDisplayUpdateErrorFlags:(unsigned long long)arg1;

@end
