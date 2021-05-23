/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString, NWPBEndpoint, NWPBInterface;

@interface NWPBParameters : PBCodable

{
    CDStruct_95bda58d _prohibitedInterfaceSubTypes;
    CDStruct_95bda58d _prohibitedInterfaceTypes;
    NSString *_account;
    unsigned int _addressFamily;
    int _dataMode;
    NSString *_effectiveBundleID;
    NSString *_effectiveProcessUUID;
    unsigned int _ipProtocol;
    NWPBEndpoint *_localEndpoint;
    NSData *_metadata;
    NSMutableArray *_preferredAgents;
    NSMutableArray *_prohibitedAgents;
    NSMutableArray *_prohibitedInterfaces;
    NSString *_realProcessUUID;
    NSMutableArray *_requiredAgents;
    NWPBInterface *_requiredInterface;
    int _requiredInterfaceType;
    unsigned int _trafficClass;
    NSString *_url;
    _Bool _fastOpen;
    _Bool _keepalive;
    _Bool _longOutstandingQueries;
    unsigned int _multipathService;
    _Bool _noFallback;
    _Bool _prohibitExpensive;
    _Bool _reduceBuffering;
    _Bool _reuseLocalAddress;
    _Bool _useAWDL;
    _Bool _useP2P;
    struct {
        unsigned int addressFamily:1;
        unsigned int dataMode:1;
        unsigned int ipProtocol:1;
        unsigned int requiredInterfaceType:1;
        unsigned int trafficClass:1;
        unsigned int fastOpen:1;
        unsigned int keepalive:1;
        unsigned int longOutstandingQueries:1;
        unsigned int multipath:1;
        unsigned int noFallback:1;
        unsigned int prohibitExpensive:1;
        unsigned int reduceBuffering:1;
        unsigned int reuseLocalAddress:1;
        unsigned int useAWDL:1;
        unsigned int useP2P:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAccount;
@property (retain, nonatomic) NSString *account;
@property (nonatomic, readonly) _Bool hasEffectiveBundleID;
@property (retain, nonatomic) NSString *effectiveBundleID;
@property (nonatomic, readonly) _Bool hasEffectiveProcessUUID;
@property (retain, nonatomic) NSString *effectiveProcessUUID;
@property (nonatomic, readonly) _Bool hasRealProcessUUID;
@property (retain, nonatomic) NSString *realProcessUUID;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) _Bool hasIpProtocol;
@property (nonatomic) unsigned int ipProtocol;
@property (nonatomic) _Bool hasAddressFamily;
@property (nonatomic) unsigned int addressFamily;
@property (nonatomic) _Bool hasTrafficClass;
@property (nonatomic) unsigned int trafficClass;
@property (nonatomic) _Bool hasDataMode;
@property (nonatomic) int dataMode;
@property (nonatomic) _Bool hasRequiredInterfaceType;
@property (nonatomic) int requiredInterfaceType;
@property (nonatomic) _Bool hasProhibitExpensive;
@property (nonatomic) _Bool prohibitExpensive;
@property (nonatomic) _Bool hasFastOpen;
@property (nonatomic) _Bool fastOpen;
@property (nonatomic) _Bool hasReduceBuffering;
@property (nonatomic) _Bool reduceBuffering;
@property (nonatomic) _Bool hasLongOutstandingQueries;
@property (nonatomic) _Bool longOutstandingQueries;
@property (nonatomic) _Bool hasUseAWDL;
@property (nonatomic) _Bool useAWDL;
@property (nonatomic) _Bool hasUseP2P;
@property (nonatomic) _Bool useP2P;
@property (nonatomic) _Bool hasReuseLocalAddress;
@property (nonatomic) _Bool reuseLocalAddress;
@property (nonatomic) _Bool hasNoFallback;
@property (nonatomic) _Bool noFallback;
@property (nonatomic) _Bool hasMultipath;
@property (nonatomic) unsigned int multipathService;
@property (nonatomic) _Bool hasKeepalive;
@property (nonatomic) _Bool keepalive;
@property (nonatomic, readonly) _Bool hasLocalEndpoint;
@property (retain, nonatomic) NWPBEndpoint *localEndpoint;
@property (nonatomic, readonly) _Bool hasRequiredInterface;
@property (retain, nonatomic) NWPBInterface *requiredInterface;
@property (nonatomic, readonly) unsigned long long prohibitedInterfaceTypesCount;
@property (nonatomic, readonly) int *prohibitedInterfaceTypes;
@property (nonatomic, readonly) unsigned long long prohibitedInterfaceSubTypesCount;
@property (nonatomic, readonly) int *prohibitedInterfaceSubTypes;
@property (retain, nonatomic) NSMutableArray *prohibitedInterfaces;
@property (retain, nonatomic) NSMutableArray *prohibitedAgents;
@property (retain, nonatomic) NSMutableArray *requiredAgents;
@property (retain, nonatomic) NSMutableArray *preferredAgents;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) NSData *metadata;

+ (Class)prohibitedInterfacesType;
+ (Class)prohibitedAgentsType;
+ (Class)requiredAgentsType;
+ (Class)preferredAgentsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)dataModeAsString:(int)arg1;
- (int)StringAsDataMode:(id)arg1;
- (id)requiredInterfaceTypeAsString:(int)arg1;
- (int)StringAsRequiredInterfaceType:(id)arg1;
- (void)clearProhibitedInterfaceTypes;
- (void)addProhibitedInterfaceTypes:(int)arg1;
- (int)prohibitedInterfaceTypesAtIndex:(unsigned long long)arg1;
- (void)setProhibitedInterfaceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)prohibitedInterfaceTypesAsString:(int)arg1;
- (int)StringAsProhibitedInterfaceTypes:(id)arg1;
- (void)clearProhibitedInterfaceSubTypes;
- (void)addProhibitedInterfaceSubTypes:(int)arg1;
- (int)prohibitedInterfaceSubTypesAtIndex:(unsigned long long)arg1;
- (void)setProhibitedInterfaceSubTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)prohibitedInterfaceSubTypesAsString:(int)arg1;
- (int)StringAsProhibitedInterfaceSubTypes:(id)arg1;
- (void)clearProhibitedInterfaces;
- (void)addProhibitedInterfaces:(id)arg1;
- (unsigned long long)prohibitedInterfacesCount;
- (id)prohibitedInterfacesAtIndex:(unsigned long long)arg1;
- (void)clearProhibitedAgents;
- (void)addProhibitedAgents:(id)arg1;
- (unsigned long long)prohibitedAgentsCount;
- (id)prohibitedAgentsAtIndex:(unsigned long long)arg1;
- (void)clearRequiredAgents;
- (void)addRequiredAgents:(id)arg1;
- (unsigned long long)requiredAgentsCount;
- (id)requiredAgentsAtIndex:(unsigned long long)arg1;
- (void)clearPreferredAgents;
- (void)addPreferredAgents:(id)arg1;
- (unsigned long long)preferredAgentsCount;
- (id)preferredAgentsAtIndex:(unsigned long long)arg1;

@end
