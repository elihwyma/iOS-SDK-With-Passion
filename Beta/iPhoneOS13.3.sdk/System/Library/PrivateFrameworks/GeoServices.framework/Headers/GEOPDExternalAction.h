/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalAction : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalActionDetails;
    int _componentType;
    struct {
        unsigned int has_componentType:1;
    } _flags;
}

@property (nonatomic) _Bool hasComponentType;
@property (nonatomic) int componentType;
@property (retain, nonatomic) NSMutableArray *externalActionDetails;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)externalActionDetailType;

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
- (void)addExternalActionDetail:(id)arg1;
- (unsigned long long)externalActionDetailsCount;
- (void)clearExternalActionDetails;
- (id)externalActionDetailAtIndex:(unsigned long long)arg1;
- (id)componentTypeAsString:(int)arg1;
- (int)StringAsComponentType:(id)arg1;

@end
