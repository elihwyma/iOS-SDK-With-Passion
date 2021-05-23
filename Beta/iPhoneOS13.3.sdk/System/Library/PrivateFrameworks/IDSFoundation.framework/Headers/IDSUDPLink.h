/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSSockAddrWrapper, NSDictionary, NSIndexSet, NSString;

@protocol IDSLinkDelegate;

@interface IDSUDPLink : NSObject

{
    int _socket;
    int _cellularSocket;
    int _addressFamily;
    IDSSockAddrWrapper *_localAddress;
    IDSSockAddrWrapper *_destinationAddress;
    _Bool _hasFixedDestination;
    NSDictionary *_destinationAddressToDeviceIDMap;
    unsigned short _port;
    unsigned short _cellularPort;
    _Bool _wantsAWDL;
    _Bool _wantsWiFi;
    _Bool _wantsCellular;
    _Bool _useDefaultInterfaceOnly;
    _Bool _allowsLinkLocal;
    _Bool _skipTransportThread;
    _Bool _needToConnect;
    _Bool _hasTemporaryError;
    _Bool _isInvalidated;
    double _lastDestinationSent;
    double _lastDestinationReceived;
    unsigned long long _state;
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
    unsigned long long _previousBytesSent;
    unsigned long long _previousPacketsSent;
    unsigned long long _previousBytesReceived;
    unsigned long long _previousPacketsReceived;
    double _previousReportTime;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    id <IDSLinkDelegate> _delegate;
    id <IDSLinkDelegate> _alternateDelegate;
    NSIndexSet *_cellularInterfaceIndices;
    _Bool _wifiAssistEnabled;
}

@property (nonatomic) unsigned short port;
@property (nonatomic) unsigned short cellularPort;
@property (nonatomic, readonly) int socket;
@property (nonatomic, readonly) int cellularSocket;
@property (nonatomic) _Bool useDefaultInterfaceOnly;
@property (nonatomic, readonly) _Bool isInvalidated;
@property (nonatomic) double lastDestinationSent;
@property (nonatomic, readonly) double lastDestinationReceived;
@property (nonatomic) _Bool allowsLinkLocal;
@property (nonatomic) _Bool skipTransportThread;
@property (retain, nonatomic) NSIndexSet *cellularInterfaceIndices;
@property (nonatomic) _Bool wifiAssistEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSString *cbuuid;
@property (retain) NSString *deviceUniqueID;
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long headerOverhead;
@property (weak) id <IDSLinkDelegate> delegate;
@property (weak) id <IDSLinkDelegate> alternateDelegate;

- (void)invalidate;
- (_Bool)setTrafficClass:(int)arg1;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_12676517 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (id)copyLinkStatsDict;
- (void)setWiFiAssistState:(_Bool)arg1;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(_Bool)arg2 wantsWiFi:(_Bool)arg3 wantsCellular:(_Bool)arg4 clientUUID:(unsigned char [16])arg5;
- (void)removeSocket;
- (id)copyCurrentNetworkInterfaces;
- (_Bool)_isInterfaceIndexCellular:(int)arg1;
- (void)_processIncomingPacketOnSocket:(int)arg1;
- (unsigned long long)_sendBytes:(const void *)arg1 length:(unsigned long long)arg2 destinationAddress:(const struct sockaddr *)arg3;
- (unsigned long long)_sendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (int)_findSocketForInterfaceIndex:(int)arg1;
- (int)_createNewUDPSocketWithIPVersion:(unsigned long long)arg1 localPort:(unsigned short *)arg2 wantsAWDL:(_Bool)arg3 clientUUID:(unsigned char [16])arg4;
- (void)_processIncomingPacket;
- (void)_processIncomingCellularPacket;
- (id)_createNetworkInterfaceArrayWithIPVersion:(unsigned long long)arg1 wantsAWDL:(_Bool)arg2 wantsWiFi:(_Bool)arg3 wantsCellular:(_Bool)arg4 allowsLinkLocal:(_Bool)arg5 useDefaultInterfaceOnly:(_Bool)arg6 defaultPairedDevice:(_Bool)arg7;
- (unsigned long long)_sendBytesArray:(const void **)arg1 lengthArray:(unsigned long long *)arg2 arraySize:(int)arg3 localInterfaceIndex:(int)arg4 localAddress:(const struct sockaddr *)arg5 destinationAddress:(const struct sockaddr *)arg6 trafficClass:(unsigned short)arg7;
- (_Bool)_setTrafficClassOnSocket:(int)arg1 trafficClassValue:(int)arg2;
- (_Bool)setDestinationAddress:(id)arg1 isFixedDestination:(_Bool)arg2 fromAddress:(id)arg3;
- (_Bool)setDestinationAddressToDeviceIDMap:(id)arg1;
- (void)reconnectWithLocalAddress:(id)arg1;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(_Bool)arg2 wantsWiFi:(_Bool)arg3 wantsCellular:(_Bool)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_12676517 *)arg1 destination:(id)arg2 toDeviceID:(id)arg3;
- (unsigned long long)sendPacketBuffer:(CDStruct_12676517 *)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4;

@end
