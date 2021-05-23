/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackIdLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _feedbackComponentTypes;
    NSMutableArray *_feedbackIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponentTypes:1;
        unsigned int read_feedbackIds:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackComponentTypes:1;
        unsigned int wrote_feedbackIds:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *feedbackIds;
@property (nonatomic, readonly) unsigned long long feedbackComponentTypesCount;
@property (nonatomic, readonly) int *feedbackComponentTypes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)feedbackIdType;

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
- (void)_readFeedbackComponentTypes;
- (void)_addNoFlagsFeedbackComponentType:(int)arg1;
- (void)clearFeedbackComponentTypes;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;
- (void)addFeedbackComponentType:(int)arg1;
- (void)setFeedbackComponentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)feedbackComponentTypesAsString:(int)arg1;
- (int)StringAsFeedbackComponentTypes:(id)arg1;
- (void)_readFeedbackIds;
- (void)_addNoFlagsFeedbackId:(id)arg1;
- (unsigned long long)feedbackIdsCount;
- (void)clearFeedbackIds;
- (id)feedbackIdAtIndex:(unsigned long long)arg1;
- (void)addFeedbackId:(id)arg1;

@end
