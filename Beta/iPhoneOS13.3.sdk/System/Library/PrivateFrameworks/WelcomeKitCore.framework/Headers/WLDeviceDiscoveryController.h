/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, WLSourceDevice;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WLDeviceDiscoveryController : NSObject

{
    int _listenerSocket;
    NSObject<OS_dispatch_source> *_incomingConnSource;
    NSMutableArray *_socketHandlers;
    NSMutableArray *_sourceDevices;
    unsigned long long _countOfPairingAttemptsWithCurrentSecret;
    NSString *_pairingSecret;
    NSObject<OS_dispatch_queue> *_discoveryRequestSerialQueue;
    CDUnknownBlockType _nextIncomingConnectionHandler;
    NSString *_allowedAddress;
}

@property (nonatomic, readonly) WLSourceDevice *sourceDevice;

+ (id)sharedInstance;

- (id)init;
- (void)importLocalContent;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptDirectConnectionToAddress:(id)arg1;
- (void)setNextIncomingConnectionHandler:(CDUnknownBlockType)arg1;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFailToHandshakeWithSourceDevice:(id)arg2 error:(id)arg3;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFinishHandshakeWithSourceDevice:(id)arg2 priorConnectionFailureReasons:(id)arg3;
- (void)_queue_startDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldForceDiscoveryError;
- (void)_allowConnectionsFromAnyAddress;
- (id)_generatePairingSecret;
- (void)_postSourceDevicesDidChangeNotification;
- (id)_ssidWithSecret:(id)arg1;
- (int)createListenerSocketOnPort:(unsigned long long)arg1;
- (int)acceptIncomingConnectionWithListenerSocket:(int)arg1 nonBlocking:(_Bool)arg2;
- (id)listenForConnectionOnSocket:(int)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_stopDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)supportsLocalImport;
- (id)_legacyPairingWifiPskWithSecret:(id)arg1;

@end
