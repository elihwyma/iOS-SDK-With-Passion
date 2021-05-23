/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <DrawingKit/Swift-Protocol.h>

@class UIColor;

@protocol DKInkRendererDelegate;

@protocol DKInkRenderer <Swift>

@property (retain, nonatomic) UIColor *inkColor;
@property (weak, nonatomic) id <DKInkRendererDelegate> delegate;
@property (nonatomic) _Bool scaleDrawingToFitCanvas;
@property (nonatomic) double drawingScale;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) _Bool drawingEnabled;
@property (nonatomic, readonly) _Bool supportsBleedAnimation;
@property (nonatomic, readonly) _Bool initialized;
@property (nonatomic, readonly) unsigned long long maximumPointsForBleedAnimation;

- (unsigned short)clear;
- (unsigned short)flush;
- (unsigned short)snapshot;
- (unsigned short)teardown;
- (unsigned short)addPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)force;
- (unsigned short)endStroke;
- (unsigned short)beginStroke;
- (unsigned short)display;
- (unsigned short)removeLastStroke;
- (unsigned short)resetRendererState;
- (unsigned short)completeAnimationsImmediately;

@end
