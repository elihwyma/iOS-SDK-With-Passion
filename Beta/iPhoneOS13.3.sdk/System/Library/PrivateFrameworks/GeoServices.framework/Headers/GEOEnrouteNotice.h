/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOEnrouteNotice : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_guidances;
    NSString *_objectIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _highlightDistance;
    unsigned int _objectGroupId;
    unsigned int _priority;
    int _type;
    struct {
        unsigned int has_highlightDistance:1;
        unsigned int has_objectGroupId:1;
        unsigned int has_priority:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_guidances:1;
        unsigned int read_objectIdentifier:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_guidances:1;
        unsigned int wrote_objectIdentifier:1;
        unsigned int wrote_highlightDistance:1;
        unsigned int wrote_objectGroupId:1;
        unsigned int wrote_priority:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasObjectIdentifier;
@property (retain, nonatomic) NSString *objectIdentifier;
@property (retain, nonatomic) NSMutableArray *guidances;
@property (nonatomic) _Bool hasHighlightDistance;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic) _Bool hasObjectGroupId;
@property (nonatomic) unsigned int objectGroupId;
@property (nonatomic) _Bool hasPriority;
@property (nonatomic) unsigned int priority;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)guidanceType;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readObjectIdentifier;
- (void)_readGuidances;
- (void)_addNoFlagsGuidance:(id)arg1;
- (unsigned long long)guidancesCount;
- (void)clearGuidances;
- (id)guidanceAtIndex:(unsigned long long)arg1;
- (void)addGuidance:(id)arg1;

@end
