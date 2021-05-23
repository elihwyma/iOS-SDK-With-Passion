/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CATintedImage : NSObject

{
    struct CGImage *_image;
    struct CGColor *_tint;
    unsigned int _copy_flags;
}

@property (retain) struct CGImage *image;
@property (retain) struct CGColor *tint;

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)tintedImageWithCABackingStore:(struct CABackingStore *)arg1;
+ (id)tintedImageWithCGImage:(struct CGImage *)arg1 tint:(struct CGColor *)arg2 copyFlags:(unsigned int)arg3;
+ (id)tintedImageWithCGImage:(struct CGImage *)arg1 tint:(struct CGColor *)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CA_prepareRenderValue;

@end
