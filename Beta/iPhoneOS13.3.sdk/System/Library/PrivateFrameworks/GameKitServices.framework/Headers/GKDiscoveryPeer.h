/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKDiscoveryPeerConnection, GKSimpleTimer, NSMutableArray, NSMutableSet, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface GKDiscoveryPeer : NSObject

{
    NSString *_serviceName;
    NSString *_playerID;
    NSString *_deviceID;
    NSMutableSet *_interfaces;
    NSMutableArray *_orderedInterfaces;
    NSMutableArray *_attemptedInterfaces;
    GKDiscoveryPeerConnection *_trialConnection;
    NSNumber *_chosenInterface;
    _Bool _shouldSignalDiscovery;
    NSMutableArray *_sendDataBuffer;
    GKDiscoveryPeerConnection *_connection;
    GKSimpleTimer *_resolveTimer;
    CDUnknownBlockType _resolveTimeoutHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _state;
    double _discoveryTimeStamp;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSString *deviceID;
@property (retain, nonatomic) GKSimpleTimer *resolveTimer;
@property (copy, nonatomic) CDUnknownBlockType resolveTimeoutHandler;
@property (retain, nonatomic) NSMutableSet *interfaces;
@property (retain, nonatomic) NSMutableArray *orderedInterfaces;
@property (retain, nonatomic) NSMutableArray *attemptedInterfaces;
@property (retain, nonatomic) NSNumber *chosenInterface;
@property (retain, nonatomic) GKDiscoveryPeerConnection *trialConnection;
@property (nonatomic) _Bool shouldSignalDiscovery;
@property (nonatomic) double discoveryTimeStamp;
@property (retain, nonatomic) NSMutableArray *sendDataBuffer;
@property (nonatomic) int state;
@property (retain, nonatomic) GKDiscoveryPeerConnection *connection;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithServiceName:(id)arg1;
- (id)stringForState:(int)arg1;
- (void)timeout:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)flushDataBuffer;
- (_Bool)parseServiceNameForInit:(id)arg1;
- (void)cleanUpForBrowse;
- (id)nextInterfaceIndex;
- (void)startResolveTimerWithHandler:(CDUnknownBlockType)arg1;
- (void)stopResolveTimer;
- (void)didLoseInterface:(id)arg1;

@end
