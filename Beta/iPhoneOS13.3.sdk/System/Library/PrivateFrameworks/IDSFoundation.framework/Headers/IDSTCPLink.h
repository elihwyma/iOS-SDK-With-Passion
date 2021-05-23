/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSString;

@protocol IDSLinkDelegate;

@interface IDSTCPLink : NSObject

{
    int _addressFamily;
    _Bool _isSSL;
    struct IDSTCPConnection_ *_conns;
    CDUnknownBlockType _getPacketLength;
    struct IDSTCPLinkCounter_ _counters;
    struct IDSTCPLinkCounter_ _previousCounters;
    double _previousReportTime;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    id <IDSLinkDelegate> _delegate;
    id <IDSLinkDelegate> _alternateDelegate;
    unsigned long long _state;
    NSIndexSet *_cellularInterfaceIndices;
    _Bool _wifiAssistEnabled;
}

@property (nonatomic, readonly) _Bool isSSL;
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

- (void)dealloc;
- (void)invalidate;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (struct IDSTCPConnection_ *)_getIDSTCPConnection:(CDStruct_12676517 *)arg1;
- (unsigned long long)sendPacketBuffer:(CDStruct_12676517 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (id)copyLinkStatsDict;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(_Bool)arg3 getPacketLength:(CDUnknownBlockType)arg4;
- (long long)getPacketLength:(CDStruct_12676517 *)arg1 isChannelData:(_Bool *)arg2;
- (_Bool)connect:(int)arg1 localAddress:(struct sockaddr *)arg2 portRange:(unsigned short)arg3 remoteAddress:(struct sockaddr *)arg4 clientUUID:(unsigned char [16])arg5 completionHandler:(CDUnknownBlockType)arg6;
- (_Bool)disconnect:(struct sockaddr_in *)arg1 remoteAddress:(struct sockaddr_in *)arg2;
- (void)processIncomingPacket:(CDStruct_12676517 *)arg1;
- (void)setWiFiAssistState:(_Bool)arg1;

@end
