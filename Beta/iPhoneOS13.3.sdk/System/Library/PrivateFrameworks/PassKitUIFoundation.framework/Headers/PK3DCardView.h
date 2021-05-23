/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString, SCNMaterial, SCNView;

@protocol PK3DLiveCardViewDelegate;

@interface PK3DCardView : UIView

{
    SCNView *_sceneView;
    SCNMaterial *_cardMaterial;
    int _design;
    MISSING_TYPE *_lastRollPitch;
    _Bool _renderedOnce;
    _Bool _motionEnabled;
    _Bool _invalidated;
    id <PK3DLiveCardViewDelegate> _delegate;
}

@property (weak, nonatomic) id <PK3DLiveCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (void)setMotionEnabled:(_Bool)arg1;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderSceneWithTextures:(id)arg1 shaders:(id)arg2;
- (void)setRollPitch: /* Error: Ran out of types for this method. */;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;

@end
