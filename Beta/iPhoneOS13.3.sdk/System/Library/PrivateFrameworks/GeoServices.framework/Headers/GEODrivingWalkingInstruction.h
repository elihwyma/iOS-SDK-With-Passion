/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODrivingWalkingInstruction : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_continueCommands;
    GEOFormattedString *_distance;
    NSMutableArray *_mergeCommands;
    NSMutableArray *_normalCommands;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_continueCommands:1;
        unsigned int read_distance:1;
        unsigned int read_mergeCommands:1;
        unsigned int read_normalCommands:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_continueCommands:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_mergeCommands:1;
        unsigned int wrote_normalCommands:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDistance;
@property (retain, nonatomic) GEOFormattedString *distance;
@property (retain, nonatomic) NSMutableArray *normalCommands;
@property (retain, nonatomic) NSMutableArray *continueCommands;
@property (retain, nonatomic) NSMutableArray *mergeCommands;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)normalCommandType;
+ (Class)continueCommandType;
+ (Class)mergeCommandType;

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
- (void)_readDistance;
- (void)_readNormalCommands;
- (void)_addNoFlagsNormalCommand:(id)arg1;
- (void)_readContinueCommands;
- (void)_addNoFlagsContinueCommand:(id)arg1;
- (void)_readMergeCommands;
- (void)_addNoFlagsMergeCommand:(id)arg1;
- (unsigned long long)normalCommandsCount;
- (void)clearNormalCommands;
- (id)normalCommandAtIndex:(unsigned long long)arg1;
- (void)addNormalCommand:(id)arg1;
- (unsigned long long)continueCommandsCount;
- (void)clearContinueCommands;
- (id)continueCommandAtIndex:(unsigned long long)arg1;
- (void)addContinueCommand:(id)arg1;
- (unsigned long long)mergeCommandsCount;
- (void)clearMergeCommands;
- (id)mergeCommandAtIndex:(unsigned long long)arg1;
- (void)addMergeCommand:(id)arg1;

@end
