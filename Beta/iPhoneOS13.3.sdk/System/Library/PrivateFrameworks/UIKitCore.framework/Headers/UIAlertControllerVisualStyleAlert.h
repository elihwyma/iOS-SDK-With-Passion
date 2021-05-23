/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAlertControllerVisualStyle.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle

- (double)textFieldHorizontalMargin;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2;
- (_Bool)placementAvoidsKeyboard;
- (id)titleLabelFont;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (id)titleLabelColor;
- (id)messageLabelFont;
- (id)messageLabelColor;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)maximumWidth;
- (long long)permittedActionLayoutDirection;
- (double)_marginAroundActionGroup;

@end
