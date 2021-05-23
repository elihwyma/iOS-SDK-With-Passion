/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <QuartzCore/CAReplicatorLayer.h>

@class CAShapeLayer, CATextLayer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CRBoxLayer : CAReplicatorLayer

{
    _Bool _customInit;
    double _frameRatio;
    CAShapeLayer *_reticleLayer;
    CATextLayer *_codeLayer;
    NSMutableArray *_completionBlocks;
    double _demoSpeed;
}

@property (retain) CAShapeLayer *reticleLayer;
@property (retain) CATextLayer *codeLayer;
@property (retain) NSMutableArray *completionBlocks;
@property double demoSpeed;
@property _Bool customInit;
@property (nonatomic) double frameRatio;

+ (id)layer;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)layoutSublayers;
- (void)positionForCodeBoxPoints:(id)arg1;
- (void)setString:(id)arg1 mirrored:(_Bool)arg2 inverted:(_Bool)arg3;
- (void)animatePulseColor:(id)arg1;
- (id)initWithCodeFrameRatio:(double)arg1;
- (void)animateReveal;
- (void)animateConceal;
- (void)animateToPosition:(struct CGPoint)arg1 transform:(struct CATransform3D)arg2 opacity:(double)arg3 type:(long long)arg4;

@end
