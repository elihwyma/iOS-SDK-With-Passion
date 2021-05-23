/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDViewportInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchPopularNearbySearchParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    NSMutableArray *_suggestionEntryMetadatas;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _maxResults;
    struct {
        unsigned int has_requestLocalTimestamp:1;
        unsigned int has_maxResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_suggestionEntryMetadatas:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_requestLocalTimestamp:1;
        unsigned int wrote_suggestionEntryMetadatas:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
    } _flags;
}

@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) _Bool hasRequestLocalTimestamp;
@property (nonatomic) double requestLocalTimestamp;
@property (retain, nonatomic) NSMutableArray *suggestionEntryMetadatas;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)suggestionEntryMetadataType;

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
- (void)_readViewportInfo;
- (void)_readSuggestionEntryMetadatas;
- (void)_addNoFlagsSuggestionEntryMetadata:(id)arg1;
- (unsigned long long)suggestionEntryMetadatasCount;
- (void)clearSuggestionEntryMetadatas;
- (id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1;
- (void)addSuggestionEntryMetadata:(id)arg1;

@end
