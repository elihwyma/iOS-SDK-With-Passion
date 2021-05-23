/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSLayoutConstraint.h>

@interface NSLayoutConstraint (RCAdditions)

+ (id)rc_viewsInConstraints:(id)arg1;
+ (_Bool)rc_areConstraints:(id)arg1 equalToConstraints:(id)arg2;
+ (id)rc_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(struct UIEdgeInsets)arg5;
+ (id)rc_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset)arg4;
+ (id)rc_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets)arg4;
+ (id)rc_constraintsBySizingView:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)rc_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;

- (_Bool)rc_isEqualToConstraint:(id)arg1;
- (id)rc_debugIdentifierWithBaseLabel:(id)arg1;
- (void)rc_setIdentifierWithLabel:(id)arg1;

@end
