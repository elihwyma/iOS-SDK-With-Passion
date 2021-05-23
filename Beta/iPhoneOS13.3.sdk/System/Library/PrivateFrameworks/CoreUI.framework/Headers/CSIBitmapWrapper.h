/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CSIBitmapWrapper : NSObject

{
    struct CGContext *_bitmapContext;
    NSData *_pixelData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned long long _rowbytes;
    _Bool _allowsMultiPassEncoding;
    _Bool _allowsOptimalRowbytesPacking;
    _Bool _allowsCompactCompression;
    _Bool _allowsPaletteImageCompression;
    _Bool _allowsHevcCompression;
    _Bool _allowsDeepmapImageCompression;
    _Bool _allowsDeepmap2ImageCompression;
    _Bool _flipped;
    struct CGImage *_sourceImage;
    long long _texturePixelFormat;
    unsigned int _imageAlpha;
    double _compressionQuality;
    long long _compressionType;
    unsigned long long _colorSpaceID;
    long long _textureInterpretation;
    int _exifOrientation;
    long long _targetPlatform;
    NSString *_name;
}

@property (nonatomic) unsigned int pixelFormat;
@property _Bool allowsMultiPassEncoding;
@property _Bool allowsOptimalRowbytesPacking;
@property _Bool allowsCompactCompression;
@property _Bool allowsPaletteImageCompression;
@property _Bool allowsHevcCompression;
@property _Bool allowsDeepmapImageCompression;
@property _Bool allowsDeepmap2ImageCompression;
@property (nonatomic) _Bool flipped;
@property (nonatomic) double compressionQuality;
@property long long targetPlatform;
@property long long compressionType;
@property (nonatomic) unsigned long long colorSpaceID;
@property (nonatomic) long long textureInterpretation;
@property (nonatomic) int exifOrientation;
@property (nonatomic) NSString *name;

- (void)dealloc;
- (unsigned int)width;
- (unsigned int)height;
- (struct CGContext *)bitmapContext;
- (unsigned int)sourceAlphaInfo;
- (id)compressedData:(_Bool)arg1 usedEncoding:(int *)arg2 andRowChunkSize:(unsigned int *)arg3;
- (unsigned long long)rowbytes;
- (id)pixelData;
- (void)setPixelData:(id)arg1;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 texturePixelFormat:(long long)arg4;
- (void)setSourceAlphaInfo:(unsigned int)arg1;

@end
