/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAlertControllerVisualStyleAlert.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert

- (struct UIEdgeInsets)textFieldContentInset;
- (double)textFieldHorizontalMargin;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (id)dimmingViewForAlertController:(id)arg1;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)_keyCommandInputForCancelAction;
- (id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2;
- (_Bool)placementAvoidsKeyboard;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
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
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (long long)maximumNumberOfLinesInTitleLabel;
- (long long)maximumNumberOfLinesInMessageLabel;
- (double)_maximumContentWidth;
- (double)_minimumButtonWidth;
- (long long)_effectStyle;
- (id)_detailMessageFont;
- (double)_marginAboveDetailMessageFirstBaseline;
- (double)maximumWidthForTitleAndMessageContentView;
- (double)actionWidthForMinimumActionWidth:(double)arg1;

@end
