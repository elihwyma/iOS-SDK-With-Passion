/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCConnectionLegacy : NSObject

{
    unsigned int _type;
    int _priority;
    _Bool _waitToBeNominated;
    struct tagCONNRESULT *_connectionResult;
}

@property (readonly) struct tagCONNRESULT *connectionResult;
@property _Bool waitToBeNominated;
@property (readonly) unsigned short relayChannelNumber;
@property (readonly) _Bool isUpgraded;
@property (readonly) _Bool isReplaceOnly;
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

- (void)dealloc;
- (id)copy;
- (int)cellularMTU;
- (id)initWithConnectionResult:(struct tagCONNRESULT *)arg1 type:(unsigned int)arg2;
- (id)ipportToString:(struct tagIPPORT *)arg1;
- (struct tagIPPORT)IPPortForNWConnection:(id)arg1;
- (_Bool)isRemoteIPPort:(struct tagIPPORT *)arg1;
- (_Bool)isSameAsConnection:(id)arg1;
- (_Bool)isOnSameInterfacesWithConnection:(id)arg1;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (_Bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR *)arg1;
- (_Bool)isLocalIPPort:(struct tagIPPORT *)arg1;
- (_Bool)isOnSameIPPortWithConnection:(id)arg1;

@end
