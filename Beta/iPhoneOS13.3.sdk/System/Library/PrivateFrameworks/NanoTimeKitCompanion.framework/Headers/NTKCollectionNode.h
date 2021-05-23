/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <SpriteKit/SKNode.h>

@class CLKDevice, NSArray, SKAction;

@interface NTKCollectionNode : SKNode

{
    CLKDevice *_device;
    NSArray *_nodes;
    SKAction *_appearAction;
    SKAction *_disappearAction;
    CDUnknownBlockType _animateBlock;
    double _radius;
}

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NSArray *nodes;
@property (retain, nonatomic) SKAction *appearAction;
@property (retain, nonatomic) SKAction *disappearAction;
@property (copy, nonatomic) CDUnknownBlockType animateBlock;
@property (nonatomic) double radius;

+ (id)ticks60UtilitarianForDevice:(id)arg1;
+ (id)hours4ForDevice:(id)arg1;
+ (id)hours12ForDevice:(id)arg1;
+ (id)minutesUtilitarianForDevice:(id)arg1;
+ (id)ticks60ForDevice:(id)arg1;
+ (id)ticks120ForDevice:(id)arg1;
+ (id)ticksPillsForDevice:(id)arg1;
+ (id)ticks240ForDevice:(id)arg1;
+ (id)minutesPillsForDevice:(id)arg1;
+ (float)outerRadiusForDevice:(id)arg1;
+ (float)innerRadiusForDevice:(id)arg1;
+ (id)ticks60ChronoForDevice:(id)arg1;
+ (id)hoursChronoForDevice:(id)arg1;
+ (id)labels60ChronoForDevice:(id)arg1;
+ (id)ticks30ChronoForDevice:(id)arg1;
+ (id)labels30ChronoForDevice:(id)arg1;
+ (id)ticks6ChronoForDevice:(id)arg1;
+ (id)labels6ChronoForDevice:(id)arg1;
+ (id)labels6_10_40ChronoForDevice:(id)arg1;
+ (id)labels3ChronoForDevice:(id)arg1;
+ (id)labels3_10_90ChronoForDevice:(id)arg1;

- (id)initForDevice:(id)arg1;
- (void)createSubNodes;
- (void)applyAppearanceFraction:(double)arg1;
- (void)applyAppearanceFraction:(double)arg1 inverted:(_Bool)arg2;
- (void)scaleNodes:(id)arg1 fraction:(double)arg2;
- (void)fade:(double)arg1 inverted:(_Bool)arg2;
- (id)initForDevice:(id)arg1 withName:(id)arg2 nodes:(id)arg3 animateBlock:(CDUnknownBlockType)arg4;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 scale:(double)arg3 rotate:(_Bool)arg4 round:(_Bool)arg5;
- (void)fadeNodes:(double)arg1 except:(id)arg2;
- (void)scaleNodes:(double)arg1 andResetNodesAtIndices:(id)arg2;
- (void)appearAnimated;
- (void)disappearAnimated;
- (void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 rotate:(_Bool)arg3 round:(_Bool)arg4;
- (void)fadeNodes:(double)arg1;
- (void)scaleNodes:(double)arg1;
- (void)fadeAndScale:(double)arg1;

@end
