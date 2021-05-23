/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBSceneLayerHostView.h>

@interface FBContextLayerHostView : FBSceneLayerHostView

@property (nonatomic) unsigned long long renderingMode;

+ (Class)layerClass;

- (id)layer;
- (id)initWithSceneLayer:(id)arg1;

@end
