/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_measurements;
    unsigned int _maxLabels;
    struct {
        unsigned int has_maxLabels:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *measurements;
@property (nonatomic) _Bool hasMaxLabels;
@property (nonatomic) unsigned int maxLabels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)measurementType;

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
- (void)clearSensitiveFields;
- (void)addMeasurement:(id)arg1;
- (unsigned long long)measurementsCount;
- (void)clearMeasurements;
- (id)measurementAtIndex:(unsigned long long)arg1;

@end
