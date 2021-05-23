/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIBezierPath.h>

@interface UIBezierPath (SXAdditions)

+ (id)sx_bezierPathWithNonContinuousRoundedRect:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
+ (id)sx_bezierPathWithRect:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 continuousCorners:(_Bool)arg4;

- (id)TSDBezierPath;

@end
