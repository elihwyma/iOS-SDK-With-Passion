//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORPFeedbackIdLookupResult, GEORPFeedbackImageUploadResult, GEORPFeedbackLayoutConfigResult, GEORPFeedbackQueryResult, GEORPFeedbackSubmissionResult, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackResult : PBCodable <NSCopying>
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
//     struct os_unfair_lock_s _readerLock;
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

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORPFeedbackLayoutConfigResult *layoutConfigResult;
@property(readonly, nonatomic) BOOL hasLayoutConfigResult;
- (void)_readLayoutConfigResult;
@property(retain, nonatomic) GEORPFeedbackImageUploadResult *imageUploadResult;
@property(readonly, nonatomic) BOOL hasImageUploadResult;
- (void)_readImageUploadResult;
@property(retain, nonatomic) GEORPFeedbackQueryResult *queryResult;
@property(readonly, nonatomic) BOOL hasQueryResult;
- (void)_readQueryResult;
@property(retain, nonatomic) GEORPFeedbackIdLookupResult *idLookupResult;
@property(readonly, nonatomic) BOOL hasIdLookupResult;
- (void)_readIdLookupResult;
@property(retain, nonatomic) GEORPFeedbackSubmissionResult *submissionResult;
@property(readonly, nonatomic) BOOL hasSubmissionResult;
- (void)_readSubmissionResult;
- (id)initWithData:(id)arg1;
- (id)init;

@end

