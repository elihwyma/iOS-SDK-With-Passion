/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable

{
    unsigned int _deviceID;
    unsigned int _errorCode;
    struct {
        unsigned int deviceID:1;
        unsigned int errorCode:1;
    } _has;
}

@property (nonatomic) _Bool hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) unsigned int errorCode;

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
