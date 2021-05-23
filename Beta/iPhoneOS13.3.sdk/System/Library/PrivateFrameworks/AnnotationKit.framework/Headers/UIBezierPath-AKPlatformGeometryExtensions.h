/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIBezierPath.h>

@interface UIBezierPath (AKPlatformGeometryExtensions)

- (struct CGPath *)newCGPathForPlatformBezierPath;
- (void)akAppendPath:(id)arg1;

@end
