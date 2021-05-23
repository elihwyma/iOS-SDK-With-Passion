/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParametersSiriSearch : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_prefix;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxResults;
    _Bool _completed;
    _Bool _highlightDiff;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_completed:1;
        unsigned int has_highlightDiff:1;
        unsigned int read_unknownFields:1;
        unsigned int read_prefix:1;
        unsigned int read_query:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_prefix:1;
        unsigned int wrote_query:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_completed:1;
        unsigned int wrote_highlightDiff:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) NSString *query;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) int maxResults;
@property (nonatomic) _Bool hasHighlightDiff;
@property (nonatomic) _Bool highlightDiff;
@property (nonatomic, readonly) _Bool hasPrefix;
@property (retain, nonatomic) NSString *prefix;
@property (nonatomic) _Bool hasCompleted;
@property (nonatomic) _Bool completed;
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
- (void)_readQuery;
- (void)_readViewportInfo;
- (void)_readPrefix;

@end
