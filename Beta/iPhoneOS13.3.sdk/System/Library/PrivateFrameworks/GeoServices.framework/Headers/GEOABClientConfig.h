/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABClientConfig : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_assignedAbBranchId;
    NSMutableArray *_configKeyValues;
    NSMutableArray *_debugExperimentBranchs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_assignedAbBranchId:1;
        unsigned int read_configKeyValues:1;
        unsigned int read_debugExperimentBranchs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_assignedAbBranchId:1;
        unsigned int wrote_configKeyValues:1;
        unsigned int wrote_debugExperimentBranchs:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *configKeyValues;
@property (nonatomic, readonly) _Bool hasAssignedAbBranchId;
@property (retain, nonatomic) NSString *assignedAbBranchId;
@property (retain, nonatomic) NSMutableArray *debugExperimentBranchs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)configKeyValueType;
+ (Class)debugExperimentBranchType;

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
- (void)_readConfigKeyValues;
- (void)_addNoFlagsConfigKeyValue:(id)arg1;
- (unsigned long long)configKeyValuesCount;
- (void)clearConfigKeyValues;
- (id)configKeyValueAtIndex:(unsigned long long)arg1;
- (void)addConfigKeyValue:(id)arg1;
- (void)_readAssignedAbBranchId;
- (void)_readDebugExperimentBranchs;
- (void)_addNoFlagsDebugExperimentBranch:(id)arg1;
- (unsigned long long)debugExperimentBranchsCount;
- (void)clearDebugExperimentBranchs;
- (id)debugExperimentBranchAtIndex:(unsigned long long)arg1;
- (void)addDebugExperimentBranch:(id)arg1;

@end
