/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIAlertControllerVisualStyle.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
+ (long long)interfaceActionPresentationStyle;

- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (_Bool)placementAvoidsKeyboard;
- (id)titleLabelFont;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (id)vibrancyEffectForTitleAndMessageLabel;
- (id)titleLabelColor;
- (double)_spacingBetweenDismissButtonAndContent;
- (id)messageLabelFont;
- (id)messageLabelColor;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)maximumWidth;
- (long long)permittedActionLayoutDirection;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;

@end
