/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPFeedbackAddressFields, PBUnknownFields;

@interface GEORPGroundViewCorrections : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEORPFeedbackAddressFields *_addressToCensor;
    int _correctionType;
    CDStruct_ef3e2236 _flags;
}

@property (nonatomic) _Bool hasCorrectionType;
@property (nonatomic) int correctionType;
@property (nonatomic, readonly) _Bool hasAddressToCensor;
@property (retain, nonatomic) GEORPFeedbackAddressFields *addressToCensor;
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
- (id)correctionTypeAsString:(int)arg1;
- (int)StringAsCorrectionType:(id)arg1;

@end
