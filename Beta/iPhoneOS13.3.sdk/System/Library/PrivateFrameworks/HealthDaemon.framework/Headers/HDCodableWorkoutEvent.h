/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMetadataDictionary;

@interface HDCodableWorkoutEvent : PBCodable <Swift>

{
    double _date;
    double _duration;
    long long _swimmingStrokeStyle;
    long long _type;
    HDCodableMetadataDictionary *_metadataDictionary;
    struct {
        unsigned int date:1;
        unsigned int duration:1;
        unsigned int swimmingStrokeStyle:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic) _Bool hasSwimmingStrokeStyle;
@property (nonatomic) long long swimmingStrokeStyle;
@property (nonatomic, readonly) _Bool hasMetadataDictionary;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)decodedDateIntervalStartDate;

@end
