/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface HMPBMetadata : PBCodable

{
    NSMutableArray *_hapCategories;
    NSMutableArray *_hapCharacteristics;
    NSMutableArray *_hapServices;
    int _version;
    struct {
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *hapCharacteristics;
@property (retain, nonatomic) NSMutableArray *hapServices;
@property (retain, nonatomic) NSMutableArray *hapCategories;

+ (Class)hapCharacteristicsType;
+ (Class)hapServicesType;
+ (Class)hapCategoriesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)hapCharacteristicsCount;
- (unsigned long long)hapServicesCount;
- (unsigned long long)hapCategoriesCount;
- (void)addHapCharacteristics:(id)arg1;
- (void)addHapServices:(id)arg1;
- (void)addHapCategories:(id)arg1;
- (void)clearHapCharacteristics;
- (id)hapCharacteristicsAtIndex:(unsigned long long)arg1;
- (void)clearHapServices;
- (id)hapServicesAtIndex:(unsigned long long)arg1;
- (void)clearHapCategories;
- (id)hapCategoriesAtIndex:(unsigned long long)arg1;

@end
