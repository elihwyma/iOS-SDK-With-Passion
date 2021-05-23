/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface HDActivityAWDActivityAchievementCountEvent : PBCodable

{
    unsigned long long _timestamp;
    int _totalAchievementCount;
    int _totalOTAAchievementCount;
    int _totalOTAAchievementViewedCount;
    _Bool _moreThanOneYearSinceActivitySetup;
    struct {
        unsigned int timestamp:1;
        unsigned int totalAchievementCount:1;
        unsigned int totalOTAAchievementCount:1;
        unsigned int totalOTAAchievementViewedCount:1;
        unsigned int moreThanOneYearSinceActivitySetup:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasTotalAchievementCount;
@property (nonatomic) int totalAchievementCount;
@property (nonatomic) _Bool hasMoreThanOneYearSinceActivitySetup;
@property (nonatomic) _Bool moreThanOneYearSinceActivitySetup;
@property (nonatomic) _Bool hasTotalOTAAchievementCount;
@property (nonatomic) int totalOTAAchievementCount;
@property (nonatomic) _Bool hasTotalOTAAchievementViewedCount;
@property (nonatomic) int totalOTAAchievementViewedCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)totalAchievementCountAsString:(int)arg1;
- (int)StringAsTotalAchievementCount:(id)arg1;
- (id)totalOTAAchievementCountAsString:(int)arg1;
- (int)StringAsTotalOTAAchievementCount:(id)arg1;
- (id)totalOTAAchievementViewedCountAsString:(int)arg1;
- (int)StringAsTotalOTAAchievementViewedCount:(id)arg1;

@end
