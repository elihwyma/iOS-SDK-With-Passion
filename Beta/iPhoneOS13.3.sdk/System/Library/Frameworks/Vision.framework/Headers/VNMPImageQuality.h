/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPImageQuality : NSObject

+ (float)computeImageQuality:(struct vImage_Buffer *)arg1 forCriteria:(id)arg2 error:(id *)arg3;

@end
