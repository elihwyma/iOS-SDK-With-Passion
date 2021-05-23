/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable

{
    unsigned long long _widgetVisibleSectionsLimit;
    NSMutableArray *_todaySectionConfigs;
    struct {
        unsigned int widgetVisibleSectionsLimit:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *todaySectionConfigs;
@property (nonatomic) _Bool hasWidgetVisibleSectionsLimit;
@property (nonatomic) unsigned long long widgetVisibleSectionsLimit;

+ (Class)todaySectionConfigsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTodaySectionConfigs:(id)arg1;
- (void)clearTodaySectionConfigs;
- (unsigned long long)todaySectionConfigsCount;
- (id)todaySectionConfigsAtIndex:(unsigned long long)arg1;

@end
