/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface PIMsgImageBuffer : NSObject

{
    unsigned long long elementByteSize;
    unsigned long long rowElements;
    unsigned long long width;
    unsigned long long height;
    int format;
    struct CGColorSpace *bufferColorspace;
    NSMutableData *data;
}

@property (retain) NSMutableData *data;
@property (readonly) unsigned long long elementByteSize;
@property (readonly) unsigned long long rowElements;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) int format;

- (void)dealloc;
- (void *)bytes;
- (id)image;
- (id)initWithBytes:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(struct CGColorSpace *)arg7;
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(struct CGColorSpace *)arg7;

@end
