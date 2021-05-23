/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPFeedbackIdLookupResult, GEORPFeedbackImageUploadResult, GEORPFeedbackLayoutConfigResult, GEORPFeedbackQueryResult, GEORPFeedbackSubmissionResult, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupResult *_idLookupResult;
    GEORPFeedbackImageUploadResult *_imageUploadResult;
    GEORPFeedbackLayoutConfigResult *_layoutConfigResult;
    GEORPFeedbackQueryResult *_queryResult;
    GEORPFeedbackSubmissionResult *_submissionResult;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_idLookupResult:1;
        unsigned int read_imageUploadResult:1;
        unsigned int read_layoutConfigResult:1;
        unsigned int read_queryResult:1;
        unsigned int read_submissionResult:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_idLookupResult:1;
        unsigned int wrote_imageUploadResult:1;
        unsigned int wrote_layoutConfigResult:1;
        unsigned int wrote_queryResult:1;
        unsigned int wrote_submissionResult:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSubmissionResult;
@property (retain, nonatomic) GEORPFeedbackSubmissionResult *submissionResult;
@property (nonatomic, readonly) _Bool hasIdLookupResult;
@property (retain, nonatomic) GEORPFeedbackIdLookupResult *idLookupResult;
@property (nonatomic, readonly) _Bool hasQueryResult;
@property (retain, nonatomic) GEORPFeedbackQueryResult *queryResult;
@property (nonatomic, readonly) _Bool hasImageUploadResult;
@property (retain, nonatomic) GEORPFeedbackImageUploadResult *imageUploadResult;
@property (nonatomic, readonly) _Bool hasLayoutConfigResult;
@property (retain, nonatomic) GEORPFeedbackLayoutConfigResult *layoutConfigResult;
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
- (void)_readSubmissionResult;
- (void)_readIdLookupResult;
- (void)_readQueryResult;
- (void)_readImageUploadResult;
- (void)_readLayoutConfigResult;

@end
