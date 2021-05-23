/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOCompanionDriveStep, GEOCompanionFerryStep, GEOCompanionWalkStep, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEOCompanionStep : PBCodable

{
    PBDataReader *_reader;
    GEOCompanionDriveStep *_driveStep;
    GEOCompanionFerryStep *_ferryStep;
    NSMutableArray *_guidanceEvents;
    NSMutableArray *_instructionWithAlternatives;
    NSString *_listInstruction;
    NSString *_roadName;
    NSData *_updateID;
    GEOCompanionWalkStep *_walkStep;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _endCoordinateIndex;
    unsigned int _maneuverStartCoordinateIndex;
    unsigned int _startCoordinateIndex;
    unsigned int _stepID;
    unsigned int _time;
    struct {
        unsigned int has_distance:1;
        unsigned int has_endCoordinateIndex:1;
        unsigned int has_maneuverStartCoordinateIndex:1;
        unsigned int has_startCoordinateIndex:1;
        unsigned int has_stepID:1;
        unsigned int has_time:1;
        unsigned int read_driveStep:1;
        unsigned int read_ferryStep:1;
        unsigned int read_guidanceEvents:1;
        unsigned int read_instructionWithAlternatives:1;
        unsigned int read_listInstruction:1;
        unsigned int read_roadName:1;
        unsigned int read_updateID:1;
        unsigned int read_walkStep:1;
        unsigned int wrote_driveStep:1;
        unsigned int wrote_ferryStep:1;
        unsigned int wrote_guidanceEvents:1;
        unsigned int wrote_instructionWithAlternatives:1;
        unsigned int wrote_listInstruction:1;
        unsigned int wrote_roadName:1;
        unsigned int wrote_updateID:1;
        unsigned int wrote_walkStep:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_endCoordinateIndex:1;
        unsigned int wrote_maneuverStartCoordinateIndex:1;
        unsigned int wrote_startCoordinateIndex:1;
        unsigned int wrote_stepID:1;
        unsigned int wrote_time:1;
    } _flags;
}

@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) _Bool hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) _Bool hasTime;
@property (nonatomic) unsigned int time;
@property (nonatomic, readonly) _Bool hasRoadName;
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic, readonly) _Bool hasDriveStep;
@property (retain, nonatomic) GEOCompanionDriveStep *driveStep;
@property (nonatomic, readonly) _Bool hasWalkStep;
@property (retain, nonatomic) GEOCompanionWalkStep *walkStep;
@property (nonatomic, readonly) _Bool hasFerryStep;
@property (retain, nonatomic) GEOCompanionFerryStep *ferryStep;
@property (nonatomic) _Bool hasStartCoordinateIndex;
@property (nonatomic) unsigned int startCoordinateIndex;
@property (nonatomic) _Bool hasManeuverStartCoordinateIndex;
@property (nonatomic) unsigned int maneuverStartCoordinateIndex;
@property (nonatomic) _Bool hasEndCoordinateIndex;
@property (nonatomic) unsigned int endCoordinateIndex;
@property (retain, nonatomic) NSMutableArray *instructionWithAlternatives;
@property (nonatomic, readonly) _Bool hasListInstruction;
@property (retain, nonatomic) NSString *listInstruction;
@property (retain, nonatomic) NSMutableArray *guidanceEvents;
@property (nonatomic, readonly) _Bool hasUpdateID;
@property (retain, nonatomic) NSData *updateID;

+ (_Bool)isValid:(id)arg1;
+ (Class)guidanceEventType;
+ (Class)instructionWithAlternativesType;

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
- (void)_readGuidanceEvents;
- (void)_addNoFlagsGuidanceEvent:(id)arg1;
- (unsigned long long)guidanceEventsCount;
- (void)clearGuidanceEvents;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (void)addGuidanceEvent:(id)arg1;
- (id)geoStep;
- (id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3;
- (id)maneuverStep;
- (void)_readRoadName;
- (void)_readDriveStep;
- (void)_readWalkStep;
- (void)_readFerryStep;
- (void)_readInstructionWithAlternatives;
- (void)_addNoFlagsInstructionWithAlternatives:(id)arg1;
- (void)_readListInstruction;
- (void)_readUpdateID;
- (unsigned long long)instructionWithAlternativesCount;
- (void)clearInstructionWithAlternatives;
- (id)instructionWithAlternativesAtIndex:(unsigned long long)arg1;
- (void)addInstructionWithAlternatives:(id)arg1;

@end
