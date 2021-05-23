/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@interface UIView (CKUtilities)

- (_Bool)__ck_containsFirstResponder;
- (struct CGSize)__ck_alignmentRectSizeForFrameSize:(struct CGSize)arg1;
- (struct CGSize)__ck_frameSizeForAlignmentRectSize:(struct CGSize)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 threshold:(double)arg2 velocity:(struct CGPoint)arg3;
- (void)setGradientViewsNeedLayout;
- (void)layoutGradientViewsIfNeeded;
- (void)messageAcknowledgmentBounceView:(CDUnknownBlockType)arg1;
- (void)messageAcknowledgmentShrinkViewToPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (id)__ck_addEqualityConstraintWithItem:(id)arg1 toItem:(id)arg2 usingAttribute:(long long)arg3;

@end
