/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBTodayConfig : PBCodable

{
    unsigned long long _backgroundForYouMinimumUpdateInterval;
    unsigned long long _backgroundTrendingByParsecMinimumUpdateInterval;
    unsigned long long _foregroundForYouMinimumUpdateInterval;
    unsigned long long _foregroundTrendingByParsecMinimumUpdateInterval;
    unsigned long long _widgetSlotsLimit;
    NSMutableArray *_todayQueueConfigs;
    struct {
        unsigned int backgroundForYouMinimumUpdateInterval:1;
        unsigned int backgroundTrendingByParsecMinimumUpdateInterval:1;
        unsigned int foregroundForYouMinimumUpdateInterval:1;
        unsigned int foregroundTrendingByParsecMinimumUpdateInterval:1;
        unsigned int widgetSlotsLimit:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *todayQueueConfigs;
@property (nonatomic) _Bool hasWidgetSlotsLimit;
@property (nonatomic) unsigned long long widgetSlotsLimit;
@property (nonatomic) _Bool hasForegroundForYouMinimumUpdateInterval;
@property (nonatomic) unsigned long long foregroundForYouMinimumUpdateInterval;
@property (nonatomic) _Bool hasBackgroundForYouMinimumUpdateInterval;
@property (nonatomic) unsigned long long backgroundForYouMinimumUpdateInterval;
@property (nonatomic) _Bool hasForegroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) unsigned long long foregroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) _Bool hasBackgroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) unsigned long long backgroundTrendingByParsecMinimumUpdateInterval;

+ (Class)todayQueueConfigsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTodayQueueConfigs:(id)arg1;
- (void)clearTodayQueueConfigs;
- (unsigned long long)todayQueueConfigsCount;
- (id)todayQueueConfigsAtIndex:(unsigned long long)arg1;

@end
