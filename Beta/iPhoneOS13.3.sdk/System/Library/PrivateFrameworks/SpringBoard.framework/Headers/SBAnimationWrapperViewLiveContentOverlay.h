/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBAnimationWrapperViewLiveContentOverlay : NSObject <Swift>

{
    long long _containerOrientation;
    SBSceneLayoutAnimationWrapperView *_animationWrapperView;
}

@property (nonatomic, readonly) SBSceneLayoutAnimationWrapperView *animationWrapperView;
@property (nonatomic) long long containerOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *contentOverlayView;

- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (long long)rasterizationStyle;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (id)initWithAnimationWrapperView:(id)arg1;

@end
