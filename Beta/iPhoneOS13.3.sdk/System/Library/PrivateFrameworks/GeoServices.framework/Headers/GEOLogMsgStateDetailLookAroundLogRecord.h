/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable

{
    double _relativeTimestamp;
    int _action;
    int _target;
    struct {
        unsigned int has_relativeTimestamp:1;
        unsigned int has_action:1;
        unsigned int has_target:1;
    } _flags;
}

@property (nonatomic) _Bool hasAction;
@property (nonatomic) int action;
@property (nonatomic) _Bool hasTarget;
@property (nonatomic) int target;
@property (nonatomic) _Bool hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;

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
- (id)actionAsString:(int)arg1;
- (int)StringAsAction:(id)arg1;
- (id)targetAsString:(int)arg1;
- (int)StringAsTarget:(id)arg1;

@end
