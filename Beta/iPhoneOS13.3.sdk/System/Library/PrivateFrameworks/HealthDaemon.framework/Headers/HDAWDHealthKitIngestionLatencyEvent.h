/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitIngestionLatencyEvent : PBCodable <Swift>

{
    long long _endDate;
    long long _indexInSession;
    long long _maxDelayUs;
    long long _meanDelayUs;
    long long _minDelayUs;
    long long _sampleCount;
    long long _startDate;
    long long _stdDelayUs;
    unsigned long long _timestamp;
    long long _typeIdentifier;
    _Bool _inSession;
    struct {
        unsigned int endDate:1;
        unsigned int indexInSession:1;
        unsigned int maxDelayUs:1;
        unsigned int meanDelayUs:1;
        unsigned int minDelayUs:1;
        unsigned int sampleCount:1;
        unsigned int startDate:1;
        unsigned int stdDelayUs:1;
        unsigned int timestamp:1;
        unsigned int typeIdentifier:1;
        unsigned int inSession:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasTypeIdentifier;
@property (nonatomic) long long typeIdentifier;
@property (nonatomic) _Bool hasInSession;
@property (nonatomic) _Bool inSession;
@property (nonatomic) _Bool hasMinDelayUs;
@property (nonatomic) long long minDelayUs;
@property (nonatomic) _Bool hasMaxDelayUs;
@property (nonatomic) long long maxDelayUs;
@property (nonatomic) _Bool hasMeanDelayUs;
@property (nonatomic) long long meanDelayUs;
@property (nonatomic) _Bool hasStdDelayUs;
@property (nonatomic) long long stdDelayUs;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) _Bool hasSampleCount;
@property (nonatomic) long long sampleCount;
@property (nonatomic) _Bool hasIndexInSession;
@property (nonatomic) long long indexInSession;

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
