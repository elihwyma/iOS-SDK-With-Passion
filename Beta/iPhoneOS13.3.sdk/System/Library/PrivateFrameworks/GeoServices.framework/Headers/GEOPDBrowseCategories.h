/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategories : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
}

@property (retain, nonatomic) NSMutableArray *browseCategorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)browseCategoryType;

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
- (unsigned long long)browseCategorysCount;
- (void)clearBrowseCategorys;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (void)addBrowseCategory:(id)arg1;

@end
