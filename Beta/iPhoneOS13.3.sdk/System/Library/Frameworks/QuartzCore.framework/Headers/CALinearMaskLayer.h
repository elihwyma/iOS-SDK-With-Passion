/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@protocol CALinearMaskLayerDelegate><CALayerDelegate;

@interface CALinearMaskLayer : CALayer

@property struct CGColor *foregroundColor;
@property (weak) id <CALinearMaskLayerDelegate><CALayerDelegate> delegate;

+ (id)defaultValueForKey:(id)arg1;

- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)drawInLinearMaskContext:(struct CALinearMaskContext *)arg1;

@end
