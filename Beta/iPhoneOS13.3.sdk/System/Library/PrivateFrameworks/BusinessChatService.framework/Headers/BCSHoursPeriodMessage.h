/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BCSHoursPeriodMessage : PBCodable

{
    NSMutableArray *_hours;
}

@property (retain, nonatomic) NSMutableArray *hours;

+ (Class)hoursType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)hoursCount;
- (void)clearHours;
- (id)hoursAtIndex:(unsigned long long)arg1;
- (void)addHours:(id)arg1;

@end
