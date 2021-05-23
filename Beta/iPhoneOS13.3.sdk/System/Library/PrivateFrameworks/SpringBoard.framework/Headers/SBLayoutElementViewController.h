/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class FBDisplayLayoutElement, FBSDisplayIdentity, NSString, SBLayoutElement, SBLayoutState, SBOrientationTransformWrapperView, UIView;

@interface SBLayoutElementViewController : UIViewController

{
    SBOrientationTransformWrapperView *_contentWrapperView;
    FBDisplayLayoutElement *_displayLayoutElement;
    _Bool _isViewVisible;
    _Bool _isTransitioningVisibility;
    _Bool _dragging;
    UIView *_contentContainerView;
    FBSDisplayIdentity *_displayIdentity;
    SBLayoutElement *_layoutElement;
    SBLayoutState *_layoutState;
    unsigned long long _supportedContentInterfaceOrientations;
    long long _contentWrapperInterfaceOrientation;
    struct CGRect _referenceFrame;
}

@property (nonatomic, readonly) UIView *_contentContainerView;
@property (nonatomic, readonly) _Bool _shouldDisplayLayoutElementBecomeActive;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) SBLayoutElement *layoutElement;
@property (nonatomic, readonly) SBLayoutState *layoutState;
@property (nonatomic, readonly) struct CGRect referenceFrame;
@property (nonatomic, readonly) unsigned long long supportedContentInterfaceOrientations;
@property (nonatomic) long long contentWrapperInterfaceOrientation;
@property (nonatomic, readonly) _Bool supportsReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDragging) _Bool dragging;

- (void)dealloc;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)sourceView;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (id)initialCornerRadiusConfiguration;
- (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
- (id)initialDiffuseShadowFilters;
- (id)initialRimShadowFilters;
- (id)containerViewForBlurContentView;
- (id)initWithDisplayIdentity:(id)arg1;
- (void)willBeginTransitionToVisible:(_Bool)arg1;
- (void)didEndTransitionToVisible:(_Bool)arg1;
- (void)_updateDisplayLayoutElementVisibility;
- (void)_updateDisplayLayoutElementWithBuilder:(CDUnknownBlockType)arg1;

@end
