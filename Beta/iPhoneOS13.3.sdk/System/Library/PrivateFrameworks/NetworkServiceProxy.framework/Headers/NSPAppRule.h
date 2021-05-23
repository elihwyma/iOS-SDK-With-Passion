/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <NetworkExtension/NEAppRule.h>

@class NSArray, NSData, NSDate, NSNumber, NSPNetworkAgent, NSString, NSUUID, NWNetworkAgentRegistration;

@interface NSPAppRule : NEAppRule

{
    _Bool _disabledByRatio;
    NSNumber *_disableFallback;
    NSNumber *_enableDirectMultipath;
    NSNumber *_enableDirectTFO;
    NSNumber *_enableDirectExtendedValidation;
    NSArray *_directTLSPorts;
    NSNumber *_divertDNSOnly;
    NSNumber *_noDNSDelegation;
    NSNumber *_serviceID;
    NSNumber *_enabled;
    NSNumber *_fallbackTimeout;
    NSNumber *_fallbackBufferLimit;
    NSNumber *_fallbackCountBeforeImmediateFallback;
    NSString *_proxyEvaluationPath;
    NSNumber *_useCustomProtocol;
    NSNumber *_useLocalFlowDivert;
    NSNumber *_enableDirectRace;
    NSString *_label;
    NSString *_edgeSetIdentifier;
    NSNumber *_connectionTimeout;
    NSNumber *_connectionIdleTimeout;
    NSNumber *_enableMultipath;
    NSNumber *_enableTFO;
    NSNumber *_requireTFO;
    NSNumber *_useTFOHeuristics;
    NSNumber *_enableNoTFOCookie;
    NSNumber *_enableUDPRace;
    NSNumber *_enableRatio;
    NSNumber *_reenableInterval;
    NSNumber *_telemetryRatio;
    NSNumber *_shouldComposeInitialData;
    NSNumber *_enableOptInPerTask;
    NSArray *_matchEffectiveApplications;
    NSString *_locationBundlePath;
    NSNumber *_initialWindowSize;
    NSPAppRule *_defaults;
    NSPNetworkAgent *_agent;
    NWNetworkAgentRegistration *_agentRegistration;
    NSUUID *_configurationIdentifier;
    NSDate *_enableCheckDate;
    NSData *_updateHash;
}

@property (retain, nonatomic) NSPAppRule *defaults;
@property (retain, nonatomic) NSPNetworkAgent *agent;
@property (retain, nonatomic) NWNetworkAgentRegistration *agentRegistration;
@property (retain, nonatomic) NSUUID *configurationIdentifier;
@property (retain, nonatomic) NSDate *enableCheckDate;
@property (nonatomic) _Bool disabledByRatio;
@property (retain, nonatomic) NSData *updateHash;
@property (copy, nonatomic) NSNumber *disableFallback;
@property (copy, nonatomic) NSNumber *enableDirectMultipath;
@property (copy, nonatomic) NSNumber *enableDirectTFO;
@property (copy, nonatomic) NSNumber *enableDirectExtendedValidation;
@property (copy, nonatomic) NSArray *directTLSPorts;
@property (copy, nonatomic) NSNumber *divertDNSOnly;
@property (copy, nonatomic) NSNumber *noDNSDelegation;
@property (copy, nonatomic) NSNumber *serviceID;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *fallbackTimeout;
@property (copy, nonatomic) NSNumber *fallbackBufferLimit;
@property (copy, nonatomic) NSNumber *fallbackCountBeforeImmediateFallback;
@property (copy, nonatomic) NSString *proxyEvaluationPath;
@property (copy, nonatomic) NSNumber *useCustomProtocol;
@property (copy, nonatomic) NSNumber *useLocalFlowDivert;
@property (copy, nonatomic) NSNumber *enableDirectRace;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *edgeSetIdentifier;
@property (copy, nonatomic) NSNumber *connectionTimeout;
@property (copy, nonatomic) NSNumber *connectionIdleTimeout;
@property (copy, nonatomic) NSNumber *enableMultipath;
@property (copy, nonatomic) NSNumber *enableTFO;
@property (copy, nonatomic) NSNumber *requireTFO;
@property (copy, nonatomic) NSNumber *useTFOHeuristics;
@property (copy, nonatomic) NSNumber *enableNoTFOCookie;
@property (copy, nonatomic) NSNumber *enableUDPRace;
@property (copy, nonatomic) NSNumber *enableRatio;
@property (copy, nonatomic) NSNumber *reenableInterval;
@property (copy, nonatomic) NSNumber *telemetryRatio;
@property (copy, nonatomic) NSNumber *shouldComposeInitialData;
@property (copy, nonatomic) NSNumber *enableOptInPerTask;
@property (copy, nonatomic) NSArray *matchEffectiveApplications;
@property (copy, nonatomic) NSString *locationBundlePath;
@property (copy, nonatomic) NSNumber *initialWindowSize;

+ (_Bool)supportsSecureCoding;
+ (id)validateRuleDictionary:(id)arg1;
+ (id)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2;
+ (void)loadAppRules:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFromDictionary:(id)arg1;
- (id)copyTLVData;
- (id)initFromTLVs:(id)arg1;
- (id)copyExecutableConditions;
- (id)copyAccountIdentifierConditions;
- (id)copyMatchDomainConditions;
- (id)copyMatchEffectiveApplicationConditions;
- (_Bool)updateNetworkAgent;
- (void)teardownNetworkAgent;

@end
