/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSData;

@interface HKCodableCondensedWorkout : PBCodable <Swift>

{
    double _condenserDate;
    long long _condenserVersion;
    double _creationDate;
    double _duration;
    double _endDate;
    long long _persistentID;
    double _startDate;
    long long _type;
    NSData *_uuid;
    struct {
        unsigned int condenserDate:1;
        unsigned int condenserVersion:1;
        unsigned int creationDate:1;
        unsigned int duration:1;
        unsigned int endDate:1;
        unsigned int persistentID:1;
        unsigned int startDate:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasPersistentID;
@property (nonatomic) long long persistentID;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasCondenserVersion;
@property (nonatomic) long long condenserVersion;
@property (nonatomic) _Bool hasCondenserDate;
@property (nonatomic) double condenserDate;

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
