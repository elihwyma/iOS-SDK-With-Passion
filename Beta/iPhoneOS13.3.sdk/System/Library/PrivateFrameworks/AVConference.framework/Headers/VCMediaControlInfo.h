/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol VCMediaControlInfoDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaControlInfo : NSObject

{
    unsigned short _bitmap;
    unsigned long long _serializedSize;
    id <VCMediaControlInfoDelegate> _delegate;
    unsigned char _version;
}

@property (readonly) unsigned long long serializedSize;
@property id <VCMediaControlInfoDelegate> delegate;
@property unsigned char version;

- (void)invalidate;
- (void)dispose;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3 version:(unsigned char)arg4;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)setInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;
- (_Bool)hasInfoType:(unsigned int)arg1;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (int)getInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;

@end
