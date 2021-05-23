/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXBasicTileAnimationOptions, UIView, _PXWidgetCompositionUIViewElementTileTransitionContext;

@protocol PXWidget;

@interface PXWidgetCompositionUIViewElementTile : NSObject <Swift>

{
    _Bool __didEmbedContentView;
    id <PXWidget> _widget;
    UIView *__containerView;
    _PXWidgetCompositionUIViewElementTileTransitionContext *__currentTransitionContext;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, setter=_setDidEmbedContentView:) _Bool _didEmbedContentView;
@property (retain, nonatomic, setter=_setCurrentTransitionContext:) _PXWidgetCompositionUIViewElementTileTransitionContext *_currentTransitionContext;
@property (nonatomic, readonly) id <PXWidget> widget;
@property (nonatomic, readonly) PXBasicTileAnimationOptions *animationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (id)initWithWidget:(id)arg1;
- (void)_embedContentView;
- (id)_willAnimateTileToGeometry:(struct PXTileGeometry)arg1 withOptions:(id)arg2;
- (void)_didAnimateTileWithContext:(id)arg1;
- (void)_didCompleteTileAnimationWithContext:(id)arg1;

@end
