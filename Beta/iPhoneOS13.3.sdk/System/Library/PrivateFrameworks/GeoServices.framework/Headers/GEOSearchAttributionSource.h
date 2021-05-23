/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionSource : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _attributionRequirements;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _sourceVersion;
    _Bool _enforceAppStore;
    struct {
        unsigned int has_enforceAppStore:1;
        unsigned int read_attributionRequirements:1;
        unsigned int read_attributionApps:1;
        unsigned int read_localizedAttributions:1;
        unsigned int read_sourceIdentifier:1;
        unsigned int read_supportedComponentActions:1;
        unsigned int read_webBaseActionURL:1;
        unsigned int wrote_attributionRequirements:1;
        unsigned int wrote_attributionApps:1;
        unsigned int wrote_localizedAttributions:1;
        unsigned int wrote_sourceIdentifier:1;
        unsigned int wrote_supportedComponentActions:1;
        unsigned int wrote_webBaseActionURL:1;
        unsigned int wrote_sourceVersion:1;
        unsigned int wrote_enforceAppStore:1;
    } _flags;
}

@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (retain, nonatomic) NSMutableArray *localizedAttributions;
@property (nonatomic, readonly) unsigned long long attributionRequirementsCount;
@property (nonatomic, readonly) int *attributionRequirements;
@property (retain, nonatomic) NSMutableArray *attributionApps;
@property (nonatomic, readonly) _Bool hasWebBaseActionURL;
@property (retain, nonatomic) NSString *webBaseActionURL;
@property (retain, nonatomic) NSMutableArray *supportedComponentActions;
@property (nonatomic) _Bool hasEnforceAppStore;
@property (nonatomic) _Bool enforceAppStore;

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedAttributionType;
+ (Class)attributionAppsType;
+ (Class)supportedComponentActionsType;

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
- (void)_readSourceIdentifier;
- (void)_readLocalizedAttributions;
- (void)_addNoFlagsLocalizedAttribution:(id)arg1;
- (void)_readAttributionRequirements;
- (void)_addNoFlagsAttributionRequirements:(int)arg1;
- (void)_readAttributionApps;
- (void)_addNoFlagsAttributionApps:(id)arg1;
- (void)_readWebBaseActionURL;
- (void)_readSupportedComponentActions;
- (void)_addNoFlagsSupportedComponentActions:(id)arg1;
- (unsigned long long)localizedAttributionsCount;
- (void)clearLocalizedAttributions;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;
- (void)addLocalizedAttribution:(id)arg1;
- (void)clearAttributionRequirements;
- (int)attributionRequirementsAtIndex:(unsigned long long)arg1;
- (void)addAttributionRequirements:(int)arg1;
- (unsigned long long)attributionAppsCount;
- (void)clearAttributionApps;
- (id)attributionAppsAtIndex:(unsigned long long)arg1;
- (void)addAttributionApps:(id)arg1;
- (unsigned long long)supportedComponentActionsCount;
- (void)clearSupportedComponentActions;
- (id)supportedComponentActionsAtIndex:(unsigned long long)arg1;
- (void)addSupportedComponentActions:(id)arg1;
- (void)setAttributionRequirements:(int *)arg1 count:(unsigned long long)arg2;
- (id)attributionRequirementsAsString:(int)arg1;
- (int)StringAsAttributionRequirements:(id)arg1;
- (id)bestLocalizedAttribution;
- (_Bool)supportsAction:(int)arg1 forComponent:(int)arg2;
- (_Bool)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2;

@end
