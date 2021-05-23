/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@interface CAReplicatorLayer : CALayer

@property long long instanceCount;
@property _Bool preservesDepth;
@property double instanceDelay;
@property struct CATransform3D instanceTransform;
@property struct CGColor *instanceColor;
@property float instanceRedOffset;
@property float instanceGreenOffset;
@property float instanceBlueOffset;
@property float instanceAlphaOffset;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (id)init;
- (void)didChangeValueForKey:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;

@end
