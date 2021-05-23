/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID, NWAdvertiseDescriptor, NWBrowseDescriptor, NWEndpoint, NWInterface, NWParameters;

@protocol OS_nw_path;

@interface NWPath : NSObject

{
    NSObject<OS_nw_path> *_internalPath;
}

@property (readonly) NSObject<OS_nw_path> *internalPath;
@property (nonatomic, readonly) unsigned int fallbackInterfaceIndex;
@property (nonatomic, readonly) _Bool fallbackIsWeak;
@property (nonatomic, readonly) _Bool fallbackEligible;
@property (nonatomic, readonly) NSArray *dnsServersAsStrings;
@property (nonatomic, readonly) NSArray *gateways;
@property (nonatomic, readonly) NSArray *flows;
@property (nonatomic, readonly) NSString *statusAsString;
@property (nonatomic, readonly) NWInterface *connectedInterface;
@property (nonatomic, readonly, getter=isListener) _Bool listener;
@property (nonatomic, readonly, getter=isViable) _Bool viable;
@property (nonatomic, readonly) NSUUID *clientID;
@property (nonatomic, readonly) NWInterface *interface;
@property (nonatomic, readonly) NWInterface *scopedInterface;
@property (nonatomic, readonly) NWInterface *fallbackInterface;
@property (nonatomic, readonly, getter=isFlowDivert) _Bool flowDivert;
@property (nonatomic, readonly) unsigned int flowDivertControlUnit;
@property (nonatomic, readonly, getter=isFiltered) _Bool filtered;
@property (nonatomic, readonly) unsigned int filterControlUnit;
@property (nonatomic, readonly) int dnsServiceID;
@property (nonatomic, readonly, getter=isLocal) _Bool local;
@property (nonatomic, readonly, getter=isDirect) _Bool direct;
@property (nonatomic, readonly) unsigned int policyID;
@property (nonatomic, readonly, getter=isRoaming) _Bool roaming;
@property (nonatomic, readonly) long long mtu;
@property (nonatomic, readonly) long long maximumDatagramSize;
@property (nonatomic, readonly) unsigned long long secondsSinceInterfaceChange;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSString *reasonDescription;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (nonatomic, readonly) NWParameters *derivedParameters;
@property (nonatomic, readonly) _Bool supportsIPv4;
@property (nonatomic, readonly) _Bool supportsIPv6;
@property (nonatomic, readonly) _Bool supportsDNS;
@property (nonatomic, readonly, getter=isEligibleForCrazyIvan46) _Bool eligibleForCrazyIvan46;
@property (nonatomic, readonly) NWEndpoint *endpoint;
@property (nonatomic, readonly) NWParameters *parameters;
@property (nonatomic, readonly) NWEndpoint *effectiveLocalEndpoint;
@property (nonatomic, readonly) NWEndpoint *effectiveRemoteEndpoint;
@property (nonatomic, readonly) NSArray *proxySettings;
@property (nonatomic, readonly) NSArray *dnsServers;
@property (nonatomic, readonly) NSArray *dnsSearchDomains;
@property (nonatomic, readonly) _Bool hasBrowseDescriptor;
@property (nonatomic, readonly) NWBrowseDescriptor *browseDescriptor;
@property (nonatomic, readonly) _Bool hasAdvertiseDescriptor;
@property (nonatomic, readonly) NWAdvertiseDescriptor *advertiseDescriptor;
@property (nonatomic, readonly, getter=isPerAppVPN) _Bool perAppVPN;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, getter=isExpensive) _Bool expensive;
@property (nonatomic, readonly, getter=isConstrained) _Bool constrained;

+ (id)createStringFromStatus:(long long)arg1;
+ (id)allClientIDs;
+ (id)pathForClientID:(id)arg1;
+ (id)pathWithProtocolBufferData:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithPath:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)createProtocolBufferObject;
- (_Bool)isEqualToPath:(id)arg1;
- (_Bool)shouldProbeConnectivity;
- (_Bool)isLinkQualityAbort;
- (_Bool)isListenerInterfaceSpecific;
- (_Bool)usesInterfaceType:(long long)arg1;
- (_Bool)usesNetworkAgentType:(Class)arg1;
- (_Bool)usesNetworkAgent:(id)arg1;
- (id)networkAgentsOfType:(Class)arg1;
- (id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (id)inactiveNetworkAgentUUIDsOnlyVoluntary:(_Bool)arg1;
- (id)delegateInterface;
- (id)copyFlowDivertToken;
- (_Bool)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(_Bool *)arg2;
- (_Bool)hasUnsatisfiedFallbackAgent;

@end
