/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionFilter : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _componentTypes;
}

@property (nonatomic, readonly) unsigned long long componentTypesCount;
@property (nonatomic, readonly) int *componentTypes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearComponentTypes;
- (int)componentTypeAtIndex:(unsigned long long)arg1;
- (void)addComponentType:(int)arg1;
- (void)setComponentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)componentTypesAsString:(int)arg1;
- (int)StringAsComponentTypes:(id)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
