/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAEmitterLayer : CALayer

@property const struct CGPath *emitterPath;
@property (copy) NSArray *emitterRects;
@property float emitterDuration;
@property float spinBias;
@property (copy) NSArray *emitterBehaviors;
@property struct CGRect cullRect;
@property double cullMinZ;
@property double cullMaxZ;
@property double updateInterval;
@property (copy) NSArray *emitterCells;
@property float birthRate;
@property float lifetime;
@property struct CGPoint emitterPosition;
@property double emitterZPosition;
@property struct CGSize emitterSize;
@property double emitterDepth;
@property (copy) NSString *emitterShape;
@property (copy) NSString *emitterMode;
@property (copy) NSString *renderMode;
@property _Bool preservesDepth;
@property float velocity;
@property float scale;
@property float spin;
@property unsigned int seed;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_colorSpaceDidChange;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;

@end
