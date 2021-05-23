/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPPlaceRequestResponse, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPSearchFeedbackContext : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_autocompleteSuggestionLists;
    GEORPPlaceRequestResponse *_requestContext;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_autocompleteSuggestionLists:1;
        unsigned int read_requestContext:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompleteSuggestionLists:1;
        unsigned int wrote_requestContext:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *autocompleteSuggestionLists;
@property (nonatomic, readonly) _Bool hasRequestContext;
@property (retain, nonatomic) GEORPPlaceRequestResponse *requestContext;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)autocompleteSuggestionListType;

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
- (void)_readAutocompleteSuggestionLists;
- (void)_addNoFlagsAutocompleteSuggestionList:(id)arg1;
- (unsigned long long)autocompleteSuggestionListsCount;
- (void)clearAutocompleteSuggestionLists;
- (id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1;
- (void)addAutocompleteSuggestionList:(id)arg1;
- (void)_readRequestContext;

@end
