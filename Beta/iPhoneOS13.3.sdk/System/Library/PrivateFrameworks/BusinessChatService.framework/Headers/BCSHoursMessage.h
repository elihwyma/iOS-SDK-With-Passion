/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BCSHoursMessage : PBCodable

{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _days;
    NSMutableArray *_timeRanges;
}

@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, readonly) int *days;
@property (retain, nonatomic) NSMutableArray *timeRanges;

+ (Class)timeRangeType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearTimeRanges;
- (void)clearDays;
- (unsigned long long)timeRangesCount;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (id)daysAsString:(int)arg1;
- (int)StringAsDays:(id)arg1;
- (void)addTimeRange:(id)arg1;
- (void)addDay:(int)arg1;
- (id)timeRangeAtIndex:(unsigned long long)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;

@end
