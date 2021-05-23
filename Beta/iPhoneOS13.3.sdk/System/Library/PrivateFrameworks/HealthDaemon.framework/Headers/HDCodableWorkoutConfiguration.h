/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDCodableWorkoutConfiguration : PBCodable <Swift>

{
    long long _activityType;
    long long _locationType;
    double _wLengthValue;
    long long _wLocationType;
    NSString *_wLengthUnitString;
    struct {
        unsigned int activityType:1;
        unsigned int locationType:1;
        unsigned int wLengthValue:1;
        unsigned int wLocationType:1;
    } _has;
}

@property (nonatomic) _Bool hasActivityType;
@property (nonatomic) long long activityType;
@property (nonatomic) _Bool hasLocationType;
@property (nonatomic) long long locationType;
@property (nonatomic) _Bool hasWLocationType;
@property (nonatomic) long long wLocationType;
@property (nonatomic) _Bool hasWLengthValue;
@property (nonatomic) double wLengthValue;
@property (nonatomic, readonly) _Bool hasWLengthUnitString;
@property (retain, nonatomic) NSString *wLengthUnitString;

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
