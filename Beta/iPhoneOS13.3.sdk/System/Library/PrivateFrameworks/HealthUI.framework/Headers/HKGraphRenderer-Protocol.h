/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/Swift-Protocol.h>

@protocol HKGraphRenderDelegate;

@protocol HKGraphRenderer <Swift>

@property (nonatomic) struct CGRect axisRect;
@property (weak, nonatomic) id <HKGraphRenderDelegate> renderDelegate;

- (unsigned short)setNeedsRender;
- (unsigned short)drawPath:strokeColor:fillColor:markerImage:useGradientFill:blendMode:clipToAxes: /* Error: Ran out of types for this method. */;
- (unsigned short)fillRect:withTexture: /* Error: Ran out of types for this method. */;
- (unsigned short)drawText:atPoint:spaceAvailable:horizontalAlignment:verticalAlignment:textColor:font:clipToAxis:exclusion: /* Error: Ran out of types for this method. */;

@end
