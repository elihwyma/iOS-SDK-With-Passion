/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NUPixelFormat : NSObject

{
    _Bool _extendedRange;
    int _CIFormat;
    unsigned int _CVPixelFormat;
    long long _bytesPerPixel;
    NSString *_name;
}

@property (nonatomic, readonly) long long bytesPerPixel;
@property (nonatomic, readonly) int CIFormat;
@property (nonatomic, readonly) unsigned int CVPixelFormat;
@property (nonatomic, readonly) _Bool extendedRange;
@property (nonatomic, readonly) NSString *name;

+ (id)pixelFormatForCIFormat:(int)arg1;
+ (id)pixelFormatForCVPixelFormat:(unsigned int)arg1;
+ (id)ARGB8;
+ (id)BGRA8;
+ (id)RGBA8;
+ (id)sRGBA8;
+ (id)RGBA16;
+ (id)RG16;
+ (id)RGBAf;
+ (id)RGBAh;
+ (id)I8;
+ (id)A16;
+ (id)A2RGB10;
+ (id)XRSRGB10;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)alignedRowBytesForWidth:(long long)arg1;
- (_Bool)isEqualToPixelFormat:(id)arg1;

@end
