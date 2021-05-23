/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIInterfaceActionConcreteVisualStyle, UIInterfaceActionGroupViewState, UIInterfaceActionOverrideVisualStyle;

@protocol UIInterfaceActionConcreteVisualStyleImpl;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyle : NSObject <Swift>

{
    UIInterfaceActionGroupViewState *_groupViewState;
    UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *_concreteVisualStyle;
    CDUnknownBlockType _fontForViewStateBlock;
    UIInterfaceActionOverrideVisualStyle *_visualStyleOverride;
}

@property (retain, nonatomic) UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *concreteVisualStyle;
@property (copy, nonatomic) CDUnknownBlockType fontForViewStateBlock;
@property (retain, nonatomic) UIInterfaceActionOverrideVisualStyle *visualStyleOverride;
@property (nonatomic, readonly) UIInterfaceActionGroupViewState *groupViewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)defaultScreen;
- (double)contentCornerRadius;
- (struct UIEdgeInsets)contentMargin;
- (double)horizontalImageContentSpacing;
- (double)verticalImageContentSpacing;
- (double)minimumImageGapWidth;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (struct CGSize)minimumActionContentSize;
- (struct CGSize)maximumActionGroupContentSize;
- (_Bool)selectByPressGestureRequired;
- (_Bool)selectionFeedbackEnabled;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;
- (id)actionClassificationLabelFontForViewState:(id)arg1;
- (id)actionClassificationLabelColorForViewState:(id)arg1;
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingLabelStyling;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (id)actionPropertiesAffectingImageViewStyling;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;
- (id)initWithConcreteVisualStyle:(id)arg1;
- (double)actionTitleLabelMinimumScaleFactor;
- (id)_styleForVisualProperties;
- (id)_base_actionPropertiesAffectingLabelStyling;
- (void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (id)_base_actionPropertiesAffectingImageViewStyling;
- (void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (id)copyWithGroupViewState:(id)arg1;
- (id)defaultConcreteActionTitleLabelRegularFont;
- (id)defaultConcreteActionTitleLabelPreferredFont;

@end
