/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitCloudSyncRestoreEvent : PBCodable <Swift>

{
    long long _dbSize;
    long long _duration;
    long long _endDate;
    long long _hfdSize;
    long long _journalCount;
    long long _startDate;
    unsigned long long _timestamp;
    int _phase;
    struct {
        unsigned int dbSize:1;
        unsigned int duration:1;
        unsigned int endDate:1;
        unsigned int hfdSize:1;
        unsigned int journalCount:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int phase:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) long long duration;
@property (nonatomic) _Bool hasDbSize;
@property (nonatomic) long long dbSize;
@property (nonatomic) _Bool hasHfdSize;
@property (nonatomic) long long hfdSize;
@property (nonatomic) _Bool hasJournalCount;
@property (nonatomic) long long journalCount;
@property (nonatomic) _Bool hasPhase;
@property (nonatomic) int phase;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)phaseAsString:(int)arg1;
- (int)StringAsPhase:(id)arg1;

@end
