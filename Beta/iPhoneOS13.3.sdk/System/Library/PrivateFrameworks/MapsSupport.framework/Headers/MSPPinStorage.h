/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPDroppedPin, NSString, PBUnknownFields;

@interface MSPPinStorage : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDroppedPin *_droppedPin;
    NSString *_identifier;
    int _type;
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasPosition;
@property (nonatomic) double position;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasDroppedPin;
@property (retain, nonatomic) MSPDroppedPin *droppedPin;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
