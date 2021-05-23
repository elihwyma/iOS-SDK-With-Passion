/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRGameControllerButtonsProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable

{
    unsigned long long _controllerID;
    _MRGameControllerButtonsProtobuf *_buttons;
    _MRGameControllerDigitizerProtobuf *_digitizer;
    _MRGameControllerMotionProtobuf *_motion;
    CDStruct_669c4a63 _has;
}

@property (nonatomic) _Bool hasControllerID;
@property (nonatomic) unsigned long long controllerID;
@property (nonatomic, readonly) _Bool hasMotion;
@property (retain, nonatomic) _MRGameControllerMotionProtobuf *motion;
@property (nonatomic, readonly) _Bool hasButtons;
@property (retain, nonatomic) _MRGameControllerButtonsProtobuf *buttons;
@property (nonatomic, readonly) _Bool hasDigitizer;
@property (retain, nonatomic) _MRGameControllerDigitizerProtobuf *digitizer;

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
