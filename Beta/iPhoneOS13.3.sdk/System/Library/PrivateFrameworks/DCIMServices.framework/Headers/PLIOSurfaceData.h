/*
 Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

#import <Foundation/NSData.h>

@interface PLIOSurfaceData : NSData

{
    struct __IOSurface *_surface;
    const void *_bytes;
    unsigned long long _length;
}

+ (id)dataWithIOSurface:(void *)arg1;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIOSurface:(void *)arg1;
- (id)initWithIOSurface:(void *)arg1 length:(unsigned long long)arg2;

@end
