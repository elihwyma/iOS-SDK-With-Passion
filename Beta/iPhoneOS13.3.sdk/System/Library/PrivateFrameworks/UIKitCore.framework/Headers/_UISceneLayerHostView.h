/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDirectionalRotationView.h>

@class FBSceneLayer, UIScenePresentationContext, UITransformer;

__attribute__((visibility("hidden")))
@interface _UISceneLayerHostView : _UIDirectionalRotationView

{
    FBSceneLayer *_sceneLayer;
    UITransformer *_transformer;
    UIScenePresentationContext *_presentationContext;
    UIScenePresentationContext *_currentPresentationContext;
}

@property (retain, nonatomic) UIScenePresentationContext *currentPresentationContext;
@property (retain, nonatomic) UITransformer *transformer;
@property (nonatomic, readonly) FBSceneLayer *sceneLayer;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithSceneLayer:(id)arg1;

@end
