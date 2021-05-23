/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NWPBEndpoint, NWPBInterface, NWPBParameters;

@interface NWPBPath : PBCodable

{
    NSMutableArray *_agents;
    NSString *_clientUUID;
    NWPBInterface *_delegateInterface;
    NWPBInterface *_directInterface;
    NWPBEndpoint *_endpoint;
    NWPBParameters *_parameters;
    int _status;
    _Bool _direct;
    _Bool _ipv4;
    _Bool _ipv6;
    _Bool _local;
    struct {
        unsigned int status:1;
        unsigned int direct:1;
        unsigned int ipv4:1;
        unsigned int ipv6:1;
        unsigned int local:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasEndpoint;
@property (retain, nonatomic) NWPBEndpoint *endpoint;
@property (nonatomic, readonly) _Bool hasParameters;
@property (retain, nonatomic) NWPBParameters *parameters;
@property (nonatomic, readonly) _Bool hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasDirectInterface;
@property (retain, nonatomic) NWPBInterface *directInterface;
@property (nonatomic, readonly) _Bool hasDelegateInterface;
@property (retain, nonatomic) NWPBInterface *delegateInterface;
@property (retain, nonatomic) NSMutableArray *agents;
@property (nonatomic) _Bool hasIpv4;
@property (nonatomic) _Bool ipv4;
@property (nonatomic) _Bool hasIpv6;
@property (nonatomic) _Bool ipv6;
@property (nonatomic) _Bool hasLocal;
@property (nonatomic) _Bool local;
@property (nonatomic) _Bool hasDirect;
@property (nonatomic) _Bool direct;

+ (Class)agentsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)clearAgents;
- (void)addAgents:(id)arg1;
- (unsigned long long)agentsCount;
- (id)agentsAtIndex:(unsigned long long)arg1;

@end
