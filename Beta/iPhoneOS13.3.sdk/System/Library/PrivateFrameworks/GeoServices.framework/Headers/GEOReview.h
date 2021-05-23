/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOUser, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOReview : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    double _reviewTime;
    GEOUser *_reviewer;
    double _score;
    NSString *_snippet;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isChinaSuppressed;
    struct {
        unsigned int has_reviewTime:1;
        unsigned int has_score:1;
        unsigned int has_isChinaSuppressed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_languageCode:1;
        unsigned int read_reviewer:1;
        unsigned int read_snippet:1;
        unsigned int read_uid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_languageCode:1;
        unsigned int wrote_reviewTime:1;
        unsigned int wrote_reviewer:1;
        unsigned int wrote_score:1;
        unsigned int wrote_snippet:1;
        unsigned int wrote_uid:1;
        unsigned int wrote_isChinaSuppressed:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasSnippet;
@property (retain, nonatomic) NSString *snippet;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) double score;
@property (nonatomic) _Bool hasReviewTime;
@property (nonatomic) double reviewTime;
@property (nonatomic, readonly) _Bool hasReviewer;
@property (retain, nonatomic) GEOUser *reviewer;
@property (nonatomic, readonly) _Bool hasUid;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic, readonly) _Bool hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) _Bool hasIsChinaSuppressed;
@property (nonatomic) _Bool isChinaSuppressed;
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
- (void)_readLanguageCode;
- (void)_readSnippet;
- (void)_readReviewer;
- (void)_readUid;

@end
