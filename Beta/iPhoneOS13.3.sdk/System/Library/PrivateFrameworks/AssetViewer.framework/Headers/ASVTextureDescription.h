/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSString;

@interface ASVTextureDescription : NSObject

{
    _Bool _generateMipmaps;
    MISSING_TYPE *_originalSize;
    long long _downsamplingFactor;
    long long _fileType;
    NSString *_name;
    CDStruct_e791d03f _originalPixelFormat;
    CDStruct_e791d03f _destinationPixelFormat;
}

@property (nonatomic, readonly) MISSING_TYPE *originalSize;
@property (nonatomic, readonly) CDStruct_e791d03f originalPixelFormat;
@property (nonatomic) long long downsamplingFactor;
@property (nonatomic, readonly) MISSING_TYPE *destinationSize;
@property (nonatomic, readonly) CDStruct_e791d03f destinationPixelFormat;
@property (nonatomic, readonly) long long fileType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) _Bool generateMipmaps;
@property (nonatomic, readonly) _Bool requiresDownsampling;

+ (unsigned long long)bytesPerPixelForPixelFormat:(CDStruct_e791d03f)arg1;
+ (long long)pixelEncodingForBitsPerComponent:(unsigned long long)arg1;
+ (unsigned long long)bytesPerComponentForColorModel:(long long)arg1;
+ (unsigned long long)bytesPerComponentForPixelEncoding:(long long)arg1;

- (id)debugDescription;
- (id)initWithName:(id)arg1 originalSize:(CDStruct_e791d03f)arg2 originalPixelFormat:(CDStruct_e791d03f)arg3 destinationPixelFormat:(long long)arg4 downsamplingFactor:(long long)arg5 fileType:(_Bool)arg6 generateMipmaps: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 destinationPixelFormat:(CDStruct_e791d03f)arg2 imageProperties:(struct __CFDictionary *)arg3 fileType:(struct __CFString *)arg4 generateMipmaps:(_Bool)arg5;

@end
