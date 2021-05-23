/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSUUID;

@interface ISImage : NSObject

{
    NSData *_bitmapData;
}

@property (retain) NSUUID *uuid;
@property (readonly) NSData *bitmapData;
@property (readonly) struct CGSize pixelSize;
@property struct CGSize minimumSize;
@property (readonly) struct CGSize size;
@property (readonly) double scale;
@property (readonly) struct CGImage *CGImage;
@property (readonly) struct CGImage *cgImage;
@property (readonly) _Bool placeholder;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (struct CGColorSpace *)srgbColorSpace;

- (id)description;
- (id)debugDescription;
- (id)_init;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (_Bool)writeToURL:(id)arg1;
- (id)digest;
- (id)initWithContentsOfURL:(id)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 minimumSize:(struct CGSize)arg3 placeholder:(_Bool)arg4;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 placeholder:(_Bool)arg3;

@end
