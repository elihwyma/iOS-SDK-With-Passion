/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface HistogramBin : PBCodable

{
    unsigned int _ids;
    unsigned int _value;
    struct {
        unsigned int ids:1;
        unsigned int value:1;
    } _has;
}

@property (nonatomic) _Bool hasIds;
@property (nonatomic) unsigned int ids;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) unsigned int value;

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
