/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSAffineTransform.h>

@interface NSAffineTransform (NUImaging)

+ (id)nu_transformWithCGAffineTransform:(struct CGAffineTransform)arg1;

- (id)description;
- (struct CGAffineTransform)nu_CGAffineTransform;

@end
