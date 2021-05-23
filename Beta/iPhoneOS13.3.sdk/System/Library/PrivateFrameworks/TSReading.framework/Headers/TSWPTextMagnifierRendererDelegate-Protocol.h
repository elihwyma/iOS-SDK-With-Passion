/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@class NSString;

@protocol TSWPTextMagnifierRendererDelegate

@property (nonatomic, readonly) NSString *underlayImageName;
@property (nonatomic, readonly) NSString *overlayImageName;
@property (nonatomic, readonly) NSString *maskImageName;

- (unsigned short)drawMagnifierClippedCanvasLayer:inContext: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldHideCanvasLayer;

@end
