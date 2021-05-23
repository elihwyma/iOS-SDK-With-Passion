/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEODrivingWalkingSpokenInstruction : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_continueStage;
    NSMutableArray *_executionStages;
    GEOFormattedString *_initialStage;
    GEOFormattedString *_preparationStage;
    GEOFormattedString *_proceedStage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _shortChainedInstructionIndex;
    struct {
        unsigned int has_shortChainedInstructionIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_continueStage:1;
        unsigned int read_executionStages:1;
        unsigned int read_initialStage:1;
        unsigned int read_preparationStage:1;
        unsigned int read_proceedStage:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_continueStage:1;
        unsigned int wrote_executionStages:1;
        unsigned int wrote_initialStage:1;
        unsigned int wrote_preparationStage:1;
        unsigned int wrote_proceedStage:1;
        unsigned int wrote_shortChainedInstructionIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasProceedStage;
@property (retain, nonatomic) GEOFormattedString *proceedStage;
@property (nonatomic, readonly) _Bool hasContinueStage;
@property (retain, nonatomic) GEOFormattedString *continueStage;
@property (nonatomic, readonly) _Bool hasInitialStage;
@property (retain, nonatomic) GEOFormattedString *initialStage;
@property (nonatomic, readonly) _Bool hasPreparationStage;
@property (retain, nonatomic) GEOFormattedString *preparationStage;
@property (retain, nonatomic) NSMutableArray *executionStages;
@property (nonatomic) _Bool hasShortChainedInstructionIndex;
@property (nonatomic) unsigned int shortChainedInstructionIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)executionStageType;

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
- (void)_readProceedStage;
- (void)_readContinueStage;
- (void)_readInitialStage;
- (void)_readPreparationStage;
- (void)_readExecutionStages;
- (void)_addNoFlagsExecutionStage:(id)arg1;
- (unsigned long long)executionStagesCount;
- (void)clearExecutionStages;
- (id)executionStageAtIndex:(unsigned long long)arg1;
- (void)addExecutionStage:(id)arg1;

@end
