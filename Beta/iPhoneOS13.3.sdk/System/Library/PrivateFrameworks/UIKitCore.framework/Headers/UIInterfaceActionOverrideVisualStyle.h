/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionHighlightAttributes, UIInterfaceActionSeparatorAttributes;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle

{
    _Bool _alignActionSeparatorLeadingEdgeWithContent;
    double _customSelectionHighlightContinuousCornerRadius;
    UIInterfaceActionSeparatorAttributes *_customSeparatorAttributes;
    UIInterfaceActionHighlightAttributes *_customActionHighlightAttributes;
    CDUnknownBlockType _customTitleLabelFontProviderForViewState;
}

@property double customSelectionHighlightContinuousCornerRadius;
@property (nonatomic) _Bool alignActionSeparatorLeadingEdgeWithContent;
@property (retain, nonatomic) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes;
@property (retain, nonatomic) UIInterfaceActionHighlightAttributes *customActionHighlightAttributes;
@property (copy, nonatomic) CDUnknownBlockType customTitleLabelFontProviderForViewState;

+ (id)styleOverride;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;

@end
