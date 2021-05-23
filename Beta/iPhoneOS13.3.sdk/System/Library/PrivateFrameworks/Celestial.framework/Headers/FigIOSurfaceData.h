/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSData.h>

@interface FigIOSurfaceData : NSData

{
    struct __IOSurface *_surface;
    unsigned long long _length;
    const void *_bytes;
}

+ (void)initialize;
+ (id)dataWithIOSurface:(struct __IOSurface *)arg1;
+ (id)dataWithIOSurface:(struct __IOSurface *)arg1 length:(unsigned long long)arg2;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 length:(unsigned long long)arg2;

@end
