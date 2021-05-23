/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOABDebugPanelExperimentBranch, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABExperimentAssignment : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    NSString *_offlineAbJson;
    NSString *_querySubstring;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placeRequestType;
    int _serviceType;
    struct {
        unsigned int has_placeRequestType:1;
        unsigned int has_serviceType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_debugExperimentBranch:1;
        unsigned int read_offlineAbJson:1;
        unsigned int read_querySubstring:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_debugExperimentBranch:1;
        unsigned int wrote_offlineAbJson:1;
        unsigned int wrote_querySubstring:1;
        unsigned int wrote_placeRequestType:1;
        unsigned int wrote_serviceType:1;
    } _flags;
}

@property (nonatomic) _Bool hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic) _Bool hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (nonatomic, readonly) _Bool hasQuerySubstring;
@property (retain, nonatomic) NSString *querySubstring;
@property (nonatomic, readonly) _Bool hasDebugExperimentBranch;
@property (retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (nonatomic, readonly) _Bool hasOfflineAbJson;
@property (retain, nonatomic) NSString *offlineAbJson;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readDebugExperimentBranch;
- (id)placeRequestTypeAsString:(int)arg1;
- (int)StringAsPlaceRequestType:(id)arg1;
- (void)_readQuerySubstring;
- (void)_readOfflineAbJson;
- (id)serviceTypeAsString:(int)arg1;
- (int)StringAsServiceType:(id)arg1;

@end
