/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionManifest : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_actionComponentMapEntries;
    NSMutableArray *_searchAttributionSources;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_timestamp:1;
        unsigned int read_actionComponentMapEntries:1;
        unsigned int read_searchAttributionSources:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_actionComponentMapEntries:1;
        unsigned int wrote_searchAttributionSources:1;
        unsigned int wrote_sourceURL:1;
        unsigned int wrote_timestamp:1;
    } _flags;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) NSMutableArray *searchAttributionSources;
@property (retain, nonatomic) NSMutableArray *actionComponentMapEntries;

+ (_Bool)isValid:(id)arg1;
+ (Class)searchAttributionSourcesType;
+ (Class)actionComponentMapEntriesType;

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
- (void)_readSearchAttributionSources;
- (void)_addNoFlagsSearchAttributionSources:(id)arg1;
- (void)_readActionComponentMapEntries;
- (void)_addNoFlagsActionComponentMapEntries:(id)arg1;
- (unsigned long long)searchAttributionSourcesCount;
- (void)clearSearchAttributionSources;
- (id)searchAttributionSourcesAtIndex:(unsigned long long)arg1;
- (void)addSearchAttributionSources:(id)arg1;
- (unsigned long long)actionComponentMapEntriesCount;
- (void)clearActionComponentMapEntries;
- (id)actionComponentMapEntriesAtIndex:(unsigned long long)arg1;
- (void)addActionComponentMapEntries:(id)arg1;
- (void)_readSourceURL;

@end
