/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

@interface GEOResourceFilter : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _scales;
    CDStruct_95bda58d _scenarios;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_scales:1;
        unsigned int read_scenarios:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_scales:1;
        unsigned int wrote_scenarios:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long scalesCount;
@property (nonatomic, readonly) int *scales;
@property (nonatomic, readonly) unsigned long long scenariosCount;
@property (nonatomic, readonly) int *scenarios;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_readScales;
- (void)_addNoFlagsScale:(int)arg1;
- (void)_readScenarios;
- (void)_addNoFlagsScenario:(int)arg1;
- (void)clearScales;
- (int)scaleAtIndex:(unsigned long long)arg1;
- (void)addScale:(int)arg1;
- (void)clearScenarios;
- (int)scenarioAtIndex:(unsigned long long)arg1;
- (void)addScenario:(int)arg1;
- (void)setScales:(int *)arg1 count:(unsigned long long)arg2;
- (id)scalesAsString:(int)arg1;
- (int)StringAsScales:(id)arg1;
- (void)setScenarios:(int *)arg1 count:(unsigned long long)arg2;
- (id)scenariosAsString:(int)arg1;
- (int)StringAsScenarios:(id)arg1;

@end
