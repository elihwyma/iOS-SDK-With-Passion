/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface ATXUserMetricsPBActionPredictionsMetricsLogEntry : PBCodable

{
    NSString *_cacheId;
    int _dayOfWeek;
    unsigned int _engagedActions;
    NSString *_engagedBundleId;
    NSMutableArray *_experiments;
    unsigned int _hourOfDay;
    unsigned int _rankOfFirstEngagement;
    unsigned int _shownActions;
    int _ui;
    NSString *_userIdentifier;
    struct {
        unsigned int dayOfWeek:1;
        unsigned int engagedActions:1;
        unsigned int hourOfDay:1;
        unsigned int rankOfFirstEngagement:1;
        unsigned int shownActions:1;
        unsigned int ui:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUserIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (nonatomic) _Bool hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) _Bool hasShownActions;
@property (nonatomic) unsigned int shownActions;
@property (nonatomic) _Bool hasEngagedActions;
@property (nonatomic) unsigned int engagedActions;
@property (nonatomic) _Bool hasRankOfFirstEngagement;
@property (nonatomic) unsigned int rankOfFirstEngagement;
@property (nonatomic, readonly) _Bool hasEngagedBundleId;
@property (retain, nonatomic) NSString *engagedBundleId;
@property (nonatomic) _Bool hasUi;
@property (nonatomic) int ui;
@property (nonatomic, readonly) _Bool hasCacheId;
@property (retain, nonatomic) NSString *cacheId;
@property (retain, nonatomic) NSMutableArray *experiments;

+ (Class)experimentsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)dayOfWeekAsString:(int)arg1;
- (int)StringAsDayOfWeek:(id)arg1;
- (id)uiAsString:(int)arg1;
- (int)StringAsUi:(id)arg1;
- (void)clearExperiments;
- (void)addExperiments:(id)arg1;
- (unsigned long long)experimentsCount;
- (id)experimentsAtIndex:(unsigned long long)arg1;

@end
