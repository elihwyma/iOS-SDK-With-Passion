/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgEventGridDurationEndStateErrorInfo : PBCodable

{
    unsigned int _count;
    int _type;
    CDStruct_dd28a305 _flags;
}

@property (nonatomic) _Bool hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
