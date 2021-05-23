/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOStateTransitionFeedback : PBCodable

{
    int _newValue;
    int _oldValue;
    int _stateType;
    struct {
        unsigned int has_newValue:1;
        unsigned int has_oldValue:1;
        unsigned int has_stateType:1;
    } _flags;
}

@property (nonatomic) _Bool hasStateType;
@property (nonatomic) int stateType;
@property (nonatomic) _Bool hasOldValue;
@property (nonatomic) int oldValue;
@property (nonatomic) _Bool hasNewValue;
@property (nonatomic) int newValue;

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
- (id)stateTypeAsString:(int)arg1;
- (int)StringAsStateType:(id)arg1;
- (id)oldValueAsString:(int)arg1;
- (int)StringAsOldValue:(id)arg1;
- (id)newValueAsString:(int)arg1;
- (int)StringAsNewValue:(id)arg1;

@end
