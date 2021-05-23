/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSArray, NSDate, NSMutableArray, NSString, PBUnknownFields;

@interface GEOCondition : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_conditions;
    unsigned int _expirationTime;
    int _type;
    struct {
        unsigned int has_expirationTime:1;
        unsigned int has_type:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long conditionType;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSArray *subconditions;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasExpirationTime;
@property (nonatomic) unsigned int expirationTime;
@property (retain, nonatomic) NSMutableArray *conditions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)conditionType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)addCondition:(id)arg1;
- (unsigned long long)conditionsCount;
- (void)clearConditions;
- (id)conditionAtIndex:(unsigned long long)arg1;

@end
