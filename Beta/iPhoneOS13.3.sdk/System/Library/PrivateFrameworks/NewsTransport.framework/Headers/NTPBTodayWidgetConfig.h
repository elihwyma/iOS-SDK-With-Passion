/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBTodayWidgetConfig : PBCodable

{
    long long _minimumArticleExposureDurationToBePreseen;
    double _prerollLoadingTimeout;
    NSData *_externalAnalyticsConfigurationsData;
    unsigned int _minimumNumberOfTimesPreseenToBeSeen;
    NSData *_videoGroupsConfigData;
    struct {
        unsigned int minimumArticleExposureDurationToBePreseen:1;
        unsigned int prerollLoadingTimeout:1;
        unsigned int minimumNumberOfTimesPreseenToBeSeen:1;
    } _has;
}

@property (nonatomic) _Bool hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) _Bool hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) _Bool hasPrerollLoadingTimeout;
@property (nonatomic) double prerollLoadingTimeout;
@property (nonatomic, readonly) _Bool hasExternalAnalyticsConfigurationsData;
@property (retain, nonatomic) NSData *externalAnalyticsConfigurationsData;
@property (nonatomic, readonly) _Bool hasVideoGroupsConfigData;
@property (retain, nonatomic) NSData *videoGroupsConfigData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
