/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CALayer.h>

@interface CALayer (MKDoubleLayer)

@property (retain, nonatomic, readonly) CALayer *currentLayer;
@property (retain, nonatomic, readonly) CALayer *_mapKit_mapLayer;

- (void)setDoubleBounds:(struct CGRect)arg1;
- (void)setDoublePosition:(struct CGPoint)arg1;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)doubleBounds;
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (struct CGPoint)doublePosition;
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (_Bool)getPresentationValue:(id *)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(_Bool)arg4;
- (_Bool)getPresentationValue:(id *)arg1 forKey:(id)arg2 removeAnimation:(_Bool)arg3;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;

@end
