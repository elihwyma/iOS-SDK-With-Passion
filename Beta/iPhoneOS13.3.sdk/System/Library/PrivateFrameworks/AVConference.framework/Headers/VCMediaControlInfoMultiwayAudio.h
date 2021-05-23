/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoMultiwayAudio : VCMediaControlInfo

{
    unsigned int _controlInfoROC;
    unsigned int _controlInfoMKI;
}

- (id)description;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (_Bool)hasInfoType:(unsigned int)arg1;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (unsigned long long)serializedSize;

@end
