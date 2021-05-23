/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordEntry : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct {
        unsigned int has_dayOfWeek:1;
        unsigned int has_hourOfDay:1;
    } _flags;
}

@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) _Bool hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic, readonly) unsigned long long categoryIndexsCount;
@property (nonatomic, readonly) unsigned int *categoryIndexs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (void)clearCategoryIndexs;
- (unsigned int)categoryIndexAtIndex:(unsigned long long)arg1;
- (void)addCategoryIndex:(unsigned int)arg1;
- (void)setCategoryIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
