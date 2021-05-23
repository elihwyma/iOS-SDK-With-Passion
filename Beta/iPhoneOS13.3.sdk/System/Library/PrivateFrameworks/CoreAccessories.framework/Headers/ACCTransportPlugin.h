/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@protocol ACCTransportPluginManagerProtocol;

@interface ACCTransportPlugin : NSObject

{
    id <ACCTransportPluginManagerProtocol> _delegate;
    NSMutableSet *_activeConnectionUUIDs;
    NSString *_pluginName;
    NSMutableDictionary *_connectionPropertyChangeHandlers;
    NSMutableDictionary *_endpointPropertyChangeHandlers;
}

@property (weak, nonatomic) id <ACCTransportPluginManagerProtocol> delegate;
@property (retain, nonatomic) NSMutableSet *activeConnectionUUIDs;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) NSString *pluginClassAndName;
@property (retain, nonatomic) NSMutableDictionary *connectionPropertyChangeHandlers;
@property (retain, nonatomic) NSMutableDictionary *endpointPropertyChangeHandlers;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)authStatusDidChangeHandler:(id)arg1;
- (void)connectionPropertiesDidChangeHandler:(id)arg1;
- (void)endpointPropertiesDidChangeHandler:(id)arg1;
- (_Bool)destroyConnectionWithUUID:(id)arg1;
- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (_Bool)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;
- (id)createConnectionWithType:(int)arg1 andIdentifier:(id)arg2;
- (_Bool)setSupervisedTransportsRestricted:(_Bool)arg1 forConnectionWithUUID:(id)arg2;
- (_Bool)setProperties:(id)arg1 forConnectionWithUUID:(id)arg2;
- (_Bool)setAuthenticationStatus:(int)arg1 andCertificateData:(id)arg2 authCTA:(_Bool)arg3 forConnectionWithUUID:(id)arg4;
- (_Bool)routeOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;
- (_Bool)publishConnectionWithUUID:(id)arg1;
- (_Bool)setAccessoryInfo:(id)arg1 forEndpointWithUUID:(id)arg2;
- (_Bool)setProperties:(id)arg1 forEndpointWithUUID:(id)arg2;
- (_Bool)destroyEndpointWithUUID:(id)arg1;
- (id)allConnectionUUIDs;
- (id)allEndpointsUUIDs;
- (id)connectionUUIDForEndpointWithUUID:(id)arg1;
- (id)endpointUUIDsForConnectionWithUUID:(id)arg1;
- (int)authStatusForConnectionWithUUID:(id)arg1 authType:(int)arg2;
- (int)transportTypeForEndpointWithUUID:(id)arg1;
- (int)connectionTypeForConnectionWithUUID:(id)arg1;
- (id)certificateDataForConnectionWithUUID:(id)arg1;
- (id)certificateSerialForConnectionWithUUID:(id)arg1;
- (id)certificateSerialStringForConnectionWithUUID:(id)arg1;
- (id)certificateCapabilitiesForConnectionWithUUID:(id)arg1;
- (id)identifierForConnectionWithUUID:(id)arg1;
- (id)identifierForEndpointWithUUID:(id)arg1;
- (id)propertiesForConnectionWithUUID:(id)arg1;
- (id)propertiesForEndpointWithUUID:(id)arg1;
- (_Bool)processIncomingData:(id)arg1 forEndpointWithUUID:(id)arg2;
- (id)createEndpointWithTransportType:(int)arg1 andProtocol:(int)arg2 andIdentifier:(id)arg3 forConnectionWithUUID:(id)arg4 publishConnection:(_Bool)arg5;
- (void)setHandler:(CDUnknownBlockType)arg1 forConnectionProperty:(id)arg2;
- (void)setHandler:(CDUnknownBlockType)arg1 forEndpointProperty:(id)arg2;

@end
