/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEventCategory : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedCategorys;
    int _eventLookupCategory;
    struct {
        unsigned int has_eventLookupCategory:1;
    } _flags;
}

@property (nonatomic) _Bool hasEventLookupCategory;
@property (nonatomic) int eventLookupCategory;
@property (retain, nonatomic) NSMutableArray *localizedCategorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedCategoryType;

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
- (unsigned long long)localizedCategorysCount;
- (void)clearLocalizedCategorys;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (void)addLocalizedCategory:(id)arg1;
- (id)eventLookupCategoryAsString:(int)arg1;
- (int)StringAsEventLookupCategory:(id)arg1;

@end
