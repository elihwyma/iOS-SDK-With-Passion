/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDHoursThreshold : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _closingSoonMessageThresholdSecond;
    unsigned int _openingSoonMessageThresholdSecond;
    struct {
        unsigned int has_closingSoonMessageThresholdSecond:1;
        unsigned int has_openingSoonMessageThresholdSecond:1;
    } _flags;
}

@property (nonatomic) _Bool hasOpeningSoonMessageThresholdSecond;
@property (nonatomic) unsigned int openingSoonMessageThresholdSecond;
@property (nonatomic) _Bool hasClosingSoonMessageThresholdSecond;
@property (nonatomic) unsigned int closingSoonMessageThresholdSecond;
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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
