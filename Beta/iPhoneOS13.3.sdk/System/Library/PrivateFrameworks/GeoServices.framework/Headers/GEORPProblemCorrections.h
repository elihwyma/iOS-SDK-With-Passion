/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPMapLocation, GEORPMerchantLookupCorrections, GEORPPlaceProblem, NSMutableArray, NSString, PBDataReader;

@interface GEORPProblemCorrections : PBCodable

{
    PBDataReader *_reader;
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    NSMutableArray *_correctedFlags;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
    GEORPDirectionsProblem *_directionsProblem;
    GEORPMerchantLookupCorrections *_merchantLookupCorrections;
    NSMutableArray *_photoWithMetadatas;
    GEORPPlaceProblem *_placeProblem;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _delayed;
    struct {
        unsigned int has_delayed:1;
        unsigned int read_comments:1;
        unsigned int read_correctedCoordinate:1;
        unsigned int read_correctedFields:1;
        unsigned int read_correctedFlags:1;
        unsigned int read_correctedLabel:1;
        unsigned int read_correctedMapLocation:1;
        unsigned int read_correctedSearch:1;
        unsigned int read_directionsProblem:1;
        unsigned int read_merchantLookupCorrections:1;
        unsigned int read_photoWithMetadatas:1;
        unsigned int read_placeProblem:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_correctedCoordinate:1;
        unsigned int wrote_correctedFields:1;
        unsigned int wrote_correctedFlags:1;
        unsigned int wrote_correctedLabel:1;
        unsigned int wrote_correctedMapLocation:1;
        unsigned int wrote_correctedSearch:1;
        unsigned int wrote_directionsProblem:1;
        unsigned int wrote_merchantLookupCorrections:1;
        unsigned int wrote_photoWithMetadatas:1;
        unsigned int wrote_placeProblem:1;
        unsigned int wrote_delayed:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *correctedFields;
@property (nonatomic, readonly) _Bool hasCorrectedLabel;
@property (retain, nonatomic) GEORPCorrectedLabel *correctedLabel;
@property (nonatomic, readonly) _Bool hasCorrectedCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate;
@property (nonatomic, readonly) _Bool hasCorrectedSearch;
@property (retain, nonatomic) GEORPCorrectedSearch *correctedSearch;
@property (nonatomic, readonly) _Bool hasCorrectedMapLocation;
@property (retain, nonatomic) GEORPMapLocation *correctedMapLocation;
@property (nonatomic, readonly) _Bool hasComments;
@property (retain, nonatomic) NSString *comments;
@property (nonatomic, readonly) _Bool hasPlaceProblem;
@property (retain, nonatomic) GEORPPlaceProblem *placeProblem;
@property (nonatomic, readonly) _Bool hasDirectionsProblem;
@property (retain, nonatomic) GEORPDirectionsProblem *directionsProblem;
@property (retain, nonatomic) NSMutableArray *photoWithMetadatas;
@property (nonatomic) _Bool hasDelayed;
@property (nonatomic) _Bool delayed;
@property (retain, nonatomic) NSMutableArray *correctedFlags;
@property (nonatomic, readonly) _Bool hasMerchantLookupCorrections;
@property (retain, nonatomic) GEORPMerchantLookupCorrections *merchantLookupCorrections;

+ (_Bool)isValid:(id)arg1;
+ (Class)correctedFieldType;
+ (Class)photoWithMetadataType;
+ (Class)correctedFlagType;

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
- (void)_readCorrectedFields;
- (void)_addNoFlagsCorrectedField:(id)arg1;
- (void)_readCorrectedLabel;
- (void)_readCorrectedCoordinate;
- (void)_readCorrectedSearch;
- (void)_readCorrectedMapLocation;
- (void)_readComments;
- (void)_readPlaceProblem;
- (void)_readDirectionsProblem;
- (void)_readPhotoWithMetadatas;
- (void)_addNoFlagsPhotoWithMetadata:(id)arg1;
- (void)_readCorrectedFlags;
- (void)_addNoFlagsCorrectedFlag:(id)arg1;
- (void)_readMerchantLookupCorrections;
- (unsigned long long)correctedFieldsCount;
- (void)clearCorrectedFields;
- (id)correctedFieldAtIndex:(unsigned long long)arg1;
- (void)addCorrectedField:(id)arg1;
- (unsigned long long)photoWithMetadatasCount;
- (void)clearPhotoWithMetadatas;
- (id)photoWithMetadataAtIndex:(unsigned long long)arg1;
- (void)addPhotoWithMetadata:(id)arg1;
- (unsigned long long)correctedFlagsCount;
- (void)clearCorrectedFlags;
- (id)correctedFlagAtIndex:(unsigned long long)arg1;
- (void)addCorrectedFlag:(id)arg1;

@end
