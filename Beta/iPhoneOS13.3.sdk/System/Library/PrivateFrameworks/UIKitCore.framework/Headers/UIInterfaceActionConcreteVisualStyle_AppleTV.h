/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)defaultScreen;
- (double)contentCornerRadius;
- (struct UIEdgeInsets)contentMargin;
- (double)horizontalImageContentSpacing;
- (double)verticalImageContentSpacing;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (struct CGSize)minimumActionContentSize;
- (_Bool)selectByPressGestureRequired;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingLabelStyling;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;

@end
