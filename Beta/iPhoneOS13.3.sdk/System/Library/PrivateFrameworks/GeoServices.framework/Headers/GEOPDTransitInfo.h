/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labels;
    NSMutableArray *_lines;
    NSString *_searchDisplayName;
    NSString *_subTitle;
    NSMutableArray *_systems;
    NSString *_title;
    NSMutableArray *_transitConnections;
    unsigned long long _transitId;
    GEOPDMapsIdentifier *_transitMarketId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_transitId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labels:1;
        unsigned int read_lines:1;
        unsigned int read_searchDisplayName:1;
        unsigned int read_subTitle:1;
        unsigned int read_systems:1;
        unsigned int read_title:1;
        unsigned int read_transitConnections:1;
        unsigned int read_transitMarketId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_labels:1;
        unsigned int wrote_lines:1;
        unsigned int wrote_searchDisplayName:1;
        unsigned int wrote_subTitle:1;
        unsigned int wrote_systems:1;
        unsigned int wrote_title:1;
        unsigned int wrote_transitConnections:1;
        unsigned int wrote_transitId:1;
        unsigned int wrote_transitMarketId:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSMutableArray *systems;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *transitConnections;
@property (nonatomic, readonly) _Bool hasSearchDisplayName;
@property (retain, nonatomic) NSString *searchDisplayName;
@property (nonatomic, readonly) _Bool hasTransitMarketId;
@property (retain, nonatomic) GEOPDMapsIdentifier *transitMarketId;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasSubTitle;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) _Bool hasTransitId;
@property (nonatomic) unsigned long long transitId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)labelType;
+ (Class)systemType;
+ (_Bool)isValid:(id)arg1;
+ (id)transitInfoForPlaceData:(id)arg1;
+ (Class)lineType;
+ (Class)transitConnectionType;

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
- (unsigned long long)labelsCount;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readTitle;
- (void)_readLines;
- (void)_addNoFlagsLine:(id)arg1;
- (void)_readSystems;
- (void)_addNoFlagsSystem:(id)arg1;
- (void)_readLabels;
- (void)_addNoFlagsLabel:(id)arg1;
- (void)_readTransitConnections;
- (void)_addNoFlagsTransitConnection:(id)arg1;
- (void)_readSearchDisplayName;
- (void)_readTransitMarketId;
- (void)_readSubTitle;
- (unsigned long long)linesCount;
- (void)clearLines;
- (id)lineAtIndex:(unsigned long long)arg1;
- (void)addLine:(id)arg1;
- (unsigned long long)systemsCount;
- (void)clearSystems;
- (id)systemAtIndex:(unsigned long long)arg1;
- (void)addSystem:(id)arg1;
- (void)clearLabels;
- (id)labelAtIndex:(unsigned long long)arg1;
- (void)addLabel:(id)arg1;
- (unsigned long long)transitConnectionsCount;
- (void)clearTransitConnections;
- (id)transitConnectionAtIndex:(unsigned long long)arg1;
- (void)addTransitConnection:(id)arg1;

@end
