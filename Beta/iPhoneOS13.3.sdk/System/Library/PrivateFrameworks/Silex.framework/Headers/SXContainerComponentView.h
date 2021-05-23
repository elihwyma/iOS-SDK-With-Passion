/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class NSArray, NSString, SXDragManager;

@protocol SXMediaSharingPolicyProvider;

@interface SXContainerComponentView : SXComponentView

{
    NSArray *_componentViews;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    SXDragManager *_dragManager;
}

@property (nonatomic, readonly) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (retain, nonatomic) SXDragManager *dragManager;
@property (retain, nonatomic) NSArray *componentViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStart:(id)arg1;
- (void)addComponentView:(id)arg1;
- (void)removeComponentView:(id)arg1;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 mediaSharingPolicyProvider:(id)arg5;
- (id)viewForDragManager:(id)arg1;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (_Bool)allowHierarchyRemoval;
- (id)transitionContentView;
- (_Bool)transitionViewShouldFadeInContent;
- (struct CGRect)transitionContentFrame;
- (_Bool)isTransitionable;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (_Bool)userInteractable;
- (id)contentViewForBehavior:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)didApplyBehavior:(id)arg1;
- (id)componentViewsForRole:(int)arg1 recursive:(_Bool)arg2;

@end
