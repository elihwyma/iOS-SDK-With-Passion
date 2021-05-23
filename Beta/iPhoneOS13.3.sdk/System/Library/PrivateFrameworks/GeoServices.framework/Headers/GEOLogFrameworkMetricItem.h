/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogFrameworkMetricItem : PBCodable

{
    unsigned long long _metricItemSize;
    unsigned int _metricItemCount;
    unsigned int _metricItemIdHash;
    unsigned int _metricItemQueueTime;
    unsigned int _metricItemRetryCount;
    int _metricItemType;
    struct {
        unsigned int has_metricItemSize:1;
        unsigned int has_metricItemCount:1;
        unsigned int has_metricItemIdHash:1;
        unsigned int has_metricItemQueueTime:1;
        unsigned int has_metricItemRetryCount:1;
        unsigned int has_metricItemType:1;
    } _flags;
}

@property (nonatomic) _Bool hasMetricItemType;
@property (nonatomic) int metricItemType;
@property (nonatomic) _Bool hasMetricItemCount;
@property (nonatomic) unsigned int metricItemCount;
@property (nonatomic) _Bool hasMetricItemRetryCount;
@property (nonatomic) unsigned int metricItemRetryCount;
@property (nonatomic) _Bool hasMetricItemSize;
@property (nonatomic) unsigned long long metricItemSize;
@property (nonatomic) _Bool hasMetricItemQueueTime;
@property (nonatomic) unsigned int metricItemQueueTime;
@property (nonatomic) _Bool hasMetricItemIdHash;
@property (nonatomic) unsigned int metricItemIdHash;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)metricItemTypeAsString:(int)arg1;
- (int)StringAsMetricItemType:(id)arg1;

@end
