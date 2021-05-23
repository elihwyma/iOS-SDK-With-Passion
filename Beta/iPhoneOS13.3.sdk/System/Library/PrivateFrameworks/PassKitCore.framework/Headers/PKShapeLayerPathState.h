/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKShapeLayerPathState : NSObject

{
    double _strokeStartT0;
    double _strokeStartT1;
    double _strokeEndT0;
    double _strokeEndT1;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4;
- (id)initWithShapeLayer:(id)arg1 reverse:(_Bool)arg2;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(CDUnknownBlockType)arg3;
- (double)strokeStartAtProgress:(double)arg1;
- (double)strokeEndAtProgress:(double)arg1;
- (id)initWithShapeLayer:(id)arg1;
- (id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2;
- (double)progressForShapeLayer:(id)arg1;

@end
