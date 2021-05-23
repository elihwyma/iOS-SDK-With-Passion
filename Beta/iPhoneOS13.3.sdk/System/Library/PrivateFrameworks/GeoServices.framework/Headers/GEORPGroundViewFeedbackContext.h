/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDMuninViewState, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPGroundViewFeedbackContext : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _visiblePlaceMuids;
    NSString *_imageId;
    unsigned long long _imdataId;
    NSMutableArray *_onscreenImageResources;
    GEOPDMuninViewState *_viewState;
    NSMutableArray *_visibleFeatureHandles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _metadataTileBuildId;
    struct {
        unsigned int has_imdataId:1;
        unsigned int has_metadataTileBuildId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_visiblePlaceMuids:1;
        unsigned int read_imageId:1;
        unsigned int read_onscreenImageResources:1;
        unsigned int read_viewState:1;
        unsigned int read_visibleFeatureHandles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_visiblePlaceMuids:1;
        unsigned int wrote_imageId:1;
        unsigned int wrote_imdataId:1;
        unsigned int wrote_onscreenImageResources:1;
        unsigned int wrote_viewState:1;
        unsigned int wrote_visibleFeatureHandles:1;
        unsigned int wrote_metadataTileBuildId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasViewState;
@property (retain, nonatomic) GEOPDMuninViewState *viewState;
@property (nonatomic) _Bool hasMetadataTileBuildId;
@property (nonatomic) unsigned int metadataTileBuildId;
@property (retain, nonatomic) NSMutableArray *onscreenImageResources;
@property (nonatomic, readonly) unsigned long long visiblePlaceMuidsCount;
@property (nonatomic, readonly) unsigned long long *visiblePlaceMuids;
@property (nonatomic) _Bool hasImdataId;
@property (nonatomic) unsigned long long imdataId;
@property (nonatomic, readonly) _Bool hasImageId;
@property (retain, nonatomic) NSString *imageId;
@property (retain, nonatomic) NSMutableArray *visibleFeatureHandles;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)onscreenImageResourceType;
+ (Class)visibleFeatureHandleType;

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
- (void)_readImageId;
- (void)_readViewState;
- (void)_readOnscreenImageResources;
- (void)_addNoFlagsOnscreenImageResource:(id)arg1;
- (void)_readVisiblePlaceMuids;
- (void)_addNoFlagsVisiblePlaceMuid:(unsigned long long)arg1;
- (void)_readVisibleFeatureHandles;
- (void)_addNoFlagsVisibleFeatureHandle:(id)arg1;
- (unsigned long long)onscreenImageResourcesCount;
- (void)clearOnscreenImageResources;
- (id)onscreenImageResourceAtIndex:(unsigned long long)arg1;
- (void)addOnscreenImageResource:(id)arg1;
- (void)clearVisiblePlaceMuids;
- (unsigned long long)visiblePlaceMuidAtIndex:(unsigned long long)arg1;
- (void)addVisiblePlaceMuid:(unsigned long long)arg1;
- (unsigned long long)visibleFeatureHandlesCount;
- (void)clearVisibleFeatureHandles;
- (id)visibleFeatureHandleAtIndex:(unsigned long long)arg1;
- (void)addVisibleFeatureHandle:(id)arg1;
- (void)setVisiblePlaceMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
