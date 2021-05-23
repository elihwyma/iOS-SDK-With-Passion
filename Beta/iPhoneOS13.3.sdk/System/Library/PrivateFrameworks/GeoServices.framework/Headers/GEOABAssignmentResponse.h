/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOABClientConfig, GEOABSecondPartyPlaceRequestClientMetaData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOABAssignmentResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_assignments;
    unsigned long long _branchExpirationTtlHours;
    GEOABClientConfig *_clientConfig;
    GEOABSecondPartyPlaceRequestClientMetaData *_mapsAbClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_parsecClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData *_rapClientMetadata;
    unsigned long long _refreshIntervalSeconds;
    NSString *_requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData *_siriClientMetadata;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _invalidatePoiCache;
    _Bool _invalidateTileCache;
    struct {
        unsigned int has_branchExpirationTtlHours:1;
        unsigned int has_refreshIntervalSeconds:1;
        unsigned int has_timestamp:1;
        unsigned int has_invalidatePoiCache:1;
        unsigned int has_invalidateTileCache:1;
        unsigned int read_unknownFields:1;
        unsigned int read_assignments:1;
        unsigned int read_clientConfig:1;
        unsigned int read_mapsAbClientMetadata:1;
        unsigned int read_parsecClientMetadata:1;
        unsigned int read_rapClientMetadata:1;
        unsigned int read_requestGuid:1;
        unsigned int read_siriClientMetadata:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_assignments:1;
        unsigned int wrote_branchExpirationTtlHours:1;
        unsigned int wrote_clientConfig:1;
        unsigned int wrote_mapsAbClientMetadata:1;
        unsigned int wrote_parsecClientMetadata:1;
        unsigned int wrote_rapClientMetadata:1;
        unsigned int wrote_refreshIntervalSeconds:1;
        unsigned int wrote_requestGuid:1;
        unsigned int wrote_siriClientMetadata:1;
        unsigned int wrote_sourceURL:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_invalidatePoiCache:1;
        unsigned int wrote_invalidateTileCache:1;
    } _flags;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic, readonly) _Bool hasRequestGuid;
@property (retain, nonatomic) NSString *requestGuid;
@property (retain, nonatomic) NSMutableArray *assignments;
@property (nonatomic) _Bool hasInvalidateTileCache;
@property (nonatomic) _Bool invalidateTileCache;
@property (nonatomic) _Bool hasInvalidatePoiCache;
@property (nonatomic) _Bool invalidatePoiCache;
@property (nonatomic) _Bool hasRefreshIntervalSeconds;
@property (nonatomic) unsigned long long refreshIntervalSeconds;
@property (nonatomic, readonly) _Bool hasClientConfig;
@property (retain, nonatomic) GEOABClientConfig *clientConfig;
@property (nonatomic, readonly) _Bool hasParsecClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetadata;
@property (nonatomic, readonly) _Bool hasSiriClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetadata;
@property (nonatomic, readonly) _Bool hasRapClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetadata;
@property (nonatomic, readonly) _Bool hasMapsAbClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *mapsAbClientMetadata;
@property (nonatomic) _Bool hasBranchExpirationTtlHours;
@property (nonatomic) unsigned long long branchExpirationTtlHours;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)assignmentType;

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
- (void)_readSourceURL;
- (id)_clientConfigValueForKey:(id)arg1;
- (void)_readRequestGuid;
- (void)_readAssignments;
- (void)_addNoFlagsAssignment:(id)arg1;
- (void)_readClientConfig;
- (void)_readParsecClientMetadata;
- (void)_readSiriClientMetadata;
- (void)_readRapClientMetadata;
- (void)_readMapsAbClientMetadata;
- (unsigned long long)assignmentsCount;
- (void)clearAssignments;
- (id)assignmentAtIndex:(unsigned long long)arg1;
- (void)addAssignment:(id)arg1;

@end
