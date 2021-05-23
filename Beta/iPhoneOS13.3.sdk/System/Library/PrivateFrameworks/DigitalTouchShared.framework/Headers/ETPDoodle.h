/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ETPDoodle : PBCodable

{
    NSData *_colorData;
    unsigned int _doodleCount;
    NSData *_doodleData;
    NSData *_pointTimeDeltaData;
    struct {
        unsigned int doodleCount:1;
    } _has;
}

@property (nonatomic) _Bool hasDoodleCount;
@property (nonatomic) unsigned int doodleCount;
@property (nonatomic, readonly) _Bool hasDoodleData;
@property (retain, nonatomic) NSData *doodleData;
@property (nonatomic, readonly) _Bool hasColorData;
@property (retain, nonatomic) NSData *colorData;
@property (nonatomic, readonly) _Bool hasPointTimeDeltaData;
@property (retain, nonatomic) NSData *pointTimeDeltaData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
