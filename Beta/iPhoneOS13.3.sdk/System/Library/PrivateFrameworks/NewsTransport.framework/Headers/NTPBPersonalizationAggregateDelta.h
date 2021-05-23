/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable

{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _events;
    double _defaultClicks;
    double _defaultImpressions;
    double _impressionBias;
    unsigned long long _timestamp;
    NSString *_featureKey;
    struct {
        unsigned int defaultClicks:1;
        unsigned int defaultImpressions:1;
        unsigned int impressionBias:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) _Bool hasDefaultClicks;
@property (nonatomic) double defaultClicks;
@property (nonatomic) _Bool hasDefaultImpressions;
@property (nonatomic) double defaultImpressions;
@property (nonatomic, readonly) unsigned long long eventsCount;
@property (nonatomic, readonly) unsigned int *events;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasImpressionBias;
@property (nonatomic) double impressionBias;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addEvents:(unsigned int)arg1;
- (void)clearEvents;
- (unsigned int)eventsAtIndex:(unsigned long long)arg1;
- (void)setEvents:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
