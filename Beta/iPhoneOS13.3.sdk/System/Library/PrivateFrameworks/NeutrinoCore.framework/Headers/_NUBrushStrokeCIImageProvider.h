/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NUBrushStroke;

@interface _NUBrushStrokeCIImageProvider : NSObject

{
    NUBrushStroke *_stroke;
    _Bool _closed;
    long long _pressureMode;
    CDStruct_996ac03c _extent;
}

- (void)provideImageData:(void *)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3:(unsigned long long)arg4 size:(unsigned long long)arg5:(unsigned long long)arg6 userInfo:(id)arg7;
- (id)initWithStroke:(id)arg1 closed:(_Bool)arg2 pressureMode:(long long)arg3;

@end
