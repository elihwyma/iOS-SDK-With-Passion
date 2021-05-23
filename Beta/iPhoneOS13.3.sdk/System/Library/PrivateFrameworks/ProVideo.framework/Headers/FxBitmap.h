/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxImage.h>

@interface FxBitmap : FxImage

{
    struct FxBitmapPriv *_bitmapPriv;
}

+ (void)setGuaranteeMemoryCallback:(CDUnknownFunctionPointerType)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void *)dataPtr;
- (unsigned long long)rowBytes;
- (id)initWithInfo:(CDStruct_da8610d8)arg1;
- (void)setRowBytes:(unsigned long long)arg1;
- (_Bool)_verifyImage;
- (unsigned long long)_packedRowBytes;
- (id)initWithInfo:(CDStruct_da8610d8)arg1 andData:(void *)arg2;
- (id)initWithCopy:(id)arg1 andInfo:(CDStruct_da8610d8)arg2 andRowBytes:(unsigned long long)arg3;
- (id)initWithCopy:(id)arg1;
- (id)initWithInfo:(CDStruct_da8610d8)arg1 rowBytes:(unsigned long long)arg2 andData:(void *)arg3;
- (id)initWithCopy:(id)arg1 andInfo:(CDStruct_da8610d8)arg2;
- (void *)dataPtrForPositionX:(unsigned long long)arg1 Y:(unsigned long long)arg2;
- (_Bool)_ownsData;
- (void)_setOwnedDataPtr:(void *)arg1;
- (void)_setOwned:(_Bool)arg1;

@end
