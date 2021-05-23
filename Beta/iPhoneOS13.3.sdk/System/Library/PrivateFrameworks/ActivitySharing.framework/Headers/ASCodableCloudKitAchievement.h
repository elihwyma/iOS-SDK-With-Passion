/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableCloudKitSample, NSString;

@interface ASCodableCloudKitAchievement : PBCodable

{
    double _completedDate;
    double _doubleValue;
    long long _intValue;
    long long _workoutActivityType;
    NSString *_definitionIdentifier;
    ASCodableCloudKitSample *_sample;
    NSString *_templateUniqueName;
    struct {
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int workoutActivityType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) ASCodableCloudKitSample *sample;
@property (nonatomic) _Bool hasCompletedDate;
@property (nonatomic) double completedDate;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) _Bool hasWorkoutActivityType;
@property (nonatomic) long long workoutActivityType;
@property (nonatomic, readonly) _Bool hasDefinitionIdentifier;
@property (retain, nonatomic) NSString *definitionIdentifier;
@property (nonatomic, readonly) _Bool hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;

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
