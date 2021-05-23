/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableSet, NSString, NSXPCConnection;

@protocol ACCExternalAccessoryProviderProtocol, ACCExternalAccessoryXPCServerProtocol;

@interface ACCExternalAccessoryProvider : NSObject

{
    int _clientCapabilities;
    id <ACCExternalAccessoryProviderProtocol> _delegate;
    NSXPCConnection *_serverConnection;
    id <ACCExternalAccessoryXPCServerProtocol> _remoteObject;
    NSDictionary *_eaClientRegistrationInfo;
    NSMutableSet *_currentlyConnectedAccessories;
}

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id <ACCExternalAccessoryXPCServerProtocol> remoteObject;
@property (nonatomic) int clientCapabilities;
@property (retain, nonatomic) NSDictionary *eaClientRegistrationInfo;
@property (retain, nonatomic) NSMutableSet *currentlyConnectedAccessories;
@property (weak, nonatomic) id <ACCExternalAccessoryProviderProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)accessoryDictionaryForLogging:(id)arg1;

- (void)dealloc;
- (void)_constructClientRegistrationInfo;
- (void)connectToServer:(_Bool)arg1;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3;
- (void)destinationInformation:(id)arg1 forUUID:(id)arg2;
- (void)ExternalAccessoryArrived:(id)arg1;
- (void)ExternalAccessoryLeft:(id)arg1;
- (void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)accessoryCloseExternalAccessorySession:(id)arg1;
- (void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2;
- (void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
- (void)stopDestinationSharingForUUID:(id)arg1;
- (void)destinationSharingStatus:(_Bool)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
- (void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2;
- (void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2;
- (void)_removeAllAccessories;
- (id)_findAccessoryForPrimaryUUID:(id)arg1;
- (void)_removeAccessoryForPrimaryUUID:(id)arg1;
- (id)initWithDelegate:(id)arg1 capabilities:(int)arg2;
- (void)requestAccessoryWifiCredentials:(id)arg1;
- (void)startLocationInformationForAccessoryUUID:(id)arg1;
- (void)sendNMEAFilterList:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)sendGPRMCDataStatus:(_Bool)arg1 ValueV:(_Bool)arg2 ValueX:(_Bool)arg3 forAccessoryUUID:(id)arg4;
- (void)stopLocationInformationForAccessoryUUID:(id)arg1;
- (void)resumeEASessionData:(id)arg1;
- (void)createExternalAccessorySessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withEASessionReply:(CDUnknownBlockType)arg3;
- (void)openSocketForAccessoryToApp:(id)arg1;
- (void)openSocketForAppToAccessory:(id)arg1;
- (void)closeExternalAccessorySession:(id)arg1;
- (void)sendOutgoingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)currentVehicleInfo:(id)arg1;

@end
