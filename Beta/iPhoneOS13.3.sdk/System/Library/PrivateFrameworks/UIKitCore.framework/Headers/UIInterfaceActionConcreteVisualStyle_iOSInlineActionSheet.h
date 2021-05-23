/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionConcreteVisualStyle_iOSSheet.h>

@class _UIDimmingKnockoutBackdropView;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_iOSInlineActionSheet : UIInterfaceActionConcreteVisualStyle_iOSSheet

{
    _UIDimmingKnockoutBackdropView *_inlineBackgroundView;
}

- (struct UIEdgeInsets)contentMargin;
- (double)horizontalImageContentSpacing;
- (double)verticalImageContentSpacing;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (struct CGSize)minimumActionContentSize;
- (id)_preferredActionFont;
- (id)_regularActionFont;
- (double)_actionTitleFontSize;

@end
