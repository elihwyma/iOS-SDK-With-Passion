/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackSurveyResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_optionDescription;
    NSString *_optionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_optionDescription:1;
        unsigned int read_optionId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_optionDescription:1;
        unsigned int wrote_optionId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOptionId;
@property (retain, nonatomic) NSString *optionId;
@property (nonatomic, readonly) _Bool hasOptionDescription;
@property (retain, nonatomic) NSString *optionDescription;
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
- (void)_readOptionId;
- (void)_readOptionDescription;

@end
