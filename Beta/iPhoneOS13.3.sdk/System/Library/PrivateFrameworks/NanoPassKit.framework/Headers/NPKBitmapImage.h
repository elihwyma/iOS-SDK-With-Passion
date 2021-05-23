/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NPKBitmapImage : NSObject

{
    unsigned int _bitmapInfo;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    unsigned long long _bytesPerRow;
    NSData *_bitmapData;
}

@property unsigned long long width;
@property unsigned long long height;
@property unsigned long long bitsPerComponent;
@property unsigned long long bitsPerPixel;
@property unsigned long long bytesPerRow;
@property unsigned int bitmapInfo;
@property (retain) NSData *bitmapData;

- (struct CGImage *)createImageRef;
- (id)initWithCGImageRef:(struct CGImage *)arg1;
- (id)initWithEncodedImage:(id)arg1;
- (id)encodedImage;
- (void)enumerateAllPixels:(CDUnknownBlockType)arg1;

@end
