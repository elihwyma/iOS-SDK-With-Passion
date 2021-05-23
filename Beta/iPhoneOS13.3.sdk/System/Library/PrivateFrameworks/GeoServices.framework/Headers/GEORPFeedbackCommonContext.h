/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOABAssignmentResponse, GEORPCurrentEnvironmentManifestURLs, GEORPMapLocation, GEORPNavigationSettings, GEORPSearchCommonContext, GEORPSourceInfo, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonContext : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _userPaths;
    NSMutableArray *_auxiliaryControls;
    double _clientCreatedAt;
    GEOABAssignmentResponse *_currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;
    GEORPMapLocation *_mapLocation;
    GEORPNavigationSettings *_navigationSettings;
    unsigned long long _originatingAuxiliaryControlIndex;
    GEORPSearchCommonContext *_searchCommon;
    GEORPSourceInfo *_sourceInfo;
    NSMutableArray *_visibleTileSets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _deviceGmtOffset;
    int _pinType;
    struct {
        unsigned int has_clientCreatedAt:1;
        unsigned int has_originatingAuxiliaryControlIndex:1;
        unsigned int has_deviceGmtOffset:1;
        unsigned int has_pinType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_userPaths:1;
        unsigned int read_auxiliaryControls:1;
        unsigned int read_currentAbAssignmentResponse:1;
        unsigned int read_currentEnvironmentManifestUrls:1;
        unsigned int read_mapLocation:1;
        unsigned int read_navigationSettings:1;
        unsigned int read_searchCommon:1;
        unsigned int read_sourceInfo:1;
        unsigned int read_visibleTileSets:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_userPaths:1;
        unsigned int wrote_auxiliaryControls:1;
        unsigned int wrote_clientCreatedAt:1;
        unsigned int wrote_currentAbAssignmentResponse:1;
        unsigned int wrote_currentEnvironmentManifestUrls:1;
        unsigned int wrote_mapLocation:1;
        unsigned int wrote_navigationSettings:1;
        unsigned int wrote_originatingAuxiliaryControlIndex:1;
        unsigned int wrote_searchCommon:1;
        unsigned int wrote_sourceInfo:1;
        unsigned int wrote_visibleTileSets:1;
        unsigned int wrote_deviceGmtOffset:1;
        unsigned int wrote_pinType:1;
    } _flags;
}

@property (nonatomic) _Bool hasPinType;
@property (nonatomic) int pinType;
@property (nonatomic, readonly) _Bool hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (retain, nonatomic) NSMutableArray *visibleTileSets;
@property (nonatomic, readonly) unsigned long long userPathsCount;
@property (nonatomic, readonly) int *userPaths;
@property (nonatomic) _Bool hasClientCreatedAt;
@property (nonatomic) double clientCreatedAt;
@property (retain, nonatomic) NSMutableArray *auxiliaryControls;
@property (nonatomic) _Bool hasOriginatingAuxiliaryControlIndex;
@property (nonatomic) unsigned long long originatingAuxiliaryControlIndex;
@property (nonatomic) _Bool hasDeviceGmtOffset;
@property (nonatomic) int deviceGmtOffset;
@property (nonatomic, readonly) _Bool hasCurrentEnvironmentManifestUrls;
@property (retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property (nonatomic, readonly) _Bool hasNavigationSettings;
@property (retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property (nonatomic, readonly) _Bool hasSourceInfo;
@property (retain, nonatomic) GEORPSourceInfo *sourceInfo;
@property (nonatomic, readonly) _Bool hasSearchCommon;
@property (retain, nonatomic) GEORPSearchCommonContext *searchCommon;
@property (nonatomic, readonly) _Bool hasCurrentAbAssignmentResponse;
@property (retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)visibleTileSetType;
+ (Class)auxiliaryControlType;

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
- (void)_readUserPaths;
- (void)_addNoFlagsUserPath:(int)arg1;
- (void)clearUserPaths;
- (int)userPathAtIndex:(unsigned long long)arg1;
- (void)addUserPath:(int)arg1;
- (void)setUserPaths:(int *)arg1 count:(unsigned long long)arg2;
- (id)userPathsAsString:(int)arg1;
- (int)StringAsUserPaths:(id)arg1;
- (void)_readMapLocation;
- (void)_readVisibleTileSets;
- (void)_addNoFlagsVisibleTileSet:(id)arg1;
- (void)_readAuxiliaryControls;
- (void)_addNoFlagsAuxiliaryControl:(id)arg1;
- (void)_readCurrentAbAssignmentResponse;
- (void)_readCurrentEnvironmentManifestUrls;
- (void)_readNavigationSettings;
- (unsigned long long)visibleTileSetsCount;
- (void)clearVisibleTileSets;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;
- (void)addVisibleTileSet:(id)arg1;
- (unsigned long long)auxiliaryControlsCount;
- (void)clearAuxiliaryControls;
- (id)auxiliaryControlAtIndex:(unsigned long long)arg1;
- (void)addAuxiliaryControl:(id)arg1;
- (id)pinTypeAsString:(int)arg1;
- (int)StringAsPinType:(id)arg1;
- (void)_readSourceInfo;
- (void)_readSearchCommon;

@end
