/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORPPlaceProblem : PBCodable

{
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    unsigned int _problematicDepartureSequenceIndex;
    struct {
        unsigned int has_componentIndex:1;
        unsigned int has_componentValueIndex:1;
        unsigned int has_problematicDepartureSequenceIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasComponentIndex;
@property (nonatomic) unsigned int componentIndex;
@property (nonatomic) _Bool hasComponentValueIndex;
@property (nonatomic) unsigned int componentValueIndex;
@property (nonatomic) _Bool hasProblematicDepartureSequenceIndex;
@property (nonatomic) unsigned int problematicDepartureSequenceIndex;

+ (_Bool)isValid:(id)arg1;

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

@end
