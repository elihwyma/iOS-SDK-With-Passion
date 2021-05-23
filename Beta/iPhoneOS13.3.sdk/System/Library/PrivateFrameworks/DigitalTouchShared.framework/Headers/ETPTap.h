/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ETPTap : PBCodable

{
    NSData *_colors;
    NSData *_points;
    NSData *_timeDeltas;
}

@property (nonatomic, readonly) _Bool hasTimeDeltas;
@property (retain, nonatomic) NSData *timeDeltas;
@property (nonatomic, readonly) _Bool hasPoints;
@property (retain, nonatomic) NSData *points;
@property (nonatomic, readonly) _Bool hasColors;
@property (retain, nonatomic) NSData *colors;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
