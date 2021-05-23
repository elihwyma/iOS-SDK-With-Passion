/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleLayoutEntry : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_applicationIds;
    NSString *_debugLayoutId;
    NSMutableArray *_modules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _platformType;
    struct {
        unsigned int has_platformType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_applicationIds:1;
        unsigned int read_debugLayoutId:1;
        unsigned int read_modules:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_applicationIds:1;
        unsigned int wrote_debugLayoutId:1;
        unsigned int wrote_modules:1;
        unsigned int wrote_platformType:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *applicationIds;
@property (nonatomic, readonly) _Bool hasDebugLayoutId;
@property (retain, nonatomic) NSString *debugLayoutId;
@property (nonatomic) _Bool hasPlatformType;
@property (nonatomic) int platformType;
@property (retain, nonatomic) NSMutableArray *modules;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)applicationIdType;
+ (Class)modulesType;

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
- (void)addModules:(id)arg1;
- (void)_readApplicationIds;
- (void)_addNoFlagsApplicationId:(id)arg1;
- (void)_readDebugLayoutId;
- (void)_readModules;
- (void)_addNoFlagsModules:(id)arg1;
- (unsigned long long)applicationIdsCount;
- (void)clearApplicationIds;
- (id)applicationIdAtIndex:(unsigned long long)arg1;
- (void)addApplicationId:(id)arg1;
- (unsigned long long)modulesCount;
- (void)clearModules;
- (id)modulesAtIndex:(unsigned long long)arg1;
- (id)platformTypeAsString:(int)arg1;
- (int)StringAsPlatformType:(id)arg1;

@end
