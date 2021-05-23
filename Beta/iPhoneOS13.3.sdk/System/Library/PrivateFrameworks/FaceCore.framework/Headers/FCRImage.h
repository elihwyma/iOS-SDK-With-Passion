/*
 Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

#import <Foundation/NSObject.h>

@interface FCRImage : NSObject

{
    unsigned long long width;
    unsigned long long height;
    unsigned long long bytesPerRow;
    char *rawDataBuffer;
    char *alignedDataBuffer;
    _Bool freeBufferWhenDone;
}

@property unsigned long long width;
@property unsigned long long height;
@property unsigned long long bytesPerRow;

- (void)dealloc;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char *)arg4 freeBufferWhenDone:(_Bool)arg5;
- (char *)getAlignedImageData;

@end
