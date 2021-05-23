/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPCorrectedCoordinate, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsCorrections : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCorrectedCoordinate *_arrivalCoordinate;
    NSData *_directionsResponseId;
    NSMutableArray *_instructionCorrections;
    NSString *_overviewScreenshotImageId;
    NSMutableArray *_problematicRouteIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _noGoodRoutesShown;
    struct {
        unsigned int has_noGoodRoutesShown:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalCoordinate:1;
        unsigned int read_directionsResponseId:1;
        unsigned int read_instructionCorrections:1;
        unsigned int read_overviewScreenshotImageId:1;
        unsigned int read_problematicRouteIndexs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_arrivalCoordinate:1;
        unsigned int wrote_directionsResponseId:1;
        unsigned int wrote_instructionCorrections:1;
        unsigned int wrote_overviewScreenshotImageId:1;
        unsigned int wrote_problematicRouteIndexs:1;
        unsigned int wrote_noGoodRoutesShown:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (retain, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (retain, nonatomic) NSMutableArray *instructionCorrections;
@property (nonatomic, readonly) _Bool hasOverviewScreenshotImageId;
@property (retain, nonatomic) NSString *overviewScreenshotImageId;
@property (nonatomic, readonly) _Bool hasArrivalCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *arrivalCoordinate;
@property (nonatomic) _Bool hasNoGoodRoutesShown;
@property (nonatomic) _Bool noGoodRoutesShown;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)problematicRouteIndexType;
+ (Class)instructionCorrectionType;

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
- (void)_readDirectionsResponseId;
- (void)_readProblematicRouteIndexs;
- (void)_addNoFlagsProblematicRouteIndex:(id)arg1;
- (void)_readInstructionCorrections;
- (void)_addNoFlagsInstructionCorrection:(id)arg1;
- (void)_readOverviewScreenshotImageId;
- (void)_readArrivalCoordinate;
- (unsigned long long)problematicRouteIndexsCount;
- (void)clearProblematicRouteIndexs;
- (id)problematicRouteIndexAtIndex:(unsigned long long)arg1;
- (void)addProblematicRouteIndex:(id)arg1;
- (unsigned long long)instructionCorrectionsCount;
- (void)clearInstructionCorrections;
- (id)instructionCorrectionAtIndex:(unsigned long long)arg1;
- (void)addInstructionCorrection:(id)arg1;

@end
