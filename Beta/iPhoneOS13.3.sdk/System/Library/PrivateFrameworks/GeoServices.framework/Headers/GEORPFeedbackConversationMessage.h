/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPPostedBy, GEORPTimestamp, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackConversationMessage : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    GEORPTimestamp *_postedAt;
    GEORPPostedBy *_postedBy;
    NSMutableArray *_surveyResponses;
    NSString *_uuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_postedAt:1;
        unsigned int read_postedBy:1;
        unsigned int read_surveyResponses:1;
        unsigned int read_uuid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_postedAt:1;
        unsigned int wrote_postedBy:1;
        unsigned int wrote_surveyResponses:1;
        unsigned int wrote_uuid:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic, readonly) _Bool hasPostedBy;
@property (retain, nonatomic) GEORPPostedBy *postedBy;
@property (nonatomic, readonly) _Bool hasPostedAt;
@property (retain, nonatomic) GEORPTimestamp *postedAt;
@property (nonatomic, readonly) _Bool hasComments;
@property (retain, nonatomic) NSString *comments;
@property (retain, nonatomic) NSMutableArray *surveyResponses;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)surveyResponseType;

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
- (void)_readComments;
- (void)_readUuid;
- (void)_readPostedBy;
- (void)_readPostedAt;
- (void)_readSurveyResponses;
- (void)_addNoFlagsSurveyResponse:(id)arg1;
- (unsigned long long)surveyResponsesCount;
- (void)clearSurveyResponses;
- (id)surveyResponseAtIndex:(unsigned long long)arg1;
- (void)addSurveyResponse:(id)arg1;

@end
