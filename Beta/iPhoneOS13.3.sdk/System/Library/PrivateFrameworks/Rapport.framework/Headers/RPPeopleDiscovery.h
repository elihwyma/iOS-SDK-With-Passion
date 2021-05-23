/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSSet, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPPeopleDiscovery : NSObject

{
    _Bool _activateCalled;
    struct NSMutableDictionary *_discoveredPeople;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSMutableSet *_rangingPersonIDs;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSXPCConnection *_xpcCnx;
    _Bool _targetUserSession;
    unsigned int _changeFlags;
    unsigned int _discoveryFlags;
    int _discoveryMode;
    int _peopleDensity;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _peopleDensityChangedHandler;
    CDUnknownBlockType _personFoundHandler;
    CDUnknownBlockType _personLostHandler;
    CDUnknownBlockType _personChangedHandler;
    NSSet *_rangingPeople;
    CDUnknownBlockType _statusChangedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) _Bool targetUserSession;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int discoveryFlags;
@property (nonatomic) int discoveryMode;
@property (copy, nonatomic, readonly) NSArray *discoveredPeople;
@property (nonatomic, readonly) int peopleDensity;
@property (copy, nonatomic) CDUnknownBlockType peopleDensityChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType personFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType personLostHandler;
@property (copy, nonatomic) CDUnknownBlockType personChangedHandler;
@property (copy, nonatomic) NSSet *rangingPeople;
@property (copy, nonatomic) CDUnknownBlockType statusChangedHandler;
@property (nonatomic, readonly) unsigned int statusFlags;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)arg1;
- (_Bool)_ensureXPCStarted;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)_scheduleRetry;
- (void)_updatePeopleDensity:(unsigned long long)arg1;
- (void)xpcPeopleStatusChanged:(unsigned int)arg1;
- (void)xpcPersonFound:(id)arg1;
- (void)xpcPersonLost:(id)arg1;
- (void)xpcPersonChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonID:(id)arg1 deviceID:(id)arg2 updatedMeasurement:(id)arg3;
- (void)_lostAllPeople;
- (void)addAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
