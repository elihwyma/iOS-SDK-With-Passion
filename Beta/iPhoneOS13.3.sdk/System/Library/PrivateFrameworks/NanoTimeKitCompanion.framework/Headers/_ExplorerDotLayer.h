/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <QuartzCore/CATransformLayer.h>

@class CALayer;

@interface _ExplorerDotLayer : CATransformLayer

{
    CALayer *_noServicePillLayer;
    CALayer *_connectivityDotBackingLayer;
    CALayer *_connectivityDotLayer;
}

@property (nonatomic, readonly) CALayer *noServicePillLayer;
@property (nonatomic, readonly) CALayer *connectivityDotBackingLayer;
@property (nonatomic, readonly) CALayer *connectivityDotLayer;

- (id)init;
- (void)layoutSublayers;

@end
