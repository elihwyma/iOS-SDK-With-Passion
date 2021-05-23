/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCConnectionIDS : NSObject

{
    IDSDataChannelLinkContext *_linkContext;
    unsigned int _datagramChannelToken;
    VCDatagramChannelIDS *_datagramChannel;
    int _priority;
    unsigned int _type;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
    unsigned int _uplinkBitrateCap;
    unsigned int _downlinkBitrateCap;
    _Bool _isLocalConstrained;
    _Bool _isRemoteConstrained;
}

@property (readonly) unsigned int datagramChannelToken;
@property (readonly) VCDatagramChannelIDS *datagramChannel;
@property (readonly) unsigned char linkID;
@property (readonly) NSString *relaySessionToken;
@property (readonly) NSData *sharedDigestKey;
@property (readonly) _Bool isLocalConstrained;
@property (readonly) _Bool isRemoteConstrained;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool isLocalOnWiFi;
@property (readonly) _Bool isRemoteOnWiFi;
@property (readonly) _Bool isLocalOnCellular;
@property (readonly) _Bool isRemoteOnCellular;
@property (readonly) _Bool isIPv6;
@property int connectionMTU;
@property (readonly) int connectionId;
@property (readonly) _Bool isRelay;
@property (readonly) _Bool isVPN;
@property (readonly) _Bool serverIsDegraded;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) int localConnectionType;
@property (readonly) int remoteConnectionType;
@property int localCellTech;
@property int remoteCellTech;
@property int priority;
@property (readonly) unsigned int type;
@property (readonly) NSString *localInterfaceTypeString;
@property (readonly) NSString *remoteInterfaceTypeString;
@property unsigned int uplinkBitrateCap;
@property unsigned int downlinkBitrateCap;

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;

- (void)dealloc;
- (int)networkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;
- (_Bool)isSameAsConnection:(id)arg1;
- (_Bool)isOnSameInterfacesWithConnection:(id)arg1;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (_Bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;
- (id)connectionQRSessionID;
- (_Bool)isOnSameQRSessionWithConnection:(id)arg1;
- (_Bool)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)setCellularMTU:(int)arg1;
- (_Bool)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1;

@end
