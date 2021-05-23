/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSEncodingDetectionPlaceholder;

__attribute__((visibility("hidden")))
@interface NSEncodingDetectionBuffer : NSObject

{
    unsigned long long _nsEncoding;
    unsigned int _cfEncoding;
    NSEncodingDetectionPlaceholder *_placeholder;
    char *_bytes;
    _Bool _bytesAllocated;
    unsigned long long _bytesIndex;
    unsigned long long _bytesLength;
}

- (void)dealloc;
- (_Bool)_growBufferIfNeededToAccomodateByteCount:(unsigned long long)arg1;
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2 stackBuffer:(char *)arg3 bufferLength:(unsigned long long)arg4 placeholder:(id)arg5;
- (void)appendByte:(unsigned char)arg1;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3;
- (void)appendUTF16Char:(unsigned short)arg1;
- (void)appendUTF32Char:(unsigned int)arg1;
- (void)appendByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4;
- (void)appendPlaceholder;
- (void)appendBytes:(const char *)arg1 count:(unsigned long long)arg2;
- (id)stringWithLossySubsitutionString:(id)arg1;

@end
