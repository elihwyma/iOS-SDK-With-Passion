/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UILabel;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionLabelsPropertyView : UIView

{
    NSLayoutConstraint *_leadingLabelLeadingConstraint;
    NSLayoutConstraint *_leadingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_trailingLabelTrailingConstraint;
    NSLayoutConstraint *_trailingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_interLabelSpacingConstraint;
    UILabel *_classificationLabel;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
    UIInterfaceAction *_action;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithAction:(id)arg1;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (id)_visualStyle;
- (void)_applyVisualStyle;
- (void)tintColorDidChange;
- (id)_interfaceActionViewState;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_reloadContentForTitleDisplayProperties;
- (void)_reloadContentClassificationLabelDisplayProperties;
- (void)_applyVisualStyleToLabels;
- (id)_classificationLabelIfVisible;
- (id)_newLabel;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
