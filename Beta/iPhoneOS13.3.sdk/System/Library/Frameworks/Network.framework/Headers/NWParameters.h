/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSSet, NSString, NSURL, NSUUID, NWAddressEndpoint, NWInterface;

@protocol OS_nw_parameters;

@interface NWParameters : NSObject

{
    _Bool _enableSFO;
    NSObject<OS_nw_parameters> *_internalParameters;
    NSSet *_SSLCipherSuitesInternal;
    unsigned long long _minimumSSLProtocolVersionInternal;
    unsigned long long _maximumSSLProtocolVersionInternal;
}

@property (retain) NSObject<OS_nw_parameters> *internalParameters;
@property (nonatomic) _Bool indefinite;
@property (nonatomic) _Bool noProxy;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly, getter=isDryRun) _Bool dryRun;
@property (nonatomic, readonly) _Bool prohibitCellular;
@property (nonatomic) _Bool prohibitFallback;
@property (nonatomic, getter=isDiscretionary) _Bool discretionary;
@property (nonatomic) _Bool allowSocketAccess;
@property (retain, nonatomic) NSUUID *parentID;
@property (retain, nonatomic) NSSet *SSLCipherSuitesInternal;
@property (nonatomic) unsigned long long minimumSSLProtocolVersionInternal;
@property (nonatomic) unsigned long long maximumSSLProtocolVersionInternal;
@property (nonatomic, readonly) unsigned char transportProtocol;
@property (nonatomic) _Bool keepAlive;
@property (nonatomic) unsigned long long keepAliveIdleTime;
@property (nonatomic) unsigned long long keepAliveInterval;
@property (nonatomic) _Bool keepAliveOffload;
@property (nonatomic) _Bool httpsProxyIsOpaque;
@property (nonatomic) _Bool httpsProxyOverTLS;
@property (nonatomic) _Bool attachProtocolListener;
@property (nonatomic) _Bool prohibitJoiningProtocols;
@property (nonatomic) _Bool allowJoiningConnectedFd;
@property (nonatomic) _Bool allowDuplicateStateUpdates;
@property (nonatomic) _Bool trustInvalidCertificates;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (nonatomic, readonly) unsigned char ipProtocol;
@property (nonatomic) int pid;
@property (nonatomic) unsigned int uid;
@property (copy, nonatomic) NSUUID *processUUID;
@property (copy, nonatomic) NSUUID *effectiveProcessUUID;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (nonatomic) _Bool useLongOutstandingQueries;
@property (nonatomic) _Bool ignoreResolverStats;
@property (nonatomic) _Bool useAWDL;
@property (nonatomic) _Bool useP2P;
@property (nonatomic) _Bool resolvePTR;
@property (nonatomic) _Bool multipath;
@property (nonatomic) int multipathService;
@property (nonatomic) _Bool multipathForceEnable;
@property (nonatomic) unsigned char requiredAddressFamily;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic, readonly) NSURL *sanitizedURL;
@property (copy, nonatomic) NSDictionary *proxyConfiguration;
@property (retain, nonatomic) NWAddressEndpoint *localAddress;
@property (nonatomic) _Bool reuseLocalAddress;
@property (retain, nonatomic) NWInterface *requiredInterface;
@property (nonatomic) long long requiredInterfaceType;
@property (nonatomic) long long requiredInterfaceSubtype;
@property (nonatomic) _Bool enableTFO;
@property (nonatomic) _Bool enableTFONoCookie;
@property (nonatomic) _Bool useTFOHeuristics;
@property (nonatomic) _Bool fastOpenForceEnable;
@property (nonatomic) _Bool enableSFO;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) _Bool prohibitRoaming;
@property (copy, nonatomic) NSArray *protocolTransforms;
@property (nonatomic) _Bool allowUnusableAddresses;
@property (nonatomic) _Bool preferNoProxy;
@property (copy, nonatomic) NSString *account;
@property (nonatomic) unsigned long long dataMode;
@property (nonatomic) unsigned long long trafficClass;
@property (nonatomic) _Bool prohibitExpensivePaths;
@property (nonatomic) _Bool prohibitConstrainedPaths;
@property (nonatomic) _Bool reduceBuffering;
@property (nonatomic) _Bool disableNagleAlgorithm;
@property (nonatomic) _Bool enableTLS;
@property (copy, nonatomic) NSData *TLSSessionID;
@property (copy, nonatomic) NSSet *SSLCipherSuites;
@property (nonatomic) unsigned long long minimumSSLProtocolVersion;
@property (nonatomic) unsigned long long maximumSSLProtocolVersion;

+ (_Bool)supportsSecureCoding;
+ (id)parametersWithCParameters:(id)arg1;
+ (id)parametersWithProtocolBufferData:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)createProtocolBufferObject;
- (id)copyCParameters;
- (_Bool)hasDelegatedPIDForOriginatingPID:(int)arg1;
- (_Bool)hasDelegatedProcessUUID;
- (_Bool)copyEffectiveAuditToken:(CDStruct_6ad76789 *)arg1;
- (void)prohibitInterfaceType:(long long)arg1;
- (void)prohibitInterfaceSubtype:(long long)arg1;
- (void)prohibitInterface:(id)arg1;
- (void)prohibitNetworkAgentWithUUID:(id)arg1;
- (void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (void)requireNetworkAgentWithUUID:(id)arg1;
- (void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)preferNetworkAgentWithUUID:(id)arg1;
- (void)preferNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)avoidNetworkAgentWithUUID:(id)arg1;
- (void)avoidNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (unsigned short)tlsVersionWithSSLProtocol:(int)arg1;
- (void)setSourceApplicationWithToken:(CDStruct_6ad76789)arg1;
- (void)setSourceApplicationWithBundleID:(id)arg1;
- (void)setInitialDataPayload:(id)arg1;
- (_Bool)hasRequiredNetworkAgents;
- (_Bool)hasPreferredNetworkAgents;
- (_Bool)hasProhibitedNetworkAgents;
- (_Bool)hasNonEmptyProxyConfiguration;
- (id)copyRequiredAgentsDescription;
- (void)setProtocolAtLevel:(unsigned long long)arg1 protocol:(struct nw_protocol_identifier *)arg2;

@end
