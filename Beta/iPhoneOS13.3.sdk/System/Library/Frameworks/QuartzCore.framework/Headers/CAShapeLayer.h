/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAShapeLayer : CALayer

@property const struct CGPath *path;
@property struct CGColor *fillColor;
@property (copy) NSString *fillRule;
@property struct CGColor *strokeColor;
@property double strokeStart;
@property double strokeEnd;
@property double lineWidth;
@property double miterLimit;
@property (copy) NSString *lineCap;
@property (copy) NSString *lineJoin;
@property double lineDashPhase;
@property (copy) NSArray *lineDashPattern;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_colorSpaceDidChange;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;

@end
