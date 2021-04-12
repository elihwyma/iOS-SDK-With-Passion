//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKShapeLayerPathState : NSObject
{
    double _strokeStartT0;
    double _strokeStartT1;
    double _strokeEndT0;
    double _strokeEndT1;
}

- (double)progressForShapeLayer:(id)arg1;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setProgress:(double)arg1 onShapeLayer:(id)arg2;
- (double)strokeEndAtProgress:(double)arg1;
- (double)strokeStartAtProgress:(double)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4;
- (id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2;
- (id)initWithShapeLayer:(id)arg1 reverse:(BOOL)arg2;
- (id)initWithShapeLayer:(id)arg1;
- (id)init;

@end

