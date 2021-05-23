/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPUserSearchInput, NSData, NSMutableArray, PBDataReader;

@interface GEORPDirectionsProblem : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_clientSuggestedRoutes;
    NSData *_directionsResponseId;
    GEORPUserSearchInput *_endWaypoint;
    NSMutableArray *_instructionCorrections;
    NSData *_overviewScreenshotImageData;
    NSMutableArray *_problematicRouteIndexs;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _problematicLineIndex;
    unsigned int _problematicStepIndex;
    struct {
        unsigned int has_problematicLineIndex:1;
        unsigned int has_problematicStepIndex:1;
        unsigned int read_clientSuggestedRoutes:1;
        unsigned int read_directionsResponseId:1;
        unsigned int read_endWaypoint:1;
        unsigned int read_instructionCorrections:1;
        unsigned int read_overviewScreenshotImageData:1;
        unsigned int read_problematicRouteIndexs:1;
        unsigned int read_startWaypoint:1;
        unsigned int wrote_clientSuggestedRoutes:1;
        unsigned int wrote_directionsResponseId:1;
        unsigned int wrote_endWaypoint:1;
        unsigned int wrote_instructionCorrections:1;
        unsigned int wrote_overviewScreenshotImageData:1;
        unsigned int wrote_problematicRouteIndexs:1;
        unsigned int wrote_startWaypoint:1;
        unsigned int wrote_problematicLineIndex:1;
        unsigned int wrote_problematicStepIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (nonatomic, readonly) _Bool hasOverviewScreenshotImageData;
@property (retain, nonatomic) NSData *overviewScreenshotImageData;
@property (nonatomic) _Bool hasProblematicStepIndex;
@property (nonatomic) unsigned int problematicStepIndex;
@property (retain, nonatomic) NSMutableArray *clientSuggestedRoutes;
@property (retain, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (nonatomic) _Bool hasProblematicLineIndex;
@property (nonatomic) unsigned int problematicLineIndex;
@property (nonatomic, readonly) _Bool hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (nonatomic, readonly) _Bool hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (retain, nonatomic) NSMutableArray *instructionCorrections;

+ (_Bool)isValid:(id)arg1;
+ (Class)problematicRouteIndexType;
+ (Class)instructionCorrectionType;
+ (Class)clientSuggestedRouteType;

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
- (void)_readDirectionsResponseId;
- (void)_readProblematicRouteIndexs;
- (void)_addNoFlagsProblematicRouteIndex:(id)arg1;
- (void)_readInstructionCorrections;
- (void)_addNoFlagsInstructionCorrection:(id)arg1;
- (unsigned long long)problematicRouteIndexsCount;
- (void)clearProblematicRouteIndexs;
- (id)problematicRouteIndexAtIndex:(unsigned long long)arg1;
- (void)addProblematicRouteIndex:(id)arg1;
- (unsigned long long)instructionCorrectionsCount;
- (void)clearInstructionCorrections;
- (id)instructionCorrectionAtIndex:(unsigned long long)arg1;
- (void)addInstructionCorrection:(id)arg1;
- (void)_readOverviewScreenshotImageData;
- (void)_readClientSuggestedRoutes;
- (void)_addNoFlagsClientSuggestedRoute:(id)arg1;
- (void)_readStartWaypoint;
- (void)_readEndWaypoint;
- (unsigned long long)clientSuggestedRoutesCount;
- (void)clearClientSuggestedRoutes;
- (id)clientSuggestedRouteAtIndex:(unsigned long long)arg1;
- (void)addClientSuggestedRoute:(id)arg1;

@end
