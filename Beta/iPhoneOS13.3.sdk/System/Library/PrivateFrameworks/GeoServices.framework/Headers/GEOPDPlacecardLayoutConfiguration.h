/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardLayoutConfiguration : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
}

@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)entriesType;
+ (id)placecardLayoutConfigurationPlaceData:(id)arg1;

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
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (void)addEntries:(id)arg1;

@end
