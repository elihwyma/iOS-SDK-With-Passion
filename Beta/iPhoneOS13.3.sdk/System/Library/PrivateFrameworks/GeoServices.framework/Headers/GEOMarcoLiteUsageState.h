/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOMarcoLiteUsageState : PBCodable

{
    int _stateExitReason;
    unsigned int _stateTime;
    int _stateType;
    unsigned int _stateValue;
    struct {
        unsigned int has_stateExitReason:1;
        unsigned int has_stateTime:1;
        unsigned int has_stateType:1;
        unsigned int has_stateValue:1;
    } _flags;
}

@property (nonatomic) _Bool hasStateType;
@property (nonatomic) int stateType;
@property (nonatomic) _Bool hasStateValue;
@property (nonatomic) unsigned int stateValue;
@property (nonatomic) _Bool hasStateTime;
@property (nonatomic) unsigned int stateTime;
@property (nonatomic) _Bool hasStateExitReason;
@property (nonatomic) int stateExitReason;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)stateTypeAsString:(int)arg1;
- (int)StringAsStateType:(id)arg1;
- (id)stateExitReasonAsString:(int)arg1;
- (int)StringAsStateExitReason:(id)arg1;

@end
