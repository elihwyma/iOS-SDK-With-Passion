/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ATXNotificationsPBEvent : PBCodable

{
    unsigned long long _timestamp;
    int _event;
    int _pos;
    _Bool _isOffscreen;
    _Bool _topOfPile;
    struct {
        unsigned int timestamp:1;
        unsigned int event:1;
        unsigned int pos:1;
        unsigned int isOffscreen:1;
        unsigned int topOfPile:1;
    } _has;
}

@property (nonatomic) _Bool hasEvent;
@property (nonatomic) int event;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasIsOffscreen;
@property (nonatomic) _Bool isOffscreen;
@property (nonatomic) _Bool hasPos;
@property (nonatomic) int pos;
@property (nonatomic) _Bool hasTopOfPile;
@property (nonatomic) _Bool topOfPile;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)eventAsString:(int)arg1;
- (int)StringAsEvent:(id)arg1;

@end
