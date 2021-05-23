/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprint : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _confidence;
    int _labelType;
    int _status;
    struct {
        unsigned int has_confidence:1;
        unsigned int has_labelType:1;
        unsigned int has_status:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasLabelType;
@property (nonatomic) int labelType;
@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) unsigned int confidence;
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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)labelTypeAsString:(int)arg1;
- (int)StringAsLabelType:(id)arg1;

@end
