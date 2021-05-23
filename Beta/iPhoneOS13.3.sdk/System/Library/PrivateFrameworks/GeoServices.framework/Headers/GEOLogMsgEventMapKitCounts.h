/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable

{
    NSMutableArray *_mapKitCounts;
}

@property (retain, nonatomic) NSMutableArray *mapKitCounts;

+ (_Bool)isValid:(id)arg1;
+ (Class)mapKitCountsType;

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
- (void)addMapKitCounts:(id)arg1;
- (unsigned long long)mapKitCountsCount;
- (void)clearMapKitCounts;
- (id)mapKitCountsAtIndex:(unsigned long long)arg1;

@end
