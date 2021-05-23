/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSLayoutDimension.h>

@interface NSLayoutDimension (NSLayoutDimension_AVKitAdditions)

- (id)avkit_constraintEqualToConstant:(double)arg1 priority:(float)arg2;
- (id)avkit_constraintGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2;
- (id)avkit_constraintLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2;

@end
