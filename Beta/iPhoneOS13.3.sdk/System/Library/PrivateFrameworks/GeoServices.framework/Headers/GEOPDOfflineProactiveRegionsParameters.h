/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineProactiveRegionsParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_locations;
    unsigned int _maximumSizeInBytes;
    struct {
        unsigned int has_maximumSizeInBytes:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (nonatomic) _Bool hasMaximumSizeInBytes;
@property (nonatomic) unsigned int maximumSizeInBytes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)locationType;

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
- (void)addLocation:(id)arg1;
- (unsigned long long)locationsCount;
- (void)clearLocations;
- (id)locationAtIndex:(unsigned long long)arg1;

@end
