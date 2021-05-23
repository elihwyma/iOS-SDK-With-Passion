/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, MPAVRoutingController, NMROrigin, NSArray, NSDictionary, NSMutableSet, NSNumber, NSOrderedSet, NSString;

@protocol OS_dispatch_queue;

@interface NMROriginManager : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOrderedSet *_availableOrigins;
    NSDictionary *_availableOriginsByDeviceIdentifier;
    NSDictionary *_availableOriginsByOriginIdentifier;
    NSNumber *_activeOriginIdentifier;
    NSNumber *_localOriginIdentifier;
    MPAVRoutingController *_endpointRoutingController;
    NSMutableSet *_lastAvailableEndpointRouteUIDs;
    BKSProcessAssertion *_endpointDiscoveryProcessAssertion;
    struct __CFArray *_availableOriginRefs;
}

@property (nonatomic, readonly) NSArray *availableOrigins;
@property (nonatomic, readonly) NMROrigin *activeOrigin;
@property (nonatomic, readonly) NMROrigin *localOrigin;
@property (nonatomic, readonly) NMROrigin *companionOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)_handleDeviceInfoDidChangeNotification:(id)arg1;
- (id)_originFromTestOptions:(id)arg1;
- (id)originWithDeviceIdentifier:(id)arg1;
- (void)_handleMediaRemoteActiveOriginDidChangeNotification:(id)arg1;
- (void)_handleMediaRemoteAvailableOriginsDidChangeNotification:(id)arg1;
- (void)_updateMediaRemoteLocalOrigin;
- (void)_updateMediaRemoteAvailableAndActiveOrigins;
- (void)_onQueue_updateAvailableOrigins;
- (void)_onQueue_updateActiveOriginIdentifier:(id)arg1;
- (id)originWithUniqueIdentifier:(id)arg1;
- (_Bool)_isEndpointDiscoveryEnabled;
- (void)_setEndpointDiscoveryEnabled:(_Bool)arg1;
- (void)_forgetDiscoveredEndpoints;

@end
