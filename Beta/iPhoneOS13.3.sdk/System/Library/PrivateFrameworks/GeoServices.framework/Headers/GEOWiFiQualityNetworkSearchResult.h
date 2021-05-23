/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOWiFiQualityNetworkSearchResult : PBCodable

{
    NSMutableArray *_matches;
}

@property (retain, nonatomic) NSMutableArray *matches;

+ (_Bool)isValid:(id)arg1;
+ (Class)matchesType;

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
- (void)addMatches:(id)arg1;
- (unsigned long long)matchesCount;
- (void)clearMatches;
- (id)matchesAtIndex:(unsigned long long)arg1;

@end
