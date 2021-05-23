/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <UIKit/UIColor.h>

@interface UIColor (SCNAdditions)

+ (id)scn_colorWithC3DColor:(const C3DColor4_0cad58d8 *)arg1;
+ (id)color:(double)arg1:(double)arg2:(double)arg3:(double)arg4;

- (double)g;
- (double)r;
- (double)b;
- (double)a;
- (C3DColor4_0cad58d8)scn_C3DColorIgnoringColorSpace:(_Bool)arg1 success:(_Bool *)arg2;

@end
