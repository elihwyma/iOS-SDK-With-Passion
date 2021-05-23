/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@interface UIView (GKAdditionsAdditional)

@property (nonatomic) struct CGPoint integralCenter;

+ (id)_gkViewFromNib;
+ (id)_gkStandardBackdropView;

- (void)_gkRecursivelyApplyBlock:(CDUnknownBlockType)arg1 depth:(long long)arg2;
- (id)_gkRecursiveDescriptionForKey:(id)arg1 depth:(long long)arg2;
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2 depth:(long long)arg3;
- (void)_gkApplyPerspectiveTransform;
- (void)_gkClearPerspectiveTransform;
- (double)_gkPerspectiveTransformEZ;
- (_Bool)_gkSuperviewHasPerspectiveTransform;
- (id)_gkRecursiveDescriptionForKey:(id)arg1;
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2;
- (id)_gkAncestryDescription;
- (id)_gkAncestryAffectingVisualLayout;
- (void)_gkSetNeedsRender;
- (void)_gkEnumerateSubviewsUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)_gkPopoverPresentationRect;
- (struct UIEdgeInsets)_gkPopoverPresentationInsets;
- (void)_gkAddStandardFadeTransition;
- (struct CGRect)_gkPopoverPresentationArea;
- (void)_gkPerformWithoutAnimationWhenRotating:(CDUnknownBlockType)arg1;
- (void)_gkRemovePositionConstraintsForBubble:(id)arg1;
- (void)_gkAddPositionConstraints:(struct CGPoint)arg1 forBubble:(id)arg2;
- (void)_gkUseAsModalSheetBackgroundWithGroupName:(id)arg1;
- (id)_gkApplyFakeStatusBarView;
- (void)_gkApplyBackdropViewIfNeededWithGroupName:(id)arg1;
- (void)_gkSetDrawsAsBackdropOverlay:(_Bool)arg1;
- (void)_gkSetDrawsAsKnockout:(_Bool)arg1 inBackdrop:(id)arg2;
- (id)_gkBackdropView;
- (void)_gkApplyBackdropViewWithGroupName:(id)arg1;

@end
