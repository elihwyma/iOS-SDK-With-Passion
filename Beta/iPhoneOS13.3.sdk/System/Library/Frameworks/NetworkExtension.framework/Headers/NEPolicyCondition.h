/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, NWAddressEndpoint;

@interface NEPolicyCondition : NSObject

{
    _Bool _negative;
    unsigned char _prefix;
    unsigned short _ipProtocol;
    int _pid;
    unsigned int _uid;
    unsigned int _trafficClassStart;
    unsigned int _trafficClassEnd;
    unsigned int _clientFlags;
    long long _conditionType;
    NSUUID *_applicationUUID;
    NSString *_accountIdentifier;
    NSString *_domain;
    NSString *_interfaceName;
    NWAddressEndpoint *_startAddress;
    NWAddressEndpoint *_endAddress;
    NSString *_customEntitlement;
    NSString *_agentDomain;
    NSString *_agentType;
}

@property long long conditionType;
@property (copy) NSUUID *applicationUUID;
@property int pid;
@property unsigned int uid;
@property (copy) NSString *accountIdentifier;
@property (copy) NSString *domain;
@property (copy) NSString *interfaceName;
@property unsigned int trafficClassStart;
@property unsigned int trafficClassEnd;
@property unsigned short ipProtocol;
@property unsigned char prefix;
@property unsigned int clientFlags;
@property (copy) NWAddressEndpoint *startAddress;
@property (copy) NWAddressEndpoint *endAddress;
@property (copy) NSString *customEntitlement;
@property (copy) NSString *agentDomain;
@property (copy) NSString *agentType;
@property (getter=isNegative) _Bool negative;

+ (id)isListener;
+ (id)entitlement;
+ (id)scopedInterface:(id)arg1;
+ (id)isInbound;
+ (id)effectiveApplication:(id)arg1;
+ (id)realApplication:(id)arg1;
+ (id)effectivePID:(int)arg1;
+ (id)uid:(unsigned int)arg1;
+ (id)allInterfaces;
+ (id)usesModernNetworkAPI;
+ (id)requiredAgentDomain:(id)arg1 agentType:(id)arg2;
+ (id)accountIdentifier:(id)arg1;
+ (id)domain:(id)arg1;
+ (id)trafficClassStart:(unsigned int)arg1 end:(unsigned int)arg2;
+ (id)ipProtocol:(unsigned short)arg1;
+ (id)flowIPProtocol:(unsigned short)arg1;
+ (id)clientFlags:(unsigned int)arg1;
+ (id)localAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)remoteAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)flowLocalAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)flowRemoteAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)localAddressStart:(id)arg1 end:(id)arg2;
+ (id)remoteAddressStart:(id)arg1 end:(id)arg2;
+ (id)flowLocalAddressStart:(id)arg1 end:(id)arg2;
+ (id)flowRemoteAddressStart:(id)arg1 end:(id)arg2;
+ (id)flowLocalAddressEmpty;
+ (id)flowRemoteAddressEmpty;
+ (id)platformBinary;
+ (id)localNetworks;
+ (id)customEntitlement:(id)arg1;
+ (id)fallbackTraffic;
+ (id)clientProhibitsContrained;
+ (id)clientProhibitsExpensive;

- (id)init;
- (id)description;
- (_Bool)validate;
- (id)initInternal;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)conditionTypeString;
- (unsigned char)conditionTypeValue;
- (_Bool)addTLVsToMessage:(id)arg1;

@end
