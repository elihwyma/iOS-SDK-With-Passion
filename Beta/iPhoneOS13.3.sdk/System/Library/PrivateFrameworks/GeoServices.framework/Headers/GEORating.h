/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORating : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_uRL;
    double _maxScore;
    NSString *_provider;
    NSMutableArray *_reviews;
    double _score;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _numberOfRatings;
    int _numberOfReviews;
    struct {
        unsigned int has_maxScore:1;
        unsigned int has_score:1;
        unsigned int has_numberOfRatings:1;
        unsigned int has_numberOfReviews:1;
        unsigned int read_unknownFields:1;
        unsigned int read_uRL:1;
        unsigned int read_provider:1;
        unsigned int read_reviews:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_uRL:1;
        unsigned int wrote_maxScore:1;
        unsigned int wrote_provider:1;
        unsigned int wrote_reviews:1;
        unsigned int wrote_score:1;
        unsigned int wrote_numberOfRatings:1;
        unsigned int wrote_numberOfReviews:1;
    } _flags;
}

@property (nonatomic) _Bool hasScore;
@property (nonatomic) double score;
@property (nonatomic) _Bool hasMaxScore;
@property (nonatomic) double maxScore;
@property (nonatomic) _Bool hasNumberOfRatings;
@property (nonatomic) int numberOfRatings;
@property (nonatomic, readonly) _Bool hasProvider;
@property (retain, nonatomic) NSString *provider;
@property (nonatomic, readonly) _Bool hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (retain, nonatomic) NSMutableArray *reviews;
@property (nonatomic) _Bool hasNumberOfReviews;
@property (nonatomic) int numberOfReviews;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)reviewType;

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
- (void)_readURL;
- (void)_readProvider;
- (void)_readReviews;
- (void)_addNoFlagsReview:(id)arg1;
- (unsigned long long)reviewsCount;
- (void)clearReviews;
- (id)reviewAtIndex:(unsigned long long)arg1;
- (void)addReview:(id)arg1;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)arg1 normalizedUserRatingScore:(float)arg2;

@end
