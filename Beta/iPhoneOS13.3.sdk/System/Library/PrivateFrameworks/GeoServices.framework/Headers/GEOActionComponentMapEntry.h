/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOActionComponentMapEntry : PBCodable

{
    CDStruct_95bda58d _placeDataComponents;
    int _actionComponent;
    struct {
        unsigned int has_actionComponent:1;
    } _flags;
}

@property (nonatomic) _Bool hasActionComponent;
@property (nonatomic) int actionComponent;
@property (nonatomic, readonly) unsigned long long placeDataComponentsCount;
@property (nonatomic, readonly) int *placeDataComponents;

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
- (void)clearPlaceDataComponents;
- (int)placeDataComponentsAtIndex:(unsigned long long)arg1;
- (void)addPlaceDataComponents:(int)arg1;
- (id)actionComponentAsString:(int)arg1;
- (int)StringAsActionComponent:(id)arg1;
- (void)setPlaceDataComponents:(int *)arg1 count:(unsigned long long)arg2;

@end
