/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSLayoutConstraint.h>

@interface NSLayoutConstraint (NSLayoutConstraint_AVKitAdditions)

+ (id)avkit_constraintsFromEdgesOfItem:(id)arg1 toLeadingAnchor:(id)arg2 topAnchor:(id)arg3 trailingAnchor:(id)arg4 bottomAnchor:(id)arg5 priority:(float)arg6;
+ (id)avkit_constraintsFromEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;
+ (id)avkit_constraintsFromLeadingAndTrailingEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;
+ (id)avkit_constraintsFromTopAndBottomEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;

@end
