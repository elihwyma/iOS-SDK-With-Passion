/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOModality : PBCodable

{
    double _timestamp;
    int _confidence;
    _Bool _expectedModality;
    _Bool _notMoving;
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_confidence:1;
        unsigned int has_expectedModality:1;
        unsigned int has_notMoving:1;
    } _flags;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasExpectedModality;
@property (nonatomic) _Bool expectedModality;
@property (nonatomic) _Bool hasNotMoving;
@property (nonatomic) _Bool notMoving;
@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) int confidence;

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
- (id)confidenceAsString:(int)arg1;
- (int)StringAsConfidence:(id)arg1;

@end
