/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEORPFeedbackLayoutFieldName : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _addressFieldName;
    int _groundviewFieldName;
    int _otherFieldName;
    int _poiFieldName;
    int _workflowFieldName;
    struct {
        unsigned int has_addressFieldName:1;
        unsigned int has_groundviewFieldName:1;
        unsigned int has_otherFieldName:1;
        unsigned int has_poiFieldName:1;
        unsigned int has_workflowFieldName:1;
    } _flags;
}

@property (nonatomic) _Bool hasWorkflowFieldName;
@property (nonatomic) int workflowFieldName;
@property (nonatomic) _Bool hasPoiFieldName;
@property (nonatomic) int poiFieldName;
@property (nonatomic) _Bool hasAddressFieldName;
@property (nonatomic) int addressFieldName;
@property (nonatomic) _Bool hasOtherFieldName;
@property (nonatomic) int otherFieldName;
@property (nonatomic) _Bool hasGroundviewFieldName;
@property (nonatomic) int groundviewFieldName;
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
- (id)workflowFieldNameAsString:(int)arg1;
- (int)StringAsWorkflowFieldName:(id)arg1;
- (id)poiFieldNameAsString:(int)arg1;
- (int)StringAsPoiFieldName:(id)arg1;
- (id)addressFieldNameAsString:(int)arg1;
- (int)StringAsAddressFieldName:(id)arg1;
- (id)otherFieldNameAsString:(int)arg1;
- (int)StringAsOtherFieldName:(id)arg1;
- (id)groundviewFieldNameAsString:(int)arg1;
- (int)StringAsGroundviewFieldName:(id)arg1;

@end
