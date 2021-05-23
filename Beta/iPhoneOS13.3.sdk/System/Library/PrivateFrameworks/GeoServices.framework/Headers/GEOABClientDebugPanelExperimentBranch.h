/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOABDebugPanelExperimentBranch, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABClientDebugPanelExperimentBranch : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_configKeyValues;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_configKeyValues:1;
        unsigned int read_debugExperimentBranch:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_configKeyValues:1;
        unsigned int wrote_debugExperimentBranch:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDebugExperimentBranch;
@property (retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (retain, nonatomic) NSMutableArray *configKeyValues;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)configKeyValueType;

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
- (void)_readConfigKeyValues;
- (void)_addNoFlagsConfigKeyValue:(id)arg1;
- (unsigned long long)configKeyValuesCount;
- (void)clearConfigKeyValues;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (void)addConfigKeyValue:(id)arg1;

@end
