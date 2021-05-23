/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _resultProviderId;
    _Bool _enablePartialClientization;
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int has_enablePartialClientization:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (nonatomic) _Bool hasEnablePartialClientization;
@property (nonatomic) _Bool enablePartialClientization;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)mapsIdType;

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
- (void)addMapsId:(id)arg1;
- (unsigned long long)mapsIdsCount;
- (void)clearMapsIds;
- (id)mapsIdAtIndex:(unsigned long long)arg1;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;

@end
