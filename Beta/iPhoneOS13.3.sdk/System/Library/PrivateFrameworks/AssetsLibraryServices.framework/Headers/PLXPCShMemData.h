/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSData.h>

@interface PLXPCShMemData : NSData

{
    void *_buffer;
    unsigned long long _dataLength;
    unsigned long long _bufferLength;
}

- (void)dealloc;
- (unsigned long long)length;
- (id)description;
- (const void *)bytes;
- (id)initWithXPCShmem:(id)arg1;
- (id)initWithXPCShmem:(id)arg1 length:(long long)arg2;

@end
