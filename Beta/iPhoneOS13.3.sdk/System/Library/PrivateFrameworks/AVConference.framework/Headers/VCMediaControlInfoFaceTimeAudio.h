/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo

{
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoAudioPacketSize;
    unsigned int _controlInfoAudioTimestamp;
    double _controlInfoArrivalTime;
    CDStruct_b4442fdd _controlFeedbackParameter;
    _Bool _videoEnabled;
}

@property (readonly) unsigned long long feedbackSize;
@property _Bool videoEnabled;

- (id)description;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)setInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;
- (_Bool)hasInfoType:(unsigned int)arg1;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (int)getInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (unsigned long long)serializedSize;
- (int)handleOptionalControlInfo:(CDStruct_39aa150d *)arg1;

@end
