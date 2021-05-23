/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPFeedbackCommonContext, GEORPFeedbackCommonCorrections, GEORPFeedbackDetails, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackSubmissionParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientSubmissionUuid;
    GEORPFeedbackCommonContext *_commonContext;
    GEORPFeedbackCommonCorrections *_commonCorrections;
    GEORPFeedbackDetails *_details;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _type;
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientSubmissionUuid:1;
        unsigned int read_commonContext:1;
        unsigned int read_commonCorrections:1;
        unsigned int read_details:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientSubmissionUuid:1;
        unsigned int wrote_commonContext:1;
        unsigned int wrote_commonCorrections:1;
        unsigned int wrote_details:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasClientSubmissionUuid;
@property (retain, nonatomic) NSString *clientSubmissionUuid;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasDetails;
@property (retain, nonatomic) GEORPFeedbackDetails *details;
@property (nonatomic, readonly) _Bool hasCommonContext;
@property (retain, nonatomic) GEORPFeedbackCommonContext *commonContext;
@property (nonatomic, readonly) _Bool hasCommonCorrections;
@property (retain, nonatomic) GEORPFeedbackCommonCorrections *commonCorrections;
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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readClientSubmissionUuid;
- (void)_readDetails;
- (void)_readCommonContext;
- (void)_readCommonCorrections;

@end
