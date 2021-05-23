/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ImageProcessing_CoreImageUtils : NSObject

+ (id)createFromImage:(struct vImage_Buffer *)arg1 withType:(int)arg2 error:(id *)arg3;
+ (struct CGImage *)createCGImageFromCIImage:(id)arg1 error:(id *)arg2;
+ (struct vImage_Buffer)createVImageBufferFromCIImage:(id)arg1 error:(id *)arg2;

@end
