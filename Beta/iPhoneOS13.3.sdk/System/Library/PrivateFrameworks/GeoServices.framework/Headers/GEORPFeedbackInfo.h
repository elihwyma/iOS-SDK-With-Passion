/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackComponents;
    NSString *_feedbackId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponents:1;
        unsigned int read_feedbackId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_feedbackComponents:1;
        unsigned int wrote_feedbackId:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasFeedbackId;
@property (retain, nonatomic) NSString *feedbackId;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *feedbackComponents;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)feedbackComponentType;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readFeedbackId;
- (void)_readFeedbackComponents;
- (void)_addNoFlagsFeedbackComponent:(id)arg1;
- (unsigned long long)feedbackComponentsCount;
- (void)clearFeedbackComponents;
- (id)feedbackComponentAtIndex:(unsigned long long)arg1;
- (void)addFeedbackComponent:(id)arg1;

@end
