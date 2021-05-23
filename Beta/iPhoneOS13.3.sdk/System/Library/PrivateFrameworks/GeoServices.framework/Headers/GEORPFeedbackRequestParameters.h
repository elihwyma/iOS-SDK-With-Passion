/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPFeedbackIdLookupParameters, GEORPFeedbackImageUploadParameters, GEORPFeedbackLayoutConfigParameters, GEORPFeedbackQueryParameters, GEORPFeedbackSubmissionParameters, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackRequestParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupParameters *_idLookupParameters;
    GEORPFeedbackImageUploadParameters *_imageUploadParameters;
    GEORPFeedbackLayoutConfigParameters *_layoutConfigParameters;
    GEORPFeedbackQueryParameters *_queryParameters;
    GEORPFeedbackSubmissionParameters *_submissionParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_idLookupParameters:1;
        unsigned int read_imageUploadParameters:1;
        unsigned int read_layoutConfigParameters:1;
        unsigned int read_queryParameters:1;
        unsigned int read_submissionParameters:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_idLookupParameters:1;
        unsigned int wrote_imageUploadParameters:1;
        unsigned int wrote_layoutConfigParameters:1;
        unsigned int wrote_queryParameters:1;
        unsigned int wrote_submissionParameters:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSubmissionParameters;
@property (retain, nonatomic) GEORPFeedbackSubmissionParameters *submissionParameters;
@property (nonatomic, readonly) _Bool hasIdLookupParameters;
@property (retain, nonatomic) GEORPFeedbackIdLookupParameters *idLookupParameters;
@property (nonatomic, readonly) _Bool hasQueryParameters;
@property (retain, nonatomic) GEORPFeedbackQueryParameters *queryParameters;
@property (nonatomic, readonly) _Bool hasImageUploadParameters;
@property (retain, nonatomic) GEORPFeedbackImageUploadParameters *imageUploadParameters;
@property (nonatomic, readonly) _Bool hasLayoutConfigParameters;
@property (retain, nonatomic) GEORPFeedbackLayoutConfigParameters *layoutConfigParameters;
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
- (void)_readSubmissionParameters;
- (void)_readIdLookupParameters;
- (void)_readQueryParameters;
- (void)_readImageUploadParameters;
- (void)_readLayoutConfigParameters;
- (id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(CDStruct_c3b9c2ee)arg10;

@end
