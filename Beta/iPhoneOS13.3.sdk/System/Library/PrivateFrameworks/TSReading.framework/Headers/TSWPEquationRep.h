/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDRep.h>

@class CALayer, NSString;

@interface TSWPEquationRep : TSDRep

{
    CALayer *_equationLayer;
}

@property (retain, nonatomic) CALayer *equationLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)willBeRemoved;
- (void)screenScaleDidChange;
- (_Bool)directlyManagesLayerContent;
- (void)didUpdateLayer:(id)arg1;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (struct CGRect)clipRect;

@end
