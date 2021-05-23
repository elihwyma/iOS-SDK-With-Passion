/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICDocCamUtilities : NSObject

+ (struct CGSize)aspectFillSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize)arg2 interpolationQuality:(int)arg3;
+ (struct CGSize)aspectFitSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
+ (void)prepareForRotationIfNecessaryWithShutterButton:(id)arg1 coodinator:(id)arg2;
+ (_Bool)shouldPerformCustomAnimationForTransitionCoordinator:(id)arg1;
+ (id)buttonFromCopyingValuesFromButton:(id)arg1;
+ (struct CGAffineTransform)transformForOrientation:(id)arg1 newSize:(struct CGSize)arg2;
+ (id)resizedImage:(id)arg1 newSize:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3 drawTransposed:(_Bool)arg4 interpolationQuality:(int)arg5;

@end
