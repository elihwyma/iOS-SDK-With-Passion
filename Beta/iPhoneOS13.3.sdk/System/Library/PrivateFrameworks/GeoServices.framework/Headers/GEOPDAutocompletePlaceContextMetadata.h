/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompletePlaceContextMetadata : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _clientizationFeatures;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isDefaultName;
    _Bool _isLookAroundActionAllowed;
    _Bool _isProminentResult;
    _Bool _shouldSuppressDirectionsAction;
    struct {
        unsigned int has_isDefaultName:1;
        unsigned int has_isLookAroundActionAllowed:1;
        unsigned int has_isProminentResult:1;
        unsigned int has_shouldSuppressDirectionsAction:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clientizationFeatures:1;
        unsigned int read_matchedDisplayNameLanguageCode:1;
        unsigned int read_matchedDisplayName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientizationFeatures:1;
        unsigned int wrote_matchedDisplayNameLanguageCode:1;
        unsigned int wrote_matchedDisplayName:1;
        unsigned int wrote_isDefaultName:1;
        unsigned int wrote_isLookAroundActionAllowed:1;
        unsigned int wrote_isProminentResult:1;
        unsigned int wrote_shouldSuppressDirectionsAction:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMatchedDisplayName;
@property (retain, nonatomic) NSString *matchedDisplayName;
@property (nonatomic) _Bool hasIsDefaultName;
@property (nonatomic) _Bool isDefaultName;
@property (nonatomic) _Bool hasIsProminentResult;
@property (nonatomic) _Bool isProminentResult;
@property (nonatomic, readonly) unsigned long long clientizationFeaturesCount;
@property (nonatomic, readonly) int *clientizationFeatures;
@property (nonatomic, readonly) _Bool hasMatchedDisplayNameLanguageCode;
@property (retain, nonatomic) NSString *matchedDisplayNameLanguageCode;
@property (nonatomic) _Bool hasShouldSuppressDirectionsAction;
@property (nonatomic) _Bool shouldSuppressDirectionsAction;
@property (nonatomic) _Bool hasIsLookAroundActionAllowed;
@property (nonatomic) _Bool isLookAroundActionAllowed;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readMatchedDisplayName;
- (void)_readClientizationFeatures;
- (void)_addNoFlagsClientizationFeature:(int)arg1;
- (void)_readMatchedDisplayNameLanguageCode;
- (void)clearClientizationFeatures;
- (int)clientizationFeatureAtIndex:(unsigned long long)arg1;
- (void)addClientizationFeature:(int)arg1;
- (void)setClientizationFeatures:(int *)arg1 count:(unsigned long long)arg2;
- (id)clientizationFeaturesAsString:(int)arg1;
- (int)StringAsClientizationFeatures:(id)arg1;

@end
