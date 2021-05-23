/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKStarRatingViewRenderer : NSObject

+ (void)renderRating:(long long)arg1 intoContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 style:(int)arg4 showDots:(_Bool)arg5 color:(id)arg6;
+ (struct CGPath *)newStarPath:(double)arg1;

- (id)init;

@end
