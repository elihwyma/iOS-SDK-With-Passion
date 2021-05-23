/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ACHCodableEarnedInstance : PBCodable

{
    double _createdDate;
    long long _creatorDevice;
    double _value;
    NSString *_earnedDateComponents;
    NSString *_templateUniqueName;
    NSString *_valueUnitString;
    struct {
        unsigned int createdDate:1;
        unsigned int creatorDevice:1;
        unsigned int value:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (nonatomic, readonly) _Bool hasEarnedDateComponents;
@property (retain, nonatomic) NSString *earnedDateComponents;
@property (nonatomic) _Bool hasCreatedDate;
@property (nonatomic) double createdDate;
@property (nonatomic) _Bool hasCreatorDevice;
@property (nonatomic) long long creatorDevice;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) double value;
@property (nonatomic, readonly) _Bool hasValueUnitString;
@property (retain, nonatomic) NSString *valueUnitString;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
