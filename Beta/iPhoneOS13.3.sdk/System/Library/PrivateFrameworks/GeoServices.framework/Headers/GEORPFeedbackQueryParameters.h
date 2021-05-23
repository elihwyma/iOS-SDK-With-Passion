/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPPageInfo, GEORPSortParameters, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackQueryParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _feedbackComponentTypes;
    GEORPPageInfo *_pageInfo;
    GEORPSortParameters *_sortParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponentTypes:1;
        unsigned int read_pageInfo:1;
        unsigned int read_sortParameters:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackComponentTypes:1;
        unsigned int wrote_pageInfo:1;
        unsigned int wrote_sortParameters:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSortParameters;
@property (retain, nonatomic) GEORPSortParameters *sortParameters;
@property (nonatomic, readonly) _Bool hasPageInfo;
@property (retain, nonatomic) GEORPPageInfo *pageInfo;
@property (nonatomic, readonly) unsigned long long feedbackComponentTypesCount;
@property (nonatomic, readonly) int *feedbackComponentTypes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readSortParameters;
- (void)_readPageInfo;
- (void)_readFeedbackComponentTypes;
- (void)_addNoFlagsFeedbackComponentType:(int)arg1;
- (void)clearFeedbackComponentTypes;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;
- (void)addFeedbackComponentType:(int)arg1;
- (void)setFeedbackComponentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)feedbackComponentTypesAsString:(int)arg1;
- (int)StringAsFeedbackComponentTypes:(id)arg1;

@end
