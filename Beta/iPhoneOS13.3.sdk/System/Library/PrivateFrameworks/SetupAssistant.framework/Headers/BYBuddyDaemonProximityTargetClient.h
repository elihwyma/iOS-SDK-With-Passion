/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol BYBuddyDaemonProximityTargetProtocol;

@interface BYBuddyDaemonProximityTargetClient : NSObject

{
    id <BYBuddyDaemonProximityTargetProtocol> _delegate;
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;
@property (weak) id <BYBuddyDaemonProximityTargetProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)proximityTargetClientInterface;

- (id)init;
- (void)connectToDaemon;
- (void)sendData:(id)arg1;
- (id)fileTransferSessionTemplate;
- (void)proximititySetupCompleted:(id)arg1;
- (void)displayProximityPinCode:(id)arg1 visual:(_Bool)arg2;
- (void)dismissProximityPinCode;
- (void)proximityConnectionPreparing:(id)arg1;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionTerminated;
- (void)proximityConnectionReconnected;
- (void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5;
- (void)beginAdvertisingProximitySetup;
- (void)endAdvertisingProximitySetup;
- (void)endPairing;
- (void)hasConnection:(CDUnknownBlockType)arg1;
- (void)resumeProximitySetup:(CDUnknownBlockType)arg1;
- (void)storeInformation:(id)arg1;
- (void)storeHandshake:(id)arg1;
- (void)endDeviceToDeviceMigration;
- (void)showMigrationInterfaceOnSource;
- (void)suspendConnectionForSoftwareUpdate:(CDUnknownBlockType)arg1;

@end
