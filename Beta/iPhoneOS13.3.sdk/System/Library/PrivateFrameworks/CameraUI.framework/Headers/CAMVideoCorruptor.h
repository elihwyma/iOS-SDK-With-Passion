/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMVideoCorruptor : NSObject

+ (int)_getBoxInfoFromFile:(struct __sFILE *)arg1 ofSize:(long long)arg2 boxType:(unsigned int *)arg3 boxSize:(long long *)arg4;
+ (int)_findBox:(unsigned int)arg1 inFile:(struct __sFILE *)arg2 ofSize:(long long)arg3 boxSize:(long long *)arg4;
+ (int)_corruptMethodFytpForFile:(struct __sFILE *)arg1 ofSize:(long long)arg2;
+ (int)_corruptMethodMdatForFile:(struct __sFILE *)arg1 ofSize:(long long)arg2;
+ (int)_corruptMethodMoovForFile:(struct __sFILE *)arg1 ofSize:(long long)arg2;
+ (_Bool)corruptVideoFileAtURLWhenEnabled:(id)arg1;

@end
