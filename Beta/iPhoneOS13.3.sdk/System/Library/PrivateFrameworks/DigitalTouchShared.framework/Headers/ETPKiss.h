/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ETPKiss : PBCodable

{
    NSData *_angles;
    NSData *_delays;
    NSData *_points;
}

@property (nonatomic, readonly) _Bool hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (nonatomic, readonly) _Bool hasPoints;
@property (retain, nonatomic) NSData *points;
@property (nonatomic, readonly) _Bool hasAngles;
@property (retain, nonatomic) NSData *angles;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
