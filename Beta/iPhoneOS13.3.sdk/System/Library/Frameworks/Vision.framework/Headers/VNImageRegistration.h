/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNImageRegistration : NSObject

+ (_Bool)computeTransform:(struct CGAffineTransform *)arg1 forRegisteringImageSignature:(id)arg2 withSignature:(id)arg3 andOptions:(id)arg4 minimumOverlap:(float)arg5 error:(id *)arg6;

@end
