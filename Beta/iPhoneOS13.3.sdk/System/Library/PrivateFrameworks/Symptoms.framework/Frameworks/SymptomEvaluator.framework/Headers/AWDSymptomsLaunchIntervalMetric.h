/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDSymptomsLaunchIntervalMetric : PBCodable

{
    unsigned long long _intervalSincePreviousLaunch;
    unsigned long long _timestamp;
    int _process;
    struct {
        unsigned int intervalSincePreviousLaunch:1;
        unsigned int timestamp:1;
        unsigned int process:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasIntervalSincePreviousLaunch;
@property (nonatomic) unsigned long long intervalSincePreviousLaunch;
@property (nonatomic) _Bool hasProcess;
@property (nonatomic) int process;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)processAsString:(int)arg1;
- (int)StringAsProcess:(id)arg1;

@end
