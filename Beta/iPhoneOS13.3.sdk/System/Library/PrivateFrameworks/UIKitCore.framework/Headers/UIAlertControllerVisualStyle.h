/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIAlertControllerDescriptor, UIInterfaceActionVisualStyle, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyle : NSObject

{
    UIAlertControllerDescriptor *_descriptor;
    long long _forcedInterfaceIdiom;
    UIInterfaceActionVisualStyle *_interfaceActionVisualStyle;
    UITraitCollection *_traitCollection;
}

@property (nonatomic) long long forcedInterfaceIdiom;
@property (nonatomic, readonly) UIInterfaceActionVisualStyle *interfaceActionVisualStyle;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) UIAlertControllerDescriptor *descriptor;

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
+ (long long)interfaceActionPresentationStyle;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (struct CGSize)minimumActionContentSize;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (struct UIEdgeInsets)textFieldContentInset;
- (double)textFieldHorizontalMargin;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (id)dimmingViewForAlertController:(id)arg1;
- (_Bool)shouldPreserveRespondersAcrossWindows;
- (_Bool)shouldOccludeDuringPresentation;
- (_Bool)_shouldReverseActions;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (_Bool)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (id)_keyCommandInputForCancelAction;
- (id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2;
- (_Bool)placementAvoidsKeyboard;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
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
- (long long)maximumNumberOfLinesInTitleLabel;
- (long long)maximumNumberOfLinesInMessageLabel;
- (double)minimumWidth;
- (id)tintColorForAlertController:(id)arg1;
- (double)_marginAroundActionGroup;
- (id)_detailMessageFont;
- (double)_marginAboveDetailMessageFirstBaseline;
- (double)maximumWidthForTitleAndMessageContentView;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (void)_reloadInterfaceActionVisualStyle;
- (Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
- (id)preferredActionFont;
- (id)regularActionFont;
- (double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1;
- (double)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2;
- (double)maximumHeightForDisplayOnScreen:(id)arg1;
- (id)defaultActionFont;
- (struct CGSize)collectionViewOutsetSize;
- (double)contentHorizontalMargin;
- (double)contentVerticalMargin;
- (struct UIEdgeInsets)actionImageMarginForAction;
- (double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1 titleText:(id)arg2;
- (double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1;
- (double)_scaledMarginBelowTitleLabelLastBaseline;
- (double)_scaledMarginAboveMessageLabelFirstBaseline;
- (double)_scaledMarginBelowMessageLabelLastBaseline;
- (double)_scaledMarginBelowLastLabelLastBaseline;
- (double)_scaledMarginAboveDetailMessageFirstBaseline;

@end
