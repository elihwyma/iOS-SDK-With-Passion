/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol VCConnectionProtocol <Swift>

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

- (unsigned short)isSameAsConnection: /* Error: Ran out of types for this method. */;
- (unsigned short)isOnSameInterfacesWithConnection: /* Error: Ran out of types for this method. */;
- (unsigned short)getSourceDestinationInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)matchesSourceDestinationInfo: /* Error: Ran out of types for this method. */;

@end
