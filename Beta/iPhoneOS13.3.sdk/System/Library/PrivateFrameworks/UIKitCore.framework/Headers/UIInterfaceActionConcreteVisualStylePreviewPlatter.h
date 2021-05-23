/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionConcreteVisualStyle_iOSSheet.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStylePreviewPlatter : UIInterfaceActionConcreteVisualStyle_iOSSheet

{
    UIFont *_labelFont;
}

- (id)actionTitleLabelColorForViewState:(id)arg1;
- (double)contentCornerRadius;
- (struct UIEdgeInsets)contentMargin;
- (double)minimumImageGapWidth;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (double)actionSectionSpacing;
- (struct CGSize)minimumActionContentSize;
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (id)_labelFont;

@end
