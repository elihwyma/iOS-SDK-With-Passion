/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPMerchantLookupContext, GEORPMerchantLookupCorrections, PBDataReader, PBUnknownFields;

@interface GEORPMerchantLookupFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPMerchantLookupContext *_context;
    GEORPMerchantLookupCorrections *_corrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    CDStruct_5bb8e4f8 _flags;
}

@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) GEORPMerchantLookupContext *context;
@property (nonatomic, readonly) _Bool hasCorrections;
@property (retain, nonatomic) GEORPMerchantLookupCorrections *corrections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readContext;
- (void)_readCorrections;

@end
