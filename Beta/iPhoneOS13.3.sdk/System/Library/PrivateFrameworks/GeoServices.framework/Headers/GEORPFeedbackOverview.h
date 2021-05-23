/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPTimestamp, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackOverview : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTimestamp *_createdAt;
    GEORPTimestamp *_lastUpdatedAt;
    NSString *_stateDescription;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _feedbackState;
    int _type;
    struct {
        unsigned int has_feedbackState:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_createdAt:1;
        unsigned int read_lastUpdatedAt:1;
        unsigned int read_stateDescription:1;
        unsigned int read_title:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_createdAt:1;
        unsigned int wrote_lastUpdatedAt:1;
        unsigned int wrote_stateDescription:1;
        unsigned int wrote_title:1;
        unsigned int wrote_feedbackState:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasCreatedAt;
@property (retain, nonatomic) GEORPTimestamp *createdAt;
@property (nonatomic, readonly) _Bool hasLastUpdatedAt;
@property (retain, nonatomic) GEORPTimestamp *lastUpdatedAt;
@property (nonatomic) _Bool hasFeedbackState;
@property (nonatomic) int feedbackState;
@property (nonatomic, readonly) _Bool hasStateDescription;
@property (retain, nonatomic) NSString *stateDescription;
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
- (void)_readTitle;
- (void)_readCreatedAt;
- (void)_readLastUpdatedAt;
- (void)_readStateDescription;
- (id)feedbackStateAsString:(int)arg1;
- (int)StringAsFeedbackState:(id)arg1;

@end
