/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable

{
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
    unsigned int _deviceID;
    int _recordingState;
    struct {
        unsigned int deviceID:1;
        unsigned int recordingState:1;
    } _has;
}

@property (nonatomic) _Bool hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic, readonly) _Bool hasDescriptor;
@property (retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic) _Bool hasRecordingState;
@property (nonatomic) int recordingState;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)recordingStateAsString:(int)arg1;
- (int)StringAsRecordingState:(id)arg1;

@end
