/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBPersonalizationAggregate : PBCodable

{
    double _clicks;
    unsigned long long _eventCount;
    double _impressions;
    unsigned long long _timestamp;
    NSString *_featureKey;
    struct {
        unsigned int clicks:1;
        unsigned int eventCount:1;
        unsigned int impressions:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) _Bool hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) _Bool hasImpressions;
@property (nonatomic) double impressions;
@property (nonatomic) _Bool hasEventCount;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
