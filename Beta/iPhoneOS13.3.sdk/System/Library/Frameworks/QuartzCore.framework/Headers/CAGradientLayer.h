/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap;
@property (copy) NSArray *interpolations;
@property (copy) NSArray *colors;
@property (copy) NSArray *locations;
@property struct CGPoint startPoint;
@property struct CGPoint endPoint;
@property (copy) NSString *type;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_colorSpaceDidChange;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;

@end
