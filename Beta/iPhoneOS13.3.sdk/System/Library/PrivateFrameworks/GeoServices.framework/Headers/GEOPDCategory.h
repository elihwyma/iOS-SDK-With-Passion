/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategory : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedNames;
    int _level;
    struct {
        unsigned int has_level:1;
    } _flags;
}

@property (nonatomic) _Bool hasLevel;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (_Bool)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (Class)localizedNameType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned long long)localizedNamesCount;
- (void)clearLocalizedNames;
- (void)addLocalizedName:(id)arg1;
- (id)localizedNameAtIndex:(unsigned long long)arg1;

@end
