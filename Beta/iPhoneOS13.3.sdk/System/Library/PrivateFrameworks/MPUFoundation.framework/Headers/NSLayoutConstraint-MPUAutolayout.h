/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSLayoutConstraint.h>

@interface NSLayoutConstraint (MPUAutolayout)

+ (id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset)arg4;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets)arg4;
+ (id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(struct UIEdgeInsets)arg3;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned long long)arg3 offset:(struct UIOffset)arg4;
+ (id)constraintsBySizingView:(id)arg1 toSize:(struct CGSize)arg2;

@end
