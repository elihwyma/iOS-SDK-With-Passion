/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrowseCategorySuggestionResult : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
}

@property (retain, nonatomic) NSMutableArray *categorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)categoryType;
+ (_Bool)isValid:(id)arg1;

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
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (void)addCategory:(id)arg1;

@end
