//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBDataReader, PBUnknownFields;

@interface GEOResourceFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _scales;
    CDStruct_95bda58d _scenarios;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_scales:1;
        unsigned int read_scenarios:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_scales:1;
        unsigned int wrote_scenarios:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsScenarios:(id)arg1;
- (id)scenariosAsString:(int)arg1;
- (void)setScenarios:(int )arg1 count:(NSUInteger)arg2;
- (int)scenarioAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsScenario:(int)arg1;
- (void)addScenario:(int)arg1;
- (void)clearScenarios;
@property(readonly, nonatomic) int scenarios;
@property(readonly, nonatomic) NSUInteger scenariosCount;
- (void)_readScenarios;
- (int)StringAsScales:(id)arg1;
- (id)scalesAsString:(int)arg1;
- (void)setScales:(int )arg1 count:(NSUInteger)arg2;
- (int)scaleAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsScale:(int)arg1;
- (void)addScale:(int)arg1;
- (void)clearScales;
@property(readonly, nonatomic) int scales;
@property(readonly, nonatomic) NSUInteger scalesCount;
- (void)_readScales;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

