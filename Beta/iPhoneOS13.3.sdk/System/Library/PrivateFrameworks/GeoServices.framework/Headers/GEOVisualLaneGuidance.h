/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOVisualLaneGuidance : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_instructions;
    NSMutableArray *_laneInfos;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_instructions:1;
        unsigned int read_laneInfos:1;
        unsigned int read_titles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_instructions:1;
        unsigned int wrote_laneInfos:1;
        unsigned int wrote_titles:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *laneInfos;
@property (retain, nonatomic) NSMutableArray *instructions;
@property (retain, nonatomic) NSMutableArray *titles;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)titleType;
+ (_Bool)isValid:(id)arg1;
+ (Class)laneInfoType;
+ (Class)instructionType;

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
- (void)_readInstructions;
- (void)_readTitles;
- (void)_addNoFlagsTitle:(id)arg1;
- (unsigned long long)titlesCount;
- (void)clearTitles;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)addTitle:(id)arg1;
- (void)_readLaneInfos;
- (void)_addNoFlagsLaneInfo:(id)arg1;
- (void)_addNoFlagsInstruction:(id)arg1;
- (unsigned long long)laneInfosCount;
- (void)clearLaneInfos;
- (id)laneInfoAtIndex:(unsigned long long)arg1;
- (void)addLaneInfo:(id)arg1;
- (unsigned long long)instructionsCount;
- (void)clearInstructions;
- (id)instructionAtIndex:(unsigned long long)arg1;
- (void)addInstruction:(id)arg1;

@end
