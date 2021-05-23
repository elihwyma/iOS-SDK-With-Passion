/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularLteRadioLinkFailure : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _band;
    unsigned int _coexPolicy;
    int _failCause;
    unsigned int _hstState;
    int _rrcState;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int band:1;
        unsigned int coexPolicy:1;
        unsigned int failCause:1;
        unsigned int hstState:1;
        unsigned int rrcState:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasFailCause;
@property (nonatomic) int failCause;
@property (nonatomic) _Bool hasBand;
@property (nonatomic) unsigned int band;
@property (nonatomic) _Bool hasCoexPolicy;
@property (nonatomic) unsigned int coexPolicy;
@property (nonatomic) _Bool hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) _Bool hasHstState;
@property (nonatomic) unsigned int hstState;
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
- (id)rrcStateAsString:(int)arg1;
- (int)StringAsRrcState:(id)arg1;
- (id)failCauseAsString:(int)arg1;
- (int)StringAsFailCause:(id)arg1;

@end
