/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutConstraint.h>

@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintsWithAutoresizingMask:(unsigned long long)arg1 subitem:(id)arg2 frame:(struct CGRect)arg3 superitem:(id)arg4 bounds:(struct CGRect)arg5;

- (int)_constraintType;
- (id)descriptionAccessory;
- (id)_viewForAutoresizingMask;

@end
