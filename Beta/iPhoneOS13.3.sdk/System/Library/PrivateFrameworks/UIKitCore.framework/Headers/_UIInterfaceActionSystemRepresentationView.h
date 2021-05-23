/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionRepresentationView.h>

@class NSArray, NSSet, NSString, _UIInterfaceActionImagePropertyView, _UIInterfaceActionLabelsPropertyView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView

{
    _UIInterfaceActionImagePropertyView *_leadingImageView;
    _UIInterfaceActionImagePropertyView *_trailingImageView;
    _UIInterfaceActionLabelsPropertyView *_labelsView;
    NSSet *_viewsToDisplayWhenContentsVisible;
    NSSet *_displayedViews;
    NSArray *_displayedViewsSpacingConstraints;
    NSArray *_displayedViewsPositioningConstraints;
}

@property (nonatomic, readonly) _UIInterfaceActionImagePropertyView *leadingImageView;
@property (nonatomic, readonly) _UIInterfaceActionImagePropertyView *trailingImageView;
@property (nonatomic, readonly) _UIInterfaceActionLabelsPropertyView *labelsView;
@property (retain, nonatomic) NSSet *viewsToDisplayWhenContentsVisible;
@property (retain, nonatomic) NSSet *displayedViews;
@property (nonatomic, readonly) NSArray *displayedViewsSpacingConstraints;
@property (nonatomic, readonly) NSArray *displayedViewsPositioningConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAction:(id)arg1;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)_applyVisualStyle;
- (void)updateConstraints;
- (void)updateContentsInsertedIntoHierarchy;
- (void)loadContents;
- (void)_invalidateDisplayedViewsConstraints;
- (void)_reloadViewsToDisplayWhenContentsVisible;
- (void)_arrangeDisplayedViews;
- (void)_loadConstraintsForDisplayedViews;
- (void)_applyVisualStyleToDisplayedViews;
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;
- (_Bool)_hasLoadedContents;
- (void)_removeAllDisplayedViews;
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
- (void)_loadConstraintsForLabelsOnlyDisplay;
- (void)_loadConstraintsForLabelsAndImagesDisplay;
- (void)_activateDisplayedViewsConstraints;
- (id)_constraintForVerticallyCenteringLabelsView;
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
- (_Bool)_isDisplayingLeadingImageView;
- (id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)arg1;
- (_Bool)_isDisplayingTrailingImageView;
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
- (id)_constraintsForHorizontallyCenteringLabelsView;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(_Bool)arg1;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(_Bool)arg1;
- (id)_horizontalEdgeReference;
- (_Bool)_displayedViewsConstraintsNeedsLoading;

@end
