/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIContext.h>

@interface CIBitmapContext : CIContext

{
    struct CIBitmapContextPrivate *_bcpriv;
}

+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)contextWithBitmap:(void *)arg1 rowBytes:(long long)arg2 bounds:(struct CGRect)arg3 format:(int)arg4;
+ (id)contextWithBitmap:(void *)arg1 rowBytes:(long long)arg2 bounds:(struct CGRect)arg3 format:(int)arg4 options:(id)arg5;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)initWithBitmap:(void *)arg1 rowBytes:(long long)arg2 bounds:(struct CGRect)arg3 format:(int)arg4;
- (id)initWithBitmap:(void *)arg1 rowBytes:(long long)arg2 bounds:(struct CGRect)arg3 format:(int)arg4 options:(id)arg5;
- (_Bool)setBitmap:(void *)arg1 rowBytes:(long long)arg2 bounds:(struct CGRect)arg3 format:(int)arg4;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3;
- (struct CGRect)bounds;

@end
