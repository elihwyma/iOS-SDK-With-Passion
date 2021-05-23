/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Foundation/NSObject.h>

@interface BPSThumbnailGenerator : NSObject

+ (id)scaledImageForImage:(id)arg1 desiredSize:(struct CGSize)arg2 scale:(double)arg3;
+ (_Bool)writeScaledPNGForImage:(id)arg1 desiredSize:(struct CGSize)arg2 scale:(double)arg3 withPath:(id)arg4;
+ (_Bool)writeScaledCPBitmapForImage:(id)arg1 desiredSize:(struct CGSize)arg2 scale:(double)arg3 withPath:(id)arg4;

@end
