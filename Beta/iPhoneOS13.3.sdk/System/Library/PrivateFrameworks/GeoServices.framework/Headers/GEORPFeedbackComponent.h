/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPFeedbackComponentValue, PBUnknownFields;

@interface GEORPFeedbackComponent : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEORPFeedbackComponentValue *_value;
    int _status;
    int _type;
    struct {
        unsigned int has_status:1;
        unsigned int has_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) GEORPFeedbackComponentValue *value;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
