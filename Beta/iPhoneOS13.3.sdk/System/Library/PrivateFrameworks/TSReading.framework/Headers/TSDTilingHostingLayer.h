/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@class NSMutableSet, TSDInteractiveCanvasController;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer

{
    NSMutableSet *mDirtyTilingLayers;
    TSDInteractiveCanvasController *mController;
}

@property (nonatomic) TSDInteractiveCanvasController *controller;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInit;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;

@end
