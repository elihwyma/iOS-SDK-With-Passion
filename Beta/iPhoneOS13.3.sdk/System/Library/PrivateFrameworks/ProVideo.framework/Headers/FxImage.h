/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxImage : NSObject

{
    struct FxImagePriv *_imagePriv;
}

+ (id)alloc;

- (id)init;
- (void)dealloc;
- (unsigned long long)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)size;
- (unsigned long long)depth;
- (unsigned long long)version;
- (unsigned long long)width;
- (unsigned long long)height;
- (struct CGRect)bounds;
- (void)setWidth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (struct CGColorSpace *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (unsigned long long)origin;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setDepth:(unsigned long long)arg1;
- (id)initWithInfo:(CDStruct_da8610d8)arg1;
- (void)setOrigin:(unsigned long long)arg1;
- (unsigned long long)field;
- (void)setImageType:(unsigned long long)arg1;
- (unsigned long long)imageType;
- (void)setField:(unsigned long long)arg1;
- (void)setBytes:(unsigned long long)arg1;
- (unsigned long long)colorInfo;
- (CDStruct_da8610d8)imageInfo;
- (void)setColorInfo:(unsigned long long)arg1;
- (_Bool)isPremultiplied;
- (void)setScaleX:(double)arg1;
- (void)setScaleY:(double)arg1;
- (double)scaleX;
- (double)scaleY;
- (double)pixelAspect;
- (struct FxRect)dod;
- (id)pixelTransform;
- (id)inversePixelTransform;
- (unsigned long long)fieldOrder;
- (unsigned long long)numActiveChannels;
- (_Bool)containsPointX:(int)arg1 Y:(int)arg2;
- (void)setWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2;
- (void)setNumActiveChannels:(unsigned long long)arg1;
- (void)setIsPremultiplied:(_Bool)arg1;
- (void)setPixelAspect:(double)arg1;
- (void)setFieldOrder:(unsigned long long)arg1;
- (unsigned long long)fxColorPrimaries;
- (void)setFxColorPrimaries:(unsigned long long)arg1;
- (void)setEyeType:(int)arg1;
- (int)eyeType;
- (void)setDod:(struct FxRect)arg1;
- (void)setPixelTransform:(id)arg1;
- (void)setDeallocCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (_Bool)_verifyImage;

@end
