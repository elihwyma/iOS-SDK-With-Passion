/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <UIKit/UIView.h>

@class FBSceneLayer;

@interface FBSceneLayerHostView : UIView

{
    FBSceneLayer *_sceneLayer;
}

@property (nonatomic, readonly) FBSceneLayer *sceneLayer;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithSceneLayer:(id)arg1;

@end
