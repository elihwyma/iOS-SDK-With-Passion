/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

@interface GEODataSetDescription : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_dataSetDescription;
    unsigned int _identifier;
    CDStruct_7c00b98a _flags;
}

@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, readonly) _Bool hasDataSetDescription;
@property (retain, nonatomic) NSString *dataSetDescription;
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
