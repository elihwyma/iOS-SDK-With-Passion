/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableFitnessFriendAchievement : PBCodable <Swift>

{
    double _completedDate;
    double _doubleValue;
    long long _intValue;
    NSData *_friendUUID;
    HDCodableSample *_sample;
    NSString *_templateUniqueName;
    struct {
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic, readonly) _Bool hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) _Bool hasCompletedDate;
@property (nonatomic) double completedDate;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic, readonly) _Bool hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;

@end
