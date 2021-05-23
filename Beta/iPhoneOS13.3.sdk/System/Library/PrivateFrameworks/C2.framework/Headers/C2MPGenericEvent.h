/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEvent : PBCodable

{
    unsigned long long _timestampEnd;
    unsigned long long _timestampStart;
    NSMutableArray *_metrics;
    NSString *_name;
    int _type;
    struct {
        unsigned int timestampEnd:1;
        unsigned int timestampStart:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasTimestampStart;
@property (nonatomic) unsigned long long timestampStart;
@property (nonatomic) _Bool hasTimestampEnd;
@property (nonatomic) unsigned long long timestampEnd;
@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)addMetric:(id)arg1;
- (void)clearMetrics;
- (unsigned long long)metricsCount;
- (id)metricAtIndex:(unsigned long long)arg1;

@end
