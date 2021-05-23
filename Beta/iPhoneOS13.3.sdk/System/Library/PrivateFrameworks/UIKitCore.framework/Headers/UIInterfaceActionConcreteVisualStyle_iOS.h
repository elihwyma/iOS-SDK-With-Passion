/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_iOS : UIInterfaceActionConcreteVisualStyle <Swift>

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
- (_Bool)selectionFeedbackEnabled;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;
- (id)_preferredActionFont;
- (id)_regularActionFont;
- (id)_highlightedView;

@end
