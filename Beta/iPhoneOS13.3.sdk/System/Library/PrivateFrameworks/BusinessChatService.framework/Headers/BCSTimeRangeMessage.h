/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface BCSTimeRangeMessage : PBCodable

{
    int _from;
    int _to;
    _Bool _allDay;
    struct {
        unsigned int from:1;
        unsigned int to:1;
        unsigned int allDay:1;
    } _has;
}

@property (nonatomic) _Bool hasFrom;
@property (nonatomic) int from;
@property (nonatomic) _Bool hasTo;
@property (nonatomic) int to;
@property (nonatomic) _Bool hasAllDay;
@property (nonatomic) _Bool allDay;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
