/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable

{
    int _widgetAppearanceType;
    int _widgetArticleCount;
    int _widgetHeadlineExposureCount;
    NSMutableArray *_widgetPersonalizationFeatureCTRPairs;
    NSMutableArray *_widgetSectionsArticleCountPairs;
    struct {
        unsigned int widgetAppearanceType:1;
        unsigned int widgetArticleCount:1;
        unsigned int widgetHeadlineExposureCount:1;
    } _has;
}

@property (nonatomic) _Bool hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) _Bool hasWidgetHeadlineExposureCount;
@property (nonatomic) int widgetHeadlineExposureCount;
@property (retain, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs;
@property (retain, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs;
@property (nonatomic) _Bool hasWidgetAppearanceType;
@property (nonatomic) int widgetAppearanceType;

+ (Class)widgetSectionsArticleCountPairType;
+ (Class)widgetPersonalizationFeatureCTRPairType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addWidgetSectionsArticleCountPair:(id)arg1;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)arg1;
- (void)clearWidgetSectionsArticleCountPairs;
- (unsigned long long)widgetSectionsArticleCountPairsCount;
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)arg1;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)arg1;

@end
