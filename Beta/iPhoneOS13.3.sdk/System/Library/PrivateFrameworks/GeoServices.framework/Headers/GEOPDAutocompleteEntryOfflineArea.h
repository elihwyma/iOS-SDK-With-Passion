/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryOfflineArea : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    _Bool _availableForDownload;
    struct {
        unsigned int has_featureId:1;
        unsigned int has_availableForDownload:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) _Bool hasAvailableForDownload;
@property (nonatomic) _Bool availableForDownload;
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
