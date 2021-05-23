/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBWidgetConfig : PBCodable

{
    double _alternativeButlerWidgetConfigPopulationCeiling;
    double _alternativeButlerWidgetConfigPopulationFloor;
    long long _articleListBackgroundMinimumUpdateInterval;
    long long _articleListForegroundMinimumUpdateInterval;
    long long _backgroundMinimumUpdateInterval;
    long long _forYouBackgroundMinimumUpdateInterval;
    long long _forYouCutoffTime;
    long long _forYouForegroundMinimumUpdateInterval;
    long long _foregroundMinimumUpdateInterval;
    long long _minimumArticleExposureDurationToBePreseen;
    double _parsecPopulationCeiling;
    double _parsecPopulationFloor;
    long long _parsecTrendingCutoffTime;
    long long _topStoriesBackgroundMinimumUpdateInterval;
    long long _topStoriesCutoffTime;
    long long _topStoriesForegroundMinimumUpdateInterval;
    long long _trendingBackgroundMinimumUpdateInterval;
    long long _trendingByParsecBackgroundMinimumUpdateInterval;
    long long _trendingByParsecForegroundMinimumUpdateInterval;
    long long _trendingCutoffTime;
    long long _trendingForegroundMinimumUpdateInterval;
    long long _widgetSectionConfigBackgroundMinimumUpdateInterval;
    long long _widgetSectionConfigForegroundMinimumUpdateInterval;
    unsigned int _enabledSections;
    NSString *_identifier;
    unsigned int _minimumNumberOfTimesPreseenToBeSeen;
    struct {
        unsigned int alternativeButlerWidgetConfigPopulationCeiling:1;
        unsigned int alternativeButlerWidgetConfigPopulationFloor:1;
        unsigned int articleListBackgroundMinimumUpdateInterval:1;
        unsigned int articleListForegroundMinimumUpdateInterval:1;
        unsigned int backgroundMinimumUpdateInterval:1;
        unsigned int forYouBackgroundMinimumUpdateInterval:1;
        unsigned int forYouCutoffTime:1;
        unsigned int forYouForegroundMinimumUpdateInterval:1;
        unsigned int foregroundMinimumUpdateInterval:1;
        unsigned int minimumArticleExposureDurationToBePreseen:1;
        unsigned int parsecPopulationCeiling:1;
        unsigned int parsecPopulationFloor:1;
        unsigned int parsecTrendingCutoffTime:1;
        unsigned int topStoriesBackgroundMinimumUpdateInterval:1;
        unsigned int topStoriesCutoffTime:1;
        unsigned int topStoriesForegroundMinimumUpdateInterval:1;
        unsigned int trendingBackgroundMinimumUpdateInterval:1;
        unsigned int trendingByParsecBackgroundMinimumUpdateInterval:1;
        unsigned int trendingByParsecForegroundMinimumUpdateInterval:1;
        unsigned int trendingCutoffTime:1;
        unsigned int trendingForegroundMinimumUpdateInterval:1;
        unsigned int widgetSectionConfigBackgroundMinimumUpdateInterval:1;
        unsigned int widgetSectionConfigForegroundMinimumUpdateInterval:1;
        unsigned int enabledSections:1;
        unsigned int minimumNumberOfTimesPreseenToBeSeen:1;
    } _has;
}

@property (nonatomic) _Bool hasTopStoriesCutoffTime;
@property (nonatomic) long long topStoriesCutoffTime;
@property (nonatomic) _Bool hasForYouCutoffTime;
@property (nonatomic) long long forYouCutoffTime;
@property (nonatomic) _Bool hasTrendingCutoffTime;
@property (nonatomic) long long trendingCutoffTime;
@property (nonatomic) _Bool hasEnabledSections;
@property (nonatomic) unsigned int enabledSections;
@property (nonatomic) _Bool hasParsecPopulationFloor;
@property (nonatomic) double parsecPopulationFloor;
@property (nonatomic) _Bool hasParsecPopulationCeiling;
@property (nonatomic) double parsecPopulationCeiling;
@property (nonatomic) _Bool hasForegroundMinimumUpdateInterval;
@property (nonatomic) long long foregroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasBackgroundMinimumUpdateInterval;
@property (nonatomic) long long backgroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasTopStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasTopStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasForYouForegroundMinimumUpdateInterval;
@property (nonatomic) long long forYouForegroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasForYouBackgroundMinimumUpdateInterval;
@property (nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasTrendingForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingForegroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasTrendingBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingBackgroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasAlternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) _Bool hasAlternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) _Bool hasParsecTrendingCutoffTime;
@property (nonatomic) long long parsecTrendingCutoffTime;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasArticleListForegroundMinimumUpdateInterval;
@property (nonatomic) long long articleListForegroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasArticleListBackgroundMinimumUpdateInterval;
@property (nonatomic) long long articleListBackgroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasTrendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecForegroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasTrendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingByParsecBackgroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasWidgetSectionConfigForegroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigForegroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) long long widgetSectionConfigBackgroundMinimumUpdateInterval;
@property (nonatomic) _Bool hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) _Bool hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
