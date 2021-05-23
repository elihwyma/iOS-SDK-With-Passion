/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackLayoutConfigResult : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_forms;
}

@property (retain, nonatomic) NSMutableArray *forms;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)formType;
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
- (void)addForm:(id)arg1;
- (unsigned long long)formsCount;
- (void)clearForms;
- (id)formAtIndex:(unsigned long long)arg1;

@end
