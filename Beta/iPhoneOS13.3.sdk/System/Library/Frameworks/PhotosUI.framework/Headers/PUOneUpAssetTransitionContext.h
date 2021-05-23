/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUAssetTransitionInfo, UIView;

@interface PUOneUpAssetTransitionContext : NSObject

{
    _Bool _shouldHideBackground;
    UIView *_containerView;
    UIView *_fromView;
    UIView *_snapshotView;
    PUAssetTransitionInfo *_transitionInfo;
    PUAssetTransitionInfo *_trailingAssetTransitionInfo;
    PUAssetTransitionInfo *_leadingAssetTransitionInfo;
    CDUnknownBlockType _animationBlock;
}

@property (retain, nonatomic, setter=_setContainerView:) UIView *containerView;
@property (retain, nonatomic, setter=_setFromView:) UIView *fromView;
@property (retain, nonatomic, setter=_setSnapshotView:) UIView *snapshotView;
@property (nonatomic, setter=_setShouldHideBackground:) _Bool shouldHideBackground;
@property (retain, nonatomic, setter=_setTransitionInfo:) PUAssetTransitionInfo *transitionInfo;
@property (retain, nonatomic, setter=_setTrailingAssetTransitionInfo:) PUAssetTransitionInfo *trailingAssetTransitionInfo;
@property (retain, nonatomic, setter=_setLeadingAssetTransitionInfo:) PUAssetTransitionInfo *leadingAssetTransitionInfo;
@property (copy, nonatomic, setter=_setAnimationBlock:) CDUnknownBlockType animationBlock;

+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4;
+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4 trailingAssetTransitionInfo:(id)arg5 leadingAssetTransitionInfo:(id)arg6;

- (id)oneUpTransitionContextWithContextWithContainerView:(id)arg1;
- (id)oneUpTransitionContextWithContextShouldHideBackground:(_Bool)arg1;
- (id)oneUpTransitionContextWithAnimationBlock:(CDUnknownBlockType)arg1;

@end
