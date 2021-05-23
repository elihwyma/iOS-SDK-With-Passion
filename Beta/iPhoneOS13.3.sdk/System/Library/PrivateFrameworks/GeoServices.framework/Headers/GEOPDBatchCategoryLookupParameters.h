/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchCategoryLookupParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categoryLookupParameters;
}

@property (retain, nonatomic) NSMutableArray *categoryLookupParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)categoryLookupParameterType;

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
- (void)addCategoryLookupParameter:(id)arg1;
- (unsigned long long)categoryLookupParametersCount;
- (void)clearCategoryLookupParameters;
- (id)categoryLookupParameterAtIndex:(unsigned long long)arg1;

@end
