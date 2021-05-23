/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUBrushRasterizer : NSObject

+ (long long)_rasterizeBrushStroke:(id)arg1 toROI:(CDStruct_996ac03c)arg2 maskPtr:(char *)arg3 maskPtrRowBytes:(long long)arg4 close:(_Bool)arg5 startIndex:(long long)arg6 pressureMode:(long long)arg7;
+ (long long)rasterizeBrushStroke:(id)arg1 atPoint:(CDStruct_912cb5d2)arg2 toBuffer:(id)arg3 close:(_Bool)arg4 startIndex:(long long)arg5;
+ (void)rasterizeBrushStroke:(id)arg1 atPoint:(CDStruct_912cb5d2)arg2 toBuffer:(id)arg3;

@end
