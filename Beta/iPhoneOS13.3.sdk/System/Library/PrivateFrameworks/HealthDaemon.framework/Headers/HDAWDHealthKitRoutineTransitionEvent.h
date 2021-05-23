/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitRoutineLocation;

@interface HDAWDHealthKitRoutineTransitionEvent : PBCodable <Swift>

{
    long long _endDate;
    long long _startDate;
    unsigned long long _timestamp;
    HDAWDHealthKitRoutineLocation *_from;
    int _mode;
    HDAWDHealthKitRoutineLocation *_to;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int mode:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasFrom;
@property (retain, nonatomic) HDAWDHealthKitRoutineLocation *from;
@property (nonatomic, readonly) _Bool hasTo;
@property (retain, nonatomic) HDAWDHealthKitRoutineLocation *to;
@property (nonatomic) _Bool hasMode;
@property (nonatomic) int mode;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)modeAsString:(int)arg1;
- (int)StringAsMode:(id)arg1;

@end
