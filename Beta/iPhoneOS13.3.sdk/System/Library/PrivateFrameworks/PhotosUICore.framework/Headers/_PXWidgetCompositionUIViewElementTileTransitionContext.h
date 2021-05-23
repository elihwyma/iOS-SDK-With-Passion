/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXBasicTileAnimationOptions;

@interface _PXWidgetCompositionUIViewElementTileTransitionContext : NSObject

{
    PXBasicTileAnimationOptions *_animationOptions;
    CDUnknownBlockType _alongsideAnimation;
    CDUnknownBlockType _alongsideAnimationCompletion;
}

@property (retain, nonatomic) PXBasicTileAnimationOptions *animationOptions;
@property (copy, nonatomic) CDUnknownBlockType alongsideAnimation;
@property (copy, nonatomic) CDUnknownBlockType alongsideAnimationCompletion;

@end
