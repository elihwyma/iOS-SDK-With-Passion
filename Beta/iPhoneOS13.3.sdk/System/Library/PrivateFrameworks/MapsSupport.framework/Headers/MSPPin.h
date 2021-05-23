/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPDroppedPin;

@interface MSPPin : PBCodable

{
    MSPDroppedPin *_droppedPin;
}

@property (nonatomic, readonly) _Bool hasDroppedPin;
@property (retain, nonatomic) MSPDroppedPin *droppedPin;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
