/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface SCRCRawImage : NSObject

{
    struct CGImage *_imageRef;
    char *_data;
    long long _width;
    long long _height;
    long long _bytesPerPixel;
}

@property (nonatomic) char *data;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long bytesPerPixel;
@property (retain, nonatomic) struct CGImage *imageRef;

+ (id)rawImageForImage:(struct CGImage *)arg1;

- (void)dealloc;

@end
