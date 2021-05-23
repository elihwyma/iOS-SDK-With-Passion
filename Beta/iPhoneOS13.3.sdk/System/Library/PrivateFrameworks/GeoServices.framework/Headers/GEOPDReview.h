/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReview : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRating *_rating;
    NSString *_reviewId;
    double _reviewTime;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_reviewTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_rating:1;
        unsigned int read_reviewId:1;
        unsigned int read_reviewer:1;
        unsigned int read_snippets:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_rating:1;
        unsigned int wrote_reviewId:1;
        unsigned int wrote_reviewTime:1;
        unsigned int wrote_reviewer:1;
        unsigned int wrote_snippets:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *snippets;
@property (nonatomic) _Bool hasReviewTime;
@property (nonatomic) double reviewTime;
@property (nonatomic, readonly) _Bool hasReviewer;
@property (retain, nonatomic) GEOPDUser *reviewer;
@property (nonatomic, readonly) _Bool hasReviewId;
@property (retain, nonatomic) NSString *reviewId;
@property (nonatomic, readonly) _Bool hasRating;
@property (retain, nonatomic) GEOPDRating *rating;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)reviewsForPlaceData:(id)arg1;
+ (Class)snippetType;

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
- (void)_readReviewer;
- (id)_bestSnippet;
- (id)_bestSnippetLocale;
- (void)_readSnippets;
- (void)_addNoFlagsSnippet:(id)arg1;
- (void)_readReviewId;
- (void)_readRating;
- (unsigned long long)snippetsCount;
- (void)clearSnippets;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (void)addSnippet:(id)arg1;

@end
