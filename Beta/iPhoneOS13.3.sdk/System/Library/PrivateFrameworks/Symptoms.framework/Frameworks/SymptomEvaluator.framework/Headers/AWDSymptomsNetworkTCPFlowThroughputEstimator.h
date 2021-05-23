/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkTCPFlowThroughputEstimator : PBCodable

{
    unsigned long long _timestamp;
    NSString *_clientIdentifier;
    NSMutableArray *_flowThroughputEvents;
    int _networkType;
    NSString *_sourceAppIdentifier;
    struct {
        unsigned int timestamp:1;
        unsigned int networkType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic, readonly) _Bool hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic, readonly) _Bool hasSourceAppIdentifier;
@property (retain, nonatomic) NSString *sourceAppIdentifier;
@property (retain, nonatomic) NSMutableArray *flowThroughputEvents;

+ (Class)flowThroughputEventType;

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
- (void)addFlowThroughputEvent:(id)arg1;
- (unsigned long long)flowThroughputEventsCount;
- (void)clearFlowThroughputEvents;
- (id)flowThroughputEventAtIndex:(unsigned long long)arg1;

@end
