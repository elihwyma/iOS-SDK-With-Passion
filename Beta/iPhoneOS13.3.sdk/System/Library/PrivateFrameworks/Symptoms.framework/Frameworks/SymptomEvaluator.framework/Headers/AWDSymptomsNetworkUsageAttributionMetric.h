/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkUsageAttributionMetric : PBCodable

{
    unsigned long long _flowsImpactedCount;
    unsigned long long _timestamp;
    unsigned long long _usageBytes;
    int _networkType;
    int _usageAttributedTo;
    struct {
        unsigned int flowsImpactedCount:1;
        unsigned int timestamp:1;
        unsigned int usageBytes:1;
        unsigned int networkType:1;
        unsigned int usageAttributedTo:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) _Bool hasUsageAttributedTo;
@property (nonatomic) int usageAttributedTo;
@property (nonatomic) _Bool hasUsageBytes;
@property (nonatomic) unsigned long long usageBytes;
@property (nonatomic) _Bool hasFlowsImpactedCount;
@property (nonatomic) unsigned long long flowsImpactedCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
- (int)StringAsNetworkType:(id)arg1;
- (id)usageAttributedToAsString:(int)arg1;
- (int)StringAsUsageAttributedTo:(id)arg1;

@end
