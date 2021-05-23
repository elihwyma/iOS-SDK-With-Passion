/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularWcdmaRrcConnectionState : PBCodable

{
    unsigned long long _timestamp;
    int _establishmentCause;
    int _releaseCause;
    int _state;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int establishmentCause:1;
        unsigned int releaseCause:1;
        unsigned int state:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;
@property (nonatomic) _Bool hasEstablishmentCause;
@property (nonatomic) int establishmentCause;
@property (nonatomic) _Bool hasReleaseCause;
@property (nonatomic) int releaseCause;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;
- (id)establishmentCauseAsString:(int)arg1;
- (int)StringAsEstablishmentCause:(id)arg1;
- (id)releaseCauseAsString:(int)arg1;
- (int)StringAsReleaseCause:(id)arg1;

@end
