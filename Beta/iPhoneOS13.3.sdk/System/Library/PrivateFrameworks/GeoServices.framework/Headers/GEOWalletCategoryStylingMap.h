/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOWalletCategoryStylingMap : PBCodable

{
    NSMutableArray *_mappings;
}

@property (retain, nonatomic) NSMutableArray *mappings;

+ (_Bool)isValid:(id)arg1;
+ (Class)mappingsType;

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
- (void)addMappings:(id)arg1;
- (unsigned long long)mappingsCount;
- (void)clearMappings;
- (id)mappingsAtIndex:(unsigned long long)arg1;

@end
