/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NWPBAgentClass;

@interface NWPBAgent : PBCodable

{
    NWPBAgentClass *_agentClass;
    NSData *_agentData;
    NSString *_agentDescription;
    NSString *_agentIdentifier;
    _Bool _active;
    _Bool _networkProvider;
    _Bool _nexusProvider;
    _Bool _userActivated;
    _Bool _voluntary;
    struct {
        unsigned int active:1;
        unsigned int networkProvider:1;
        unsigned int nexusProvider:1;
        unsigned int userActivated:1;
        unsigned int voluntary:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAgentClass;
@property (retain, nonatomic) NWPBAgentClass *agentClass;
@property (nonatomic, readonly) _Bool hasAgentIdentifier;
@property (retain, nonatomic) NSString *agentIdentifier;
@property (nonatomic, readonly) _Bool hasAgentDescription;
@property (retain, nonatomic) NSString *agentDescription;
@property (nonatomic) _Bool hasActive;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool hasUserActivated;
@property (nonatomic) _Bool userActivated;
@property (nonatomic) _Bool hasVoluntary;
@property (nonatomic) _Bool voluntary;
@property (nonatomic) _Bool hasNetworkProvider;
@property (nonatomic) _Bool networkProvider;
@property (nonatomic) _Bool hasNexusProvider;
@property (nonatomic) _Bool nexusProvider;
@property (nonatomic, readonly) _Bool hasAgentData;
@property (retain, nonatomic) NSData *agentData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
