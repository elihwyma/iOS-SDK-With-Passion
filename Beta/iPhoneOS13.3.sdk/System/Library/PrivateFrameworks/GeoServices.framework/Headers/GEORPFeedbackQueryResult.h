/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackQueryResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackInfos;
    NSData *_nextPageToken;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackInfos:1;
        unsigned int read_nextPageToken:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackInfos:1;
        unsigned int wrote_nextPageToken:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *feedbackInfos;
@property (nonatomic, readonly) _Bool hasNextPageToken;
@property (retain, nonatomic) NSData *nextPageToken;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)feedbackInfoType;

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
- (void)addFeedbackInfo:(id)arg1;
- (unsigned long long)feedbackInfosCount;
- (void)clearFeedbackInfos;
- (id)feedbackInfoAtIndex:(unsigned long long)arg1;
- (void)_readFeedbackInfos;
- (void)_addNoFlagsFeedbackInfo:(id)arg1;
- (void)_readNextPageToken;

@end
